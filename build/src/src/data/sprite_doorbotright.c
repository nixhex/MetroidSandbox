#pragma bank 255
// SpriteSheet: DoorBotRight

#include "gbs_types.h"
#include "data/sprite_doorbotright_tileset.h"

BANKREF(sprite_doorbotright)

#define SPRITE_3_STATE_DEFAULT 0

const metasprite_t sprite_doorbotright_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_doorbotright_metasprites[] = {
    sprite_doorbotright_metasprite_0
};

const struct animation_t sprite_doorbotright_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 0,
        .end = 0
    }
};

const UWORD sprite_doorbotright_animations_lookup[] = {
    SPRITE_3_STATE_DEFAULT
};

const struct spritesheet_t sprite_doorbotright = {
    .n_metasprites = 1,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_doorbotright_metasprites,
    .animations = sprite_doorbotright_animations,
    .animations_lookup = sprite_doorbotright_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_doorbotright_tileset),
    .cgb_tileset = { NULL, NULL }
};
