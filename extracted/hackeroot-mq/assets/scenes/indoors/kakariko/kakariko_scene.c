#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "kakariko_scene.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "kakariko_room_0.h"

SceneCmd kakariko_sceneCommands[] = {
    SCENE_CMD_SOUND_SETTINGS(5, 19, 31),
    SCENE_CMD_ROOM_LIST(1, kakariko_sceneRoomList0x000088),
    SCENE_CMD_TRANSITION_ACTOR_LIST(1, kakariko_sceneTransitionActorList_000078),
    SCENE_CMD_MISC_SETTINGS(0x20, 0x00000001),
    SCENE_CMD_COL_HEADER(&kakariko_sceneCollisionHeader_000E68),
    SCENE_CMD_ENTRANCE_LIST(kakariko_sceneEntranceList0x000090),
    SCENE_CMD_SPECIAL_FILES(NAVI_QUEST_HINTS_NONE, OBJECT_GAMEPLAY_FIELD_KEEP),
    SCENE_CMD_PATH_LIST(kakariko_scenePathway_0000BC),
    SCENE_CMD_SPAWN_LIST(1, kakariko_sceneStartPositionList0x000068),
    SCENE_CMD_SKYBOX_SETTINGS(16, 0, true),
    SCENE_CMD_EXIT_LIST(kakariko_sceneExitList_000094),
    SCENE_CMD_ENV_LIGHT_SETTINGS(1, kakariko_sceneLightSettings0x000098),
    SCENE_CMD_END(),
};

ActorEntry kakariko_sceneStartPositionList0x000068[] = {
    { ACTOR_PLAYER,     {     98,      0,    176 }, {      0, 0X8000,      0 }, 0x0EFF },
};

TransitionActorEntry kakariko_sceneTransitionActorList_000078[] = {
    { 0, 255, 0, 255, ACTOR_EN_DOOR, 100, 0, 210, 0, 0x01BF },
};

RomFile kakariko_sceneRoomList0x000088[] = {
    { (uintptr_t)_kakariko_room_0SegmentRomStart, (uintptr_t)_kakariko_room_0SegmentRomEnd },
};

Spawn kakariko_sceneEntranceList0x000090[] = {
    { 0x00, 0x00 },
    { 0x00, 0x00 },
};

u16 kakariko_sceneExitList_000094[] = {
    ENTR_KAKARIKO_VILLAGE_6,
    ENTR_DEKU_TREE_0,
};

EnvLightSettings kakariko_sceneLightSettings0x000098[] = {
    { 0x46, 0x28, 0x28, 0x52, 0x00, 0x60, 0x96, 0x8C, 0x8C, 0xE3, 0x76, 0xDD, 0x96, 0x8C, 0x8C, 0x0A, 0x0A, 0x0A,
    0x07E0, 0x07D0 },
};

Vec3s kakariko_scenePathwayList_0000B0[] = {
    {   -134,      0,    -63 },
    {   -135,      0,    115 },
};

Path kakariko_scenePathway_0000BC[] = {
    { ARRAY_COUNT(kakariko_scenePathwayList_0000B0), kakariko_scenePathwayList_0000B0 },
};

u8 kakariko_scene_possiblePadding_0000C4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vec3s kakariko_sceneCollisionHeader_000E68CamPosData[] = {
    {     -8,    600,     72 },
    {  14928,  31676,      0 },
    {   5000,     -1,     -1 },
    {      0,     44,      0 },
    {      0,      0,      0 },
    {   6000,     -1,     -1 },
};

BgCamInfo kakariko_sceneCollisionHeader_000E68CamDataList[] = {
    { 0x0019, 3, &kakariko_sceneCollisionHeader_000E68CamPosData[0] },
    { 0x001A, 3, &kakariko_sceneCollisionHeader_000E68CamPosData[3] },
    { 0x0000, 0, NULL },
};

SurfaceType kakariko_sceneCollisionHeader_000E68SurfaceType[] = {
    {0x00200002, 0x00000800},   {0x00000002, 0x0000080A},   {0x00000102, 0x0000080A},   {0x00000002, 0x00000FC8},
    {0x00000002, 0x00000FC0},   {0x00200002, 0x00000FC0},   {0x00000002, 0x00000FCA},
};

