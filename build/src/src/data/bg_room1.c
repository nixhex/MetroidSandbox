#pragma bank 255

// Background: Room1

#include "gbs_types.h"
#include "data/bg_room1_tileset.h"
#include "data/bg_room1_tilemap.h"

BANKREF(bg_room1)

const struct background_t bg_room1 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_room1_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_room1_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
