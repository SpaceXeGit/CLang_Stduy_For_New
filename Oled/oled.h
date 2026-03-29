//
// Created by SpaceXe on 2026/3/21.
//
#ifndef __OLED_H
#define __OLED_H
#include "stm32f10x.h"
#include "stdint.h"
#define OLED_ADDRESS    0x78
void OLED_Init(void);
void OLED_Clear(void);
void OLED_Refresh(void);
void OLED_DrawPoint(uint8_t x, uint8_t y, uint8_t color);
void OLED_DrawBitmap(uint8_t x, uint8_t y, uint8_t w, uint8_t h, const uint8_t *data);
void OLED_ShowString(uint8_t x, uint8_t y, char *str, uint8_t size);
#endif