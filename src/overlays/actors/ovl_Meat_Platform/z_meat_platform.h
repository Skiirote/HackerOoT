#ifndef Z_MEAT_Platform_H
#define Z_MEAT_Platform_H

#include "ultra64.h"
#include "global.h"

struct MeatPlatform;
typedef void (*MeatPlatformActionFunc)(struct MeatPlatform*, PlayState*);

typedef struct MeatPlatform {
    DynaPolyActor dyna;
    MeatPlatformActionFunc actionFunc;
    s16 timer;
    s16 delayTimer;
    f32 moveDist;
} MeatPlatform;
#endif