#pragma bank 255

// Scene: Scene 1
// Sprites

#include "gbs_types.h"
#include "data/sprite_doorbotleft.h"
#include "data/sprite_doorbotright.h"
#include "data/sprite_morphball.h"
#include "data/sprite_beamholder.h"

BANKREF(scene_1_sprites)

const far_ptr_t scene_1_sprites[] = {
    TO_FAR_PTR_T(sprite_doorbotleft),
    TO_FAR_PTR_T(sprite_doorbotright),
    TO_FAR_PTR_T(sprite_morphball),
    TO_FAR_PTR_T(sprite_beamholder)
};
