#ifndef __OLEDEMO_H
#define __OLEDEMO_H

#include "stdint.h"

typedef enum {
    EMOJI_HAPPY = 0,
    EMOJI_SAD,
    EMOJI_SMILE,
    EMOJI_SURPRISED,
    EMOJI_ANGRY,
    EMOJI_WINK,
    EMOJI_COUNT
} EmojiType_t;

void OLED_ShowEmoji(EmojiType_t emoji);
void OLED_EmojiAutoPlay(void);

#endif