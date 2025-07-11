#pragma bank 255
// SpriteSheet: BeamHolder

#include "gbs_types.h"
#include "data/sprite_beamholder_tileset.h"

BANKREF(sprite_beamholder)

#define SPRITE_5_STATE_DEFAULT 0

const metasprite_t sprite_beamholder_metasprite_0[]  = {
    { 0, 8, 0, 16 }, { 0, -8, 2, 16 },
    {metasprite_end}
};

const metasprite_t sprite_beamholder_metasprite_1[]  = {
    { 0, 8, 4, 16 }, { 0, -8, 6, 16 },
    {metasprite_end}
};

const metasprite_t * const sprite_beamholder_metasprites[] = {
    sprite_beamholder_metasprite_0,
    sprite_beamholder_metasprite_1
};

const struct animation_t sprite_beamholder_animations[] = {
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

const UWORD sprite_beamholder_animations_lookup[] = {
    SPRITE_5_STATE_DEFAULT
};

const struct spritesheet_t sprite_beamholder = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_beamholder_metasprites,
    .animations = sprite_beamholder_animations,
    .animations_lookup = sprite_beamholder_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_beamholder_tileset),
    .cgb_tileset = { NULL, NULL }
};
