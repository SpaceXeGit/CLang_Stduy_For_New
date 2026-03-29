#include "stm32f10x.h"
#include "delay.h"
#include "oled.h"
#include "OledEmo.h"

int main(void)
{
    delay_init();
    OLED_Init();

    while(1)
    {
        OLED_EmojiAutoPlay();
    }
}