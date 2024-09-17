#ifndef Z_MEAT_ELEVATOR_H
#define Z_MEAT_ELEVATOR_H

#include "ultra64.h"
#include "global.h"

struct MeatElevator;
typedef void (*MeatElevatorActionFunc)(struct MeatElevator*, PlayState*);

typedef struct MeatElevator {
    DynaPolyActor dyna;
    MeatElevatorActionFunc actionFunc;
    s16 timer;
} MeatElevator;
#endif