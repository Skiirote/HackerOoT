#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "zoora_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "zoora_room_0.h"

SceneCmd zoora_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, 19, 85),
    SCENE_CMD_ROOM_LIST(1, zoora_sceneRoomList0x000060),
    SCENE_CMD_MISC_SETTINGS(0x10, 0x00000007),
    SCENE_CMD_COL_HEADER(&zoora_sceneCollisionHeader_000360),
    SCENE_CMD_ENTRANCE_LIST(zoora_sceneEntranceList0x000068),
    SCENE_CMD_SPAWN_LIST(1, zoora_sceneStartPositionList0x000050),
    SCENE_CMD_SKYBOX_SETTINGS(20, 0, true),
    SCENE_CMD_EXIT_LIST(zoora_sceneExitList_00006C),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, zoora_sceneLightSettings0x000070),
    SCENE_CMD_END(),
};

ActorEntry zoora_sceneStartPositionList0x000050[] = {
    { ACTOR_PLAYER,     {      0,      0,     -9 }, {      0, 0X8000,      0 }, 0x0E00 },
};

RomFile zoora_sceneRoomList0x000060[] = {
    { (uintptr_t)_zoora_room_0SegmentRomStart, (uintptr_t)_zoora_room_0SegmentRomEnd },
};

Spawn zoora_sceneEntranceList0x000068[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 zoora_sceneExitList_00006C[] = {
    ENTR_ZORAS_DOMAIN_2,
    ENTR_DEKU_TREE_0,
};

EnvLightSettings zoora_sceneLightSettings0x000070[] = {
    { 0x46, 0x28, 0x28, 0x06, 0x72, 0x37, 0xDC, 0xDC, 0xF0, 0x61, 0xB3, 0xE9, 0x78, 0x46, 0xA0, 0x0A, 0x0A, 0x0A,
    0x07E0, 0x07D0 },
};

u8 zoora_scene_possiblePadding_000088[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vec3s zoora_sceneCollisionHeader_000360CamPosData[] = {
    {     80,     66,    140 },
    {    546, -29127,      0 },
    {   5000,     -1,     -1 },
    {      0,     60,    -80 },
    {      0, -32768,      0 },
    {     -1,     -1,     -1 },
};

BgCamInfo zoora_sceneCollisionHeader_000360CamDataList[] = {
    { 0x0019, 3, &zoora_sceneCollisionHeader_000360CamPosData[0] },
    { 0x0017, 3, &zoora_sceneCollisionHeader_000360CamPosData[3] },
    { 0x0000, 0, NULL },
};

SurfaceType zoora_sceneCollisionHeader_000360SurfaceType[] = {
    {0x00000002, 0x00005002},   {0x00000102, 0x000C5002},
};

CollisionPoly zoora_sceneCollisionHeader_000360Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFFD8},
    {0x0000, 0x0004, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0x0078},
    {0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0x0000, 0x7FFF, 0x0078},
    {0x0000, 0x0005, 0x0008, 0x0009, 0x7FFF, 0x0000, 0x0000, 0xFFD8},
    {0x0000, 0x0005, 0x0009, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFFD8},
    {0x0000, 0x0008, 0x000A, 0x000B, 0x0000, 0x0000, 0x7FFF, 0x006A},
    {0x0000, 0x0008, 0x000B, 0x0009, 0x0000, 0x0000, 0x7FFF, 0x006A},
    {0x0000, 0x000A, 0x000C, 0x000D, 0x8054, 0x0000, 0xF6E1, 0xFFD0},
    {0x0000, 0x000A, 0x000D, 0x000B, 0x8054, 0x0000, 0xF6E1, 0xFFD0},
    {0x0000, 0x000C, 0x000E, 0x000F, 0x0000, 0x0000, 0x7FFF, 0x0078},
    {0x0000, 0x000C, 0x000F, 0x000D, 0x0000, 0x0000, 0x7FFF, 0x0078},
    {0x0000, 0x0010, 0x0011, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0010, 0x0012, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0012, 0x0014, 0x0015, 0x7FFF, 0x0000, 0x0000, 0x00B4},
    {0x0000, 0x0012, 0x0015, 0x0016, 0x7FFF, 0x0000, 0x0000, 0x00B4},
    {0x0000, 0x0010, 0x0013, 0x0017, 0xC6C9, 0x726F, 0x03D0, 0x004E},
    {0x0000, 0x0013, 0x0018, 0x0019, 0x8001, 0x0000, 0x0000, 0x00B4},
    {0x0000, 0x0013, 0x0019, 0x0017, 0x8001, 0x0000, 0x0000, 0x00B4},
    {0x0000, 0x0012, 0x0011, 0x0014, 0x3937, 0x726F, 0x03D0, 0x004E},
    {0x0000, 0x001A, 0x001B, 0x001C, 0x8001, 0x0000, 0x0000, 0x0078},
    {0x0000, 0x001A, 0x001C, 0x001D, 0x8001, 0x0000, 0x0000, 0x0078},
    {0x0000, 0x001E, 0x001F, 0x0020, 0x7FFF, 0x0000, 0x0000, 0x0078},
    {0x0000, 0x001E, 0x0020, 0x0021, 0x7FFF, 0x0000, 0x0000, 0x0078},
    {0x0001, 0x0022, 0x2023, 0x0024, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
    {0x0001, 0x0022, 0x2025, 0x0023, 0x0000, 0x7FFF, 0x0000, 0xFFFF},
};

Vec3s zoora_sceneCollisionHeader_000360Vertices[] = {
    {     33,     40,   -136 },
    {    -33,     40,   -136 },
    {    -33,     40,   -112 },
    {     33,     40,   -112 },
    {    200,    120,   -120 },
    {     40,    120,   -120 },
    {     40,      0,   -120 },
    {    200,      0,   -120 },
    {     40,    120,   -106 },
    {     40,      0,   -106 },
    {    -41,    120,   -106 },
    {    -41,      0,   -106 },
    {    -40,    120,   -120 },
    {    -40,      0,   -120 },
    {   -200,    120,   -120 },
    {   -200,      0,   -120 },
    {    158,      0,   -250 },
    {   -158,      0,   -250 },
    {   -180,      0,     80 },
    {    180,      0,     80 },
    {   -180,     11,   -250 },
    {   -180,    109,   -250 },
    {   -180,    120,     80 },
    {    180,     11,   -250 },
    {    180,    120,     80 },
    {    180,    109,   -250 },
    {    120,    120,   -120 },
    {    120,      0,   -120 },
    {    120,      0,     80 },
    {    120,    120,     80 },
    {   -120,    120,     80 },
    {   -120,      0,     80 },
    {   -120,      0,   -120 },
    {   -120,    120,   -120 },
    {    160,      1,      0 },
    {   -160,      1,     80 },
    {    160,      1,     80 },
    {   -160,      1,      0 },
};

CollisionHeader zoora_sceneCollisionHeader_000360 = { 
    { -200, -1, -250 },
    { 200, 120, 80 },
    ARRAY_COUNT(zoora_sceneCollisionHeader_000360Vertices), zoora_sceneCollisionHeader_000360Vertices,
    ARRAY_COUNT(zoora_sceneCollisionHeader_000360Polygons), zoora_sceneCollisionHeader_000360Polygons,
    zoora_sceneCollisionHeader_000360SurfaceType,
    zoora_sceneCollisionHeader_000360CamDataList,
    0, NULL
};