CollisionPoly kakariko_sceneCollisionHeader_000E68Polygons[] = {
    {0x0000, 0x003D, 0x003E, 0x003F, 0x7FFF, 0x0000, 0x0000, 0x00C8},
    {0x0000, 0x003D, 0x003F, 0x0040, 0x7FFF, 0x0000, 0x0000, 0x00C8},
    {0x0000, 0x0041, 0x0042, 0x0043, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0000, 0x0041, 0x0043, 0x0044, 0x8001, 0x0000, 0x0000, 0x00C8},
    {0x0000, 0x0040, 0x0043, 0x0042, 0x0000, 0x0000, 0x7FFF, 0x00C8},
    {0x0000, 0x0040, 0x0042, 0x003D, 0x0000, 0x0000, 0x7FFF, 0x00C8},
    {0x0001, 0x0045, 0x0046, 0x0047, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0001, 0x0045, 0x0047, 0x0048, 0x0000, 0x8001, 0x0000, 0x0064},
    {0x0001, 0x0049, 0x004A, 0x0046, 0x8001, 0x0000, 0x0000, 0x0082},
    {0x0001, 0x0049, 0x0046, 0x0045, 0x8001, 0x0000, 0x0000, 0x0082},
    {0x0000, 0x0048, 0x0047, 0x004B, 0x7FFF, 0x0000, 0x0000, 0xFFBA},
    {0x0000, 0x0048, 0x004B, 0x004C, 0x7FFF, 0x0000, 0x0000, 0xFFBA},
    {0x0000, 0x003E, 0x0048, 0x004C, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x003E, 0x004C, 0x003F, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x003E, 0x0041, 0x0045, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x003E, 0x0045, 0x0048, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x0041, 0x0044, 0x0049, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x0041, 0x0049, 0x0045, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0001, 0x0043, 0x0040, 0x004D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x0043, 0x004D, 0x004E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x004A, 0x004B, 0x004F, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0002, 0x004A, 0x004F, 0x0050, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0003, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0003, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0004, 0x0004, 0x0005, 0x0006, 0x7FFF, 0x0000, 0x0000, 0x0008},
    {0x0004, 0x0004, 0x0006, 0x0007, 0x7FFF, 0x0000, 0x0000, 0x0008},
    {0x0004, 0x0005, 0x0004, 0x0008, 0x0000, 0x0000, 0x7FFF, 0x0066},
    {0x0004, 0x0005, 0x0008, 0x0009, 0x0000, 0x0000, 0x7FFF, 0x0066},
    {0x0004, 0x0003, 0x000A, 0x000B, 0x7FFF, 0x0000, 0x0000, 0x0080},
    {0x0004, 0x0003, 0x000B, 0x0000, 0x7FFF, 0x0000, 0x0000, 0x0080},
    {0x0004, 0x000A, 0x0003, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0066},
    {0x0004, 0x000A, 0x0002, 0x000C, 0x0000, 0x0000, 0x7FFF, 0x0066},
    {0x0005, 0x000D, 0x000E, 0x000F, 0x0000, 0x0000, 0x8001, 0xFFDE},
    {0x0005, 0x000D, 0x000F, 0x0010, 0x0000, 0x0000, 0x8001, 0xFFDE},
    {0x0005, 0x000E, 0x000D, 0x0011, 0x8001, 0x0000, 0x0000, 0xFFD4},
    {0x0005, 0x000E, 0x0011, 0x0012, 0x8001, 0x0000, 0x0000, 0xFFD4},
    {0x0005, 0x0013, 0x0010, 0x000F, 0x7FFF, 0x0000, 0x0000, 0xFFD4},
    {0x0005, 0x0013, 0x000F, 0x0014, 0x7FFF, 0x0000, 0x0000, 0xFFD4},
    {0x0005, 0x0014, 0x0012, 0x0011, 0x0000, 0x0000, 0x7FFF, 0xFFDE},
    {0x0005, 0x0014, 0x0011, 0x0013, 0x0000, 0x0000, 0x7FFF, 0xFFDE},
    {0x0005, 0x0015, 0x0016, 0x0017, 0x8001, 0x0000, 0x0000, 0x00A4},
    {0x0005, 0x0015, 0x0017, 0x0018, 0x8001, 0x0000, 0x0000, 0x00A4},
    {0x0005, 0x0019, 0x0018, 0x0017, 0x0000, 0x0000, 0x7FFF, 0x0044},
    {0x0005, 0x0019, 0x0017, 0x001A, 0x0000, 0x0000, 0x7FFF, 0x0044},
    {0x0005, 0x001B, 0x001C, 0x001D, 0x8001, 0x0000, 0x0000, 0x003C},
    {0x0005, 0x001B, 0x001D, 0x001E, 0x8001, 0x0000, 0x0000, 0x003C},
    {0x0005, 0x001F, 0x001E, 0x001D, 0x0000, 0x0000, 0x7FFF, 0x0096},
    {0x0005, 0x001F, 0x001D, 0x0020, 0x0000, 0x0000, 0x7FFF, 0x0096},
    {0x0005, 0x0021, 0x0022, 0x0023, 0x0000, 0x0000, 0x8001, 0x0002},
    {0x0005, 0x0021, 0x0023, 0x0024, 0x0000, 0x0000, 0x8001, 0x0002},
    {0x0005, 0x0025, 0x0026, 0x0024, 0x7FFF, 0x0000, 0x0000, 0x00AC},
    {0x0005, 0x0025, 0x0024, 0x0023, 0x7FFF, 0x0000, 0x0000, 0x00AC},
    {0x0005, 0x0027, 0x0026, 0x0025, 0x0000, 0x0000, 0x7FFF, 0xFFC2},
    {0x0005, 0x0027, 0x0025, 0x0028, 0x0000, 0x0000, 0x7FFF, 0xFFC2},
    {0x0005, 0x0029, 0x002A, 0x002B, 0xCD94, 0x0000, 0x8A5A, 0x0060},
    {0x0005, 0x0029, 0x002B, 0x002C, 0xCD94, 0x0000, 0x8A5A, 0x0060},
    {0x0005, 0x002A, 0x002D, 0x002E, 0x8A5A, 0x0000, 0xCD94, 0xFFEC},
    {0x0005, 0x002A, 0x002E, 0x002B, 0x8A5A, 0x0000, 0xCD94, 0xFFEC},
    {0x0005, 0x002F, 0x0030, 0x0031, 0x75A6, 0x0000, 0xCD94, 0x005B},
    {0x0005, 0x002F, 0x0031, 0x0032, 0x75A6, 0x0000, 0xCD94, 0x005B},
    {0x0005, 0x0030, 0x0029, 0x002C, 0x326C, 0x0000, 0x8A5A, 0x008F},
    {0x0005, 0x0030, 0x002C, 0x0031, 0x326C, 0x0000, 0x8A5A, 0x008F},
    {0x0005, 0x0033, 0x0034, 0x0035, 0x8001, 0x0000, 0x0000, 0xFF88},
    {0x0005, 0x0033, 0x0035, 0x0036, 0x8001, 0x0000, 0x0000, 0xFF88},
    {0x0005, 0x0037, 0x0036, 0x0035, 0x0000, 0x0000, 0x8001, 0x00A0},
    {0x0005, 0x0037, 0x0035, 0x0038, 0x0000, 0x0000, 0x8001, 0x00A0},
    {0x0005, 0x0038, 0x0039, 0x003A, 0x7FFF, 0x0000, 0x0000, 0x0000},
    {0x0005, 0x0038, 0x003A, 0x0037, 0x7FFF, 0x0000, 0x0000, 0x0000},
    {0x0004, 0x003B, 0x0009, 0x0008, 0x8001, 0x0000, 0x0000, 0xFFB8},
    {0x0004, 0x003B, 0x0008, 0x003C, 0x8001, 0x0000, 0x0000, 0xFFB8},
    {0x0003, 0x0007, 0x003C, 0x0008, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0003, 0x0007, 0x0008, 0x0004, 0x0000, 0x7FFF, 0x0000, 0xFFF0},
    {0x0000, 0x0048, 0x0045, 0x0049, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0000, 0x0048, 0x0049, 0x004C, 0x0000, 0x0000, 0x8001, 0x00C8},
    {0x0005, 0x0051, 0x0052, 0x0053, 0x827D, 0x0000, 0x191A, 0x0077},
    {0x0005, 0x0051, 0x0053, 0x0054, 0x827D, 0x0000, 0x191A, 0x0077},
    {0x0005, 0x0051, 0x0054, 0x0055, 0x8692, 0x0000, 0x287A, 0x0072},
    {0x0005, 0x0051, 0x0055, 0x0056, 0x8692, 0x0000, 0x287A, 0x0072},
    {0x0005, 0x0057, 0x0056, 0x0055, 0x8D84, 0x0000, 0xC6C2, 0x006B},
    {0x0005, 0x0057, 0x0055, 0x0058, 0x8D84, 0x0000, 0xC6C2, 0x006B},
    {0x0005, 0x0057, 0x0058, 0x0059, 0x923F, 0x0000, 0xBE26, 0x0066},
    {0x0005, 0x0057, 0x0059, 0x005A, 0x923F, 0x0000, 0xBE26, 0x0066},
    {0x0005, 0x005B, 0x005A, 0x0059, 0x8692, 0x0000, 0xD786, 0x0074},
    {0x0005, 0x005B, 0x0059, 0x005C, 0x8692, 0x0000, 0xD786, 0x0074},
    {0x0005, 0x005B, 0x005C, 0x005D, 0x8692, 0x0000, 0xD786, 0x0074},
    {0x0005, 0x005B, 0x005D, 0x005E, 0x8692, 0x0000, 0xD786, 0x0074},
    {0x0005, 0x005F, 0x005E, 0x005D, 0xD077, 0x0000, 0x8929, 0x001A},
    {0x0005, 0x005F, 0x005D, 0x0060, 0xD077, 0x0000, 0x8929, 0x001A},
    {0x0005, 0x005F, 0x0060, 0x0061, 0xBE26, 0x0000, 0x923F, 0x002F},
    {0x0005, 0x005F, 0x0061, 0x0062, 0xBE26, 0x0000, 0x923F, 0x002F},
    {0x0005, 0x0063, 0x0062, 0x0061, 0xB900, 0x0000, 0x9580, 0x0036},
    {0x0005, 0x0063, 0x0061, 0x0064, 0xB900, 0x0000, 0x9580, 0x0036},
    {0x0005, 0x0063, 0x0064, 0x0065, 0x9ED1, 0x0000, 0xACB4, 0x0058},
    {0x0005, 0x0063, 0x0065, 0x0066, 0x9ED1, 0x0000, 0xACB4, 0x0058},
    {0x0005, 0x0067, 0x0066, 0x0065, 0x287A, 0x0000, 0x8692, 0xFFAD},
    {0x0005, 0x0067, 0x0065, 0x0068, 0x287A, 0x0000, 0x8692, 0xFFAD},
    {0x0005, 0x0067, 0x0068, 0x0069, 0x150B, 0x0000, 0x81BF, 0xFFC3},
    {0x0005, 0x0067, 0x0069, 0x006A, 0x150B, 0x0000, 0x81BF, 0xFFC3},
    {0x0006, 0x006B, 0x006C, 0x006D, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0006, 0x006B, 0x006D, 0x006A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0005, 0x006B, 0x006A, 0x0069, 0x262E, 0x0000, 0x85D5, 0xFFAF},
    {0x0005, 0x006B, 0x0069, 0x006E, 0x1919, 0xFE1E, 0x8281, 0xFFC0},
    {0x0005, 0x006B, 0x006E, 0x006F, 0x287A, 0xFFAA, 0x8693, 0xFFAC},
    {0x0005, 0x006B, 0x006F, 0x0070, 0x2F89, 0x0000, 0x8929, 0xFFA2},
    {0x0005, 0x006B, 0x0070, 0x0071, 0x2F89, 0x0000, 0x8929, 0xFFA2},
    {0x0005, 0x006B, 0x0071, 0x0072, 0x2F89, 0x0000, 0x8929, 0xFFA2},
    {0x0005, 0x0073, 0x0072, 0x0071, 0x5A82, 0x0000, 0xA57E, 0xFF6C},
    {0x0005, 0x0073, 0x0071, 0x0074, 0x5A82, 0x0000, 0xA57E, 0xFF6C},
    {0x0005, 0x0073, 0x0074, 0x0075, 0x5A82, 0x0000, 0xA57E, 0xFF6C},
    {0x0005, 0x0073, 0x0075, 0x0076, 0x5A82, 0x0000, 0xA57E, 0xFF6C},
    {0x0005, 0x0077, 0x0076, 0x0075, 0x5A82, 0x0000, 0xA57E, 0xFF6C},
    {0x0005, 0x0077, 0x0075, 0x0078, 0x5A82, 0x0000, 0xA57E, 0xFF6C},
    {0x0005, 0x0077, 0x0078, 0x0079, 0x6DC1, 0x0000, 0xBE26, 0xFF51},
    {0x0005, 0x0077, 0x0079, 0x007A, 0x6DC1, 0x0000, 0xBE26, 0xFF51},
    {0x0005, 0x007B, 0x007A, 0x0079, 0x7FFF, 0x0000, 0x0000, 0xFF3B},
    {0x0005, 0x007B, 0x0079, 0x007C, 0x7FFF, 0x0000, 0x0000, 0xFF3B},
    {0x0005, 0x007B, 0x007C, 0x007D, 0x7FFF, 0x0000, 0x0000, 0xFF3B},
    {0x0005, 0x007B, 0x007D, 0x007E, 0x7FFF, 0x0000, 0x0000, 0xFF3B},
    {0x0005, 0x007B, 0x007E, 0x007F, 0x7FFF, 0x0000, 0x0000, 0xFF3B},
    {0x0005, 0x0080, 0x007F, 0x007E, 0x63F3, 0x0000, 0x4FF5, 0xFF5E},
    {0x0005, 0x0080, 0x007E, 0x0081, 0x63F3, 0x0000, 0x4FF5, 0xFF5E},
    {0x0005, 0x0080, 0x0081, 0x0082, 0x4FF5, 0x0000, 0x63F3, 0xFF79},
    {0x0005, 0x0080, 0x0082, 0x0083, 0x4FF5, 0x0000, 0x63F3, 0xFF79},
    {0x0005, 0x0084, 0x0083, 0x0082, 0x796E, 0x0000, 0x287A, 0xFF47},
    {0x0005, 0x0084, 0x0082, 0x0085, 0x796E, 0x0000, 0x287A, 0xFF47},
    {0x0005, 0x0084, 0x0085, 0x0086, 0x6828, 0x0000, 0x4A65, 0xFF59},
    {0x0005, 0x0084, 0x0086, 0x0087, 0x6828, 0x0000, 0x4A65, 0xFF59},
    {0x0005, 0x0088, 0x0087, 0x0086, 0x393E, 0x0000, 0x727C, 0xFF92},
    {0x0005, 0x0088, 0x0086, 0x0089, 0x393E, 0x0000, 0x727C, 0xFF92},
    {0x0005, 0x0088, 0x0089, 0x008A, 0x41DA, 0x0000, 0x6DC1, 0xFF87},
    {0x0005, 0x0088, 0x008A, 0x008B, 0x41DA, 0x0000, 0x6DC1, 0xFF87},
    {0x0005, 0x008C, 0x008B, 0x008A, 0x0000, 0x0000, 0x7FFF, 0xFFDA},
    {0x0005, 0x008C, 0x008A, 0x008D, 0x0000, 0x0000, 0x7FFF, 0xFFDA},
    {0x0005, 0x008C, 0x008D, 0x008E, 0x0000, 0x0000, 0x7FFF, 0xFFDA},
    {0x0005, 0x008C, 0x008E, 0x008F, 0x0000, 0x0000, 0x7FFF, 0xFFDA},
    {0x0005, 0x0090, 0x008F, 0x008E, 0xEAF5, 0x0000, 0x7E41, 0xFFF5},
    {0x0005, 0x0090, 0x008E, 0x0091, 0xEAF5, 0x0000, 0x7E41, 0xFFF5},
    {0x0005, 0x0090, 0x0091, 0x0092, 0xD786, 0x0000, 0x796E, 0x000D},
    {0x0005, 0x0090, 0x0092, 0x0093, 0xD786, 0x0000, 0x796E, 0x000D},
    {0x0005, 0x0094, 0x0093, 0x0092, 0xB334, 0x0000, 0x6666, 0x003C},
    {0x0005, 0x0094, 0x0092, 0x0095, 0xB334, 0x0000, 0x6666, 0x003C},
    {0x0005, 0x0094, 0x0095, 0x0096, 0xB00B, 0x0000, 0x63F3, 0x0040},
    {0x0005, 0x0094, 0x0096, 0x0097, 0xB00B, 0x0000, 0x63F3, 0x0040},
    {0x0005, 0x0098, 0x0097, 0x0096, 0x999A, 0x0000, 0x4CCC, 0x005E},
    {0x0005, 0x0098, 0x0096, 0x0099, 0x999A, 0x0000, 0x4CCC, 0x005E},
    {0x0005, 0x0098, 0x0099, 0x009A, 0x9C0D, 0x0000, 0x4FF5, 0x005A},
    {0x0005, 0x0098, 0x009A, 0x009B, 0x9C0D, 0x0000, 0x4FF5, 0x005A},
    {0x0005, 0x009C, 0x0053, 0x0052, 0x9ED1, 0x0000, 0x534C, 0x0057},
    {0x0005, 0x009C, 0x0052, 0x009D, 0x9ED1, 0x0000, 0x534C, 0x0057},
    {0x0005, 0x009C, 0x009D, 0x009B, 0xA57E, 0x0000, 0x5A82, 0x004F},
    {0x0005, 0x009C, 0x009B, 0x009A, 0xA57E, 0x0000, 0x5A82, 0x004F},
};

Vec3s kakariko_sceneCollisionHeader_000E68Vertices[] = {
    {   -128,     16,   -200 },
    {   -200,     16,   -200 },
    {   -200,     16,   -102 },
    {   -128,     16,   -102 },
    {     -8,     16,   -102 },
    {     -8,      0,   -102 },
    {     -8,      0,   -200 },
    {     -8,     16,   -200 },
    {    -72,     16,   -102 },
    {    -72,      0,   -102 },
    {   -128,      0,   -102 },
    {   -128,      0,   -200 },
    {   -200,      0,   -102 },
    {    -44,      0,    -34 },
    {    -44,    120,    -34 },
    {     44,    120,    -34 },
    {     44,      0,    -34 },
    {    -44,      0,     34 },
    {    -44,    120,     34 },
    {     44,      0,     34 },
    {     44,    120,     34 },
    {    164,    120,   -150 },
    {    164,      0,   -150 },
    {    164,      0,    -68 },
    {    164,    120,    -68 },
    {    200,    120,    -68 },
    {    200,      0,    -68 },
    {     60,    120,   -200 },
    {     60,      0,   -200 },
    {     60,      0,   -150 },
    {     60,    120,   -150 },
    {    180,    120,   -150 },
    {    180,      0,   -150 },
    {   -200,      0,      2 },
    {   -200,    120,      2 },
    {   -172,    120,      2 },
    {   -172,      0,      2 },
    {   -172,    120,     62 },
    {   -172,      0,     62 },
    {   -200,      0,     62 },
    {   -200,    120,     62 },
    {    -60,      0,    130 },
    {    -81,      0,    139 },
    {    -81,    120,    139 },
    {    -60,    120,    130 },
    {    -90,      0,    160 },
    {    -90,    120,    160 },
    {    -30,      0,    160 },
    {    -39,      0,    139 },
    {    -39,    120,    139 },
    {    -30,    120,    160 },
    {   -120,      0,    200 },
    {   -120,    120,    200 },
    {   -120,    120,    160 },
    {   -120,      0,    160 },
    {      0,      0,    160 },
    {      0,    120,    160 },
    {      0,    120,    200 },
    {      0,      0,    200 },
    {    -72,      0,   -200 },
    {    -72,     16,   -200 },
    {   -200,    320,   -200 },
    {   -200,    320,    200 },
    {   -200,      0,    200 },
    {   -200,      0,   -200 },
    {    200,    320,    200 },
    {    200,    320,   -200 },
    {    200,      0,   -200 },
    {    200,      0,    200 },
    {    130,    100,    200 },
    {    130,    100,    210 },
    {     70,    100,    210 },
    {     70,    100,    200 },
    {    130,      0,    200 },
    {    130,      0,    210 },
    {     70,      0,    210 },
    {     70,      0,    200 },
    {   -200,      0,    210 },
    {    200,      0,    210 },
    {     70,      0,    290 },
    {    130,      0,    290 },
    {    122,      0,      5 },
    {    123,      0,     10 },
    {    123,    120,     10 },
    {    122,    120,      5 },
    {    120,    120,     -1 },
    {    120,      0,     -1 },
    {    123,      0,     -7 },
    {    123,    120,     -7 },
    {    126,    120,    -12 },
    {    126,      0,    -12 },
    {    128,      0,    -18 },
    {    128,    120,    -18 },
    {    130,    120,    -24 },
    {    130,      0,    -24 },
    {    135,      0,    -26 },
    {    135,    120,    -26 },
    {    140,    120,    -29 },
    {    140,      0,    -29 },
    {    143,      0,    -31 },
    {    143,    120,    -31 },
    {    149,    120,    -38 },
    {    149,      0,    -38 },
    {    155,      0,    -36 },
    {    155,    120,    -36 },
    {    161,    120,    -35 },
    {    161,      0,    -35 },
    {    177,      0,    -30 },
    {    172,      0,    -32 },
    {    166,      0,    -34 },
    {    166,    120,    -34 },
    {    172,    120,    -32 },
    {    177,    120,    -30 },
    {    182,    120,    -28 },
    {    182,      0,    -28 },
    {    186,      0,    -24 },
    {    186,    120,    -24 },
    {    190,    120,    -20 },
    {    190,      0,    -20 },
    {    194,      0,    -16 },
    {    194,    120,    -16 },
    {    197,    120,    -11 },
    {    197,      0,    -11 },
    {    197,      0,      7 },
    {    197,    120,     -5 },
    {    197,    120,      7 },
    {    197,    120,     13 },
    {    197,      0,     13 },
    {    193,      0,     18 },
    {    193,    120,     18 },
    {    188,    120,     22 },
    {    188,      0,     22 },
    {    187,      0,     25 },
    {    187,    120,     25 },
    {    182,    120,     32 },
    {    182,      0,     32 },
    {    176,      0,     35 },
    {    176,    120,     35 },
    {    171,    120,     38 },
    {    171,      0,     38 },
    {    165,      0,     38 },
    {    165,    120,     38 },
    {    159,    120,     38 },
    {    159,      0,     38 },
    {    153,      0,     37 },
    {    153,    120,     37 },
    {    147,    120,     35 },
    {    147,      0,     35 },
    {    143,      0,     32 },
    {    143,    120,     32 },
    {    138,    120,     28 },
    {    138,      0,     28 },
    {    135,      0,     24 },
    {    135,    120,     24 },
    {    131,    120,     19 },
    {    131,      0,     19 },
    {    129,    120,     17 },
    {    129,      0,     17 },
};

CollisionHeader kakariko_sceneCollisionHeader_000E68 = { 
    { -200, 0, -200 },
    { 200, 320, 290 },
    ARRAY_COUNT(kakariko_sceneCollisionHeader_000E68Vertices), kakariko_sceneCollisionHeader_000E68Vertices,
    ARRAY_COUNT(kakariko_sceneCollisionHeader_000E68Polygons), kakariko_sceneCollisionHeader_000E68Polygons,
    kakariko_sceneCollisionHeader_000E68SurfaceType,
    kakariko_sceneCollisionHeader_000E68CamDataList,
    0, NULL
};

