#include "oled.h"
#include "delay.h"

static uint8_t OLED_GRAM[128][8];

#define OLED_SCL_PORT   GPIOB
#define OLED_SCL_PIN    GPIO_Pin_6
#define OLED_SDA_PORT   GPIOB
#define OLED_SDA_PIN    GPIO_Pin_7

static void OLED_I2C_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);

    GPIO_InitStructure.GPIO_Pin = OLED_SCL_PIN | OLED_SDA_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_OD;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(OLED_SCL_PORT, &GPIO_InitStructure);

    GPIO_SetBits(OLED_SCL_PORT, OLED_SCL_PIN);
    GPIO_SetBits(OLED_SDA_PORT, OLED_SDA_PIN);
}

static void OLED_I2C_Start(void)
{
    GPIO_SetBits(OLED_SDA_PORT, OLED_SDA_PIN);
    GPIO_SetBits(OLED_SCL_PORT, OLED_SCL_PIN);
    delay_us(5);
    GPIO_ResetBits(OLED_SDA_PORT, OLED_SDA_PIN);
    delay_us(5);
    GPIO_ResetBits(OLED_SCL_PORT, OLED_SCL_PIN);
}

static void OLED_I2C_Stop(void)
{
    GPIO_ResetBits(OLED_SDA_PORT, OLED_SDA_PIN);
    GPIO_SetBits(OLED_SCL_PORT, OLED_SCL_PIN);
    delay_us(5);
    GPIO_SetBits(OLED_SDA_PORT, OLED_SDA_PIN);
    delay_us(5);
}

static void OLED_I2C_SendByte(uint8_t byte)
{
    uint8_t i;

    for(i = 0; i < 8; i++)
    {
        if(byte & 0x80)
            GPIO_SetBits(OLED_SDA_PORT, OLED_SDA_PIN);
        else
            GPIO_ResetBits(OLED_SDA_PORT, OLED_SDA_PIN);

        byte <<= 1;
        GPIO_SetBits(OLED_SCL_PORT, OLED_SCL_PIN);
        delay_us(2);
        GPIO_ResetBits(OLED_SCL_PORT, OLED_SCL_PIN);
        delay_us(2);
    }

    GPIO_SetBits(OLED_SDA_PORT, OLED_SDA_PIN);
    GPIO_SetBits(OLED_SCL_PORT, OLED_SCL_PIN);
    delay_us(2);
    GPIO_ResetBits(OLED_SCL_PORT, OLED_SCL_PIN);
}

static void OLED_WriteCmd(uint8_t cmd)
{
    OLED_I2C_Start();
    OLED_I2C_SendByte(OLED_ADDRESS);
    OLED_I2C_SendByte(0x00);
    OLED_I2C_SendByte(cmd);
    OLED_I2C_Stop();
}

static void OLED_WriteData(uint8_t data)
{
    OLED_I2C_Start();
    OLED_I2C_SendByte(OLED_ADDRESS);
    OLED_I2C_SendByte(0x40);
    OLED_I2C_SendByte(data);
    OLED_I2C_Stop();
}

void OLED_Init(void)
{
    //delay_init();
    OLED_I2C_Init();

    delay_ms(100);

    OLED_WriteCmd(0xAE);
    OLED_WriteCmd(0xD5);
    OLED_WriteCmd(0x80);
    OLED_WriteCmd(0xA8);
    OLED_WriteCmd(0x3F);
    OLED_WriteCmd(0xD3);
    OLED_WriteCmd(0x00);
    OLED_WriteCmd(0x40);
    OLED_WriteCmd(0x8D);
    OLED_WriteCmd(0x14);
    OLED_WriteCmd(0x20);
    OLED_WriteCmd(0x00);
    OLED_WriteCmd(0xA1);
    OLED_WriteCmd(0xC8);
    OLED_WriteCmd(0xDA);
    OLED_WriteCmd(0x12);
    OLED_WriteCmd(0x81);
    OLED_WriteCmd(0xCF);
    OLED_WriteCmd(0xD9);
    OLED_WriteCmd(0xF1);
    OLED_WriteCmd(0xDB);
    OLED_WriteCmd(0x40);
    OLED_WriteCmd(0xA4);
    OLED_WriteCmd(0xA6);
    OLED_WriteCmd(0xAF);

    OLED_Clear();
}

void OLED_Clear(void)
{
    uint8_t i, j;

    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 128; j++)
        {
            OLED_GRAM[j][i] = 0;
        }
    }

    OLED_Refresh();
}

void OLED_Refresh(void)
{
    uint8_t i, j;
    for(i = 0; i < 8; i++)
    {
        OLED_WriteCmd(0xB0 + i);
        OLED_WriteCmd(0x00);
        OLED_WriteCmd(0x10);

        for(j = 0; j < 128; j++)
        {
            OLED_WriteData(OLED_GRAM[j][i]);
        }
    }
}

void OLED_DrawPoint(uint8_t x, uint8_t y, uint8_t color)
{
    uint8_t page;
    uint8_t bit;
    if(x > 127 || y > 63) return;
    page = y / 8;
    bit = y % 8;
    if(color)
        OLED_GRAM[x][page] |= (1 << bit);
    else
        OLED_GRAM[x][page] &= ~(1 << bit);
}

void OLED_DrawBitmap(uint8_t x, uint8_t y, uint8_t w, uint8_t h, const uint8_t *data)
{
    uint8_t i, j;
    uint16_t index;
    for(j = 0; j < h; j++)
    {
        for(i = 0; i < w; i++)
        {
            index = j * (w / 8) + (i / 8);
            if(data[index] & (0x80 >> (i % 8)))
            {
                OLED_DrawPoint(x + i, y + j, 1);
            }
        }
    }

    OLED_Refresh();
}

void OLED_ShowString(uint8_t x, uint8_t y, char *str, uint8_t size)
{
    uint8_t i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    uint8_t j;
    for(j = 0; j < 6; j++)
    {
        OLED_DrawPoint(x + j, y, 1);
        OLED_DrawPoint(x + j, y + 8, 1);
        OLED_DrawPoint(x, y + j, 1);
        OLED_DrawPoint(x + 5, y + j, 1);
    }
    OLED_Refresh();
}
