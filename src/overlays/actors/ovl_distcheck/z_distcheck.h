#ifndef Z_DISTCHECK_H
#define Z_DISTCHECK_H

#include "ultra64.h"
#include "global.h"

struct distcheck;

typedef void (*distcheckActionFunc)(struct distcheck*, PlayState*);

typedef struct distcheck {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ distcheckActionFunc actionFunc;
    s16 timer;
} distcheck; // size = 0x0150

#endif
