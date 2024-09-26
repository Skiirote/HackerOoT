#ifndef Z_DEATHEYE_H
#define Z_DEATHEYE_H

#include "ultra64.h"
#include "global.h"

struct deatheye;
typedef void (*deatheyeActionFunc)(struct deatheye*, PlayState*);

typedef struct deatheye {
    DynaPolyActor dyna;
    deatheyeActionFunc actionFunc;
    s16 eyeRotX;
    ColliderCylinder colliders[2];
} deatheye;
#endif