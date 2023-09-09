#pragma bank 255
// SpriteSheet: SamusAnimatedNineStates

#include "gbs_types.h"
#include "data/sprite_samusanimatedninesta_tileset.h"

BANKREF(sprite_samusanimatedninesta)

#define SPRITE_0_STATE_DEFAULT 0

const metasprite_t sprite_samusanimatedninesta_metasprite_0[]  = {
    { 0, 8, 6, 0 }, { 0, -8, 8, 0 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_1[]  = {
    { 0, 8, 0, 16 }, { 0, -8, 2, 16 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_2[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 4, 32 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_3[]  = {
    { 0, 0, 0, 48 }, { 0, 8, 2, 48 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_4[]  = {
    { 0, 8, 6, 0 }, { 0, -8, 18, 0 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_5[]  = {
    { 0, 8, 20, 0 }, { 0, -8, 8, 0 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_6[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 10, 0 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_7[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_8[]  = {
    { 0, 8, 12, 0 }, { 0, -8, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_9[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 16, 0 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_10[]  = {
    { 0, 8, 16, 32 }, { 0, -8, 4, 32 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_11[]  = {
    { 0, 0, 0, 32 }, { 0, 8, 10, 32 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_12[]  = {
    { 0, 0, 0, 32 }, { 0, 8, 2, 32 },
    {metasprite_end}
};

const metasprite_t sprite_samusanimatedninesta_metasprite_13[]  = {
    { 0, 0, 12, 32 }, { 0, 8, 14, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_samusanimatedninesta_metasprites[] = {
    sprite_samusanimatedninesta_metasprite_0,
    sprite_samusanimatedninesta_metasprite_1,
    sprite_samusanimatedninesta_metasprite_2,
    sprite_samusanimatedninesta_metasprite_3,
    sprite_samusanimatedninesta_metasprite_4,
    sprite_samusanimatedninesta_metasprite_0,
    sprite_samusanimatedninesta_metasprite_5,
    sprite_samusanimatedninesta_metasprite_0,
    sprite_samusanimatedninesta_metasprite_6,
    sprite_samusanimatedninesta_metasprite_7,
    sprite_samusanimatedninesta_metasprite_8,
    sprite_samusanimatedninesta_metasprite_7,
    sprite_samusanimatedninesta_metasprite_9,
    sprite_samusanimatedninesta_metasprite_2,
    sprite_samusanimatedninesta_metasprite_10,
    sprite_samusanimatedninesta_metasprite_2,
    sprite_samusanimatedninesta_metasprite_11,
    sprite_samusanimatedninesta_metasprite_12,
    sprite_samusanimatedninesta_metasprite_13,
    sprite_samusanimatedninesta_metasprite_12
};

const struct animation_t sprite_samusanimatedninesta_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 2,
        .end = 2
    },
    {
        .start = 3,
        .end = 3
    },
    {
        .start = 4,
        .end = 7
    },
    {
        .start = 8,
        .end = 11
    },
    {
        .start = 12,
        .end = 15
    },
    {
        .start = 16,
        .end = 19
    }
};

const UWORD sprite_samusanimatedninesta_animations_lookup[] = {
    SPRITE_0_STATE_DEFAULT
};

const struct spritesheet_t sprite_samusanimatedninesta = {
    .n_metasprites = 20,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_samusanimatedninesta_metasprites,
    .animations = sprite_samusanimatedninesta_animations,
    .animations_lookup = sprite_samusanimatedninesta_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_samusanimatedninesta_tileset),
    .cgb_tileset = { NULL, NULL }
};
