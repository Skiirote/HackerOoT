#ifndef Z_MEATPLAT_H
#define Z_MEATPLAT_H

#include "ultra64.h"
#include "global.h"

struct meatplat;
typedef void (*meatplatActionFunc)(struct meatplat*, PlayState*);

typedef struct meatplat {
    DynaPolyActor dyna;
    meatplatActionFunc actionFunc;
    s16 timer;
    s16 delayTimer;
} meatplat;
#endif