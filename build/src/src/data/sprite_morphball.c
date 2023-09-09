#pragma bank 255
// SpriteSheet: MorphBall

#include "gbs_types.h"
#include "data/sprite_morphball_tileset.h"

BANKREF(sprite_morphball)

#define SPRITE_4_STATE_DEFAULT 0

const metasprite_t sprite_morphball_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_morphball_metasprite_1[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_morphball_metasprites[] = {
    sprite_morphball_metasprite_0,
    sprite_morphball_metasprite_1
};

const struct animation_t sprite_morphball_animations[] = {
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    }
};

const UWORD sprite_morphball_animations_lookup[] = {
    SPRITE_4_STATE_DEFAULT
};

const struct spritesheet_t sprite_morphball = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_morphball_metasprites,
    .animations = sprite_morphball_animations,
    .animations_lookup = sprite_morphball_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_morphball_tileset),
    .cgb_tileset = { NULL, NULL }
};
