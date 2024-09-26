#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_ge1.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

s16 sGerudoWhiteUnusedFoldingArmsAnimFrameData[] = {
    0x0000, 0x0CE4, 0xFFCA, 0xC000, 0x005B, 0xFE34, 0xF19B, 0x0EBE, 0xFDF6, 0xEBA1, 0xC068, 0x0007, 0xFC17, 0x08D2, 
    0x0090, 0xF913, 0x145F, 0xB639, 0x8000, 0x0201, 0x00AD, 0xFD5B, 0xF90B, 0xF4BA, 0xF168, 0xF014, 0x5EFF, 0x6133, 
    0x66B5, 0x6DDE, 0x7508, 0x7A8A, 0x7CBE, 0x1530, 0x139E, 0x0FB2, 0x0A98, 0x057E, 0x0192, 0x0000, 0x307C, 0x2C0C, 
    0x20F5, 0x128A, 0x041F, 0xF907, 0xF497, 0xC008, 0xC1A2, 0xC5A2, 0xCAD4, 0xD007, 0xD407, 0xD5A0, 0xCC41, 0xCC8F, 
    0xCD50, 0xCE4B, 0xCF46, 0xD007, 0xD054, 0x1669, 0x14B0, 0x1063, 0x0ACC, 0x0535, 0x00E8, 0xFF2F, 0xCB71, 0xCF93, 
    0xD9EA, 0xE75A, 0xF4CA, 0xFF20, 0x0342, 0xFFA0, 0x010B, 0x0497, 0x0933, 0x0DCF, 0x115B, 0x12C6, 0x5FD0, 0x61C6, 
    0x66AE, 0x6D0E, 0x736E, 0x7856, 0x7A4C, 0xD609, 0xD925, 0xE0EA, 0xEB04, 0xF51F, 0xFCE4, 0x0000, 0xBF38, 0xC404, 
    0xD003, 0xDF9C, 0xEF34, 0xFB34, 0x0000, 0xF709, 0xF443, 0xED51, 0xE44B, 0xDB45, 0xD454, 0xD18D, 0xF42F, 0xF922, 
    0x0582, 0x1598, 0x25AE, 0x320E, 0x3701, 0x0755, 0x06E2, 0x05C0, 0x0447, 0x02CF, 0x01AD, 0x0139, 0xDC8E, 0xDED9, 
    0xE495, 0xEC09, 0xF37D, 0xF939, 0xFB85, 0x0000, 
};

JointIndex sGerudoWhiteUnusedFoldingArmsAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0002 },
    { 0x0003, 0x0000, 0x0003 },
    { 0x0004, 0x0005, 0x0006 },
    { 0x0000, 0x0000, 0x0007 },
    { 0x0008, 0x0009, 0x000A },
    { 0x000B, 0x000C, 0x000D },
    { 0x0000, 0x0000, 0x000E },
    { 0x000F, 0x0010, 0x0011 },
    { 0x0000, 0x0000, 0x0012 },
    { 0x0000, 0x0013, 0x001A },
    { 0x0021, 0x0028, 0x002F },
    { 0x0036, 0x003D, 0x0044 },
    { 0x0000, 0x004B, 0x0052 },
    { 0x0059, 0x0060, 0x0067 },
    { 0x006E, 0x0075, 0x007C },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gGerudoWhiteUnusedFoldingArmsAnim = { 
    { 7 }, sGerudoWhiteUnusedFoldingArmsAnimFrameData,
    sGerudoWhiteUnusedFoldingArmsAnimJointIndices, 19
};

u8 object_ge1_possiblePadding_000178[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sGerudoWhiteIdleAnimFrameData[] = {
    0x0000, 0x0CE4, 0xFFCA, 0xC000, 0x005B, 0xFE34, 0xF19B, 0x0EBE, 0xFDF6, 0xEBA1, 0xC068, 0x0007, 0xFC17, 0x08D2, 
    0x0090, 0xF913, 0x145F, 0xB639, 0x8000, 0x0201, 0x5EFF, 0x1530, 0x307C, 0xC008, 0xCC41, 0x1669, 0xCB71, 0xFFA0, 
    0x5FD0, 0xD609, 0xBF38, 0xF709, 0xF42F, 0x0755, 0xDC8E, 0x0000, 
};

JointIndex sGerudoWhiteIdleAnimJointIndices[] = {
    { 0x0000, 0x0001, 0x0002 },
    { 0x0003, 0x0000, 0x0003 },
    { 0x0004, 0x0005, 0x0006 },
    { 0x0000, 0x0000, 0x0007 },
    { 0x0008, 0x0009, 0x000A },
    { 0x000B, 0x000C, 0x000D },
    { 0x0000, 0x0000, 0x000E },
    { 0x000F, 0x0010, 0x0011 },
    { 0x0000, 0x0000, 0x0012 },
    { 0x0000, 0x0013, 0x0014 },
    { 0x0015, 0x0016, 0x0017 },
    { 0x0018, 0x0019, 0x001A },
    { 0x0000, 0x001B, 0x001C },
    { 0x001D, 0x001E, 0x001F },
    { 0x0020, 0x0021, 0x0022 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gGerudoWhiteIdleAnim = { 
    { 2 }, sGerudoWhiteIdleAnimFrameData,
    sGerudoWhiteIdleAnimJointIndices, 35
};

u8 object_ge1_possiblePadding_000238[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

StandardLimb gGerudoWhiteWaistLimb = { 
    { 0, 3300, -54 }, 0x01, LIMB_DONE,
    gGerudoWhiteWaistDL
};

StandardLimb gGerudoWhiteLeftThighLimb = { 
    { 259, -50, 350 }, 0x02, 0x04,
    gGerudoWhiteLeftThighDL
};

StandardLimb gGerudoWhiteLeftShinLimb = { 
    { 1200, 0, 0 }, 0x03, LIMB_DONE,
    gGerudoWhiteLeftShinDL
};

StandardLimb gGerudoWhiteLeftFootLimb = { 
    { 1400, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gGerudoWhiteLeftFootDL
};

StandardLimb gGerudoWhiteRightThighLimb = { 
    { 259, -50, -350 }, 0x05, 0x07,
    gGerudoWhiteRightThighDL
};

StandardLimb gGerudoWhiteRightShinLimb = { 
    { 1200, 0, 0 }, 0x06, LIMB_DONE,
    gGerudoWhiteRightShinDL
};

StandardLimb gGerudoWhiteRightFootLimb = { 
    { 1400, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gGerudoWhiteRightFootDL
};

StandardLimb gGerudoWhiteTorsoLimb = { 
    { 0, 0, 0 }, 0x08, LIMB_DONE,
    gGerudoWhiteTorsoDL
};

StandardLimb gGerudoWhiteLeftUpperArmLimb = { 
    { 1250, 0, 550 }, 0x09, 0x0B,
    gGerudoWhiteLeftUpperArmDL
};

StandardLimb gGerudoWhiteLeftForearmLimb = { 
    { 1050, 0, 0 }, 0x0A, LIMB_DONE,
    gGerudoWhiteLeftForearmDL
};

StandardLimb gGerudoWhiteLeftHandLimb = { 
    { 751, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gGerudoWhiteLeftHandDL
};

StandardLimb gGerudoWhiteRightUpperArmLimb = { 
    { 1250, 0, -550 }, 0x0C, 0x0E,
    gGerudoWhiteRightUpperArmDL
};

StandardLimb gGerudoWhiteRightForearmLimb = { 
    { 1050, 0, 0 }, 0x0D, LIMB_DONE,
    gGerudoWhiteRightForearmDL
};

StandardLimb gGerudoWhiteRightHandLimb = { 
    { 750, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gGerudoWhiteRightHandDL
};

StandardLimb gGerudoWhiteHeadLimb = { 
    { 1854, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gGerudoWhiteHeadDL
};

void* gGerudoWhiteSkelLimbs[] = {
    &gGerudoWhiteWaistLimb,
    &gGerudoWhiteLeftThighLimb,
    &gGerudoWhiteLeftShinLimb,
    &gGerudoWhiteLeftFootLimb,
    &gGerudoWhiteRightThighLimb,
    &gGerudoWhiteRightShinLimb,
    &gGerudoWhiteRightFootLimb,
    &gGerudoWhiteTorsoLimb,
    &gGerudoWhiteLeftUpperArmLimb,
    &gGerudoWhiteLeftForearmLimb,
    &gGerudoWhiteLeftHandLimb,
    &gGerudoWhiteRightUpperArmLimb,
    &gGerudoWhiteRightForearmLimb,
    &gGerudoWhiteRightHandLimb,
    &gGerudoWhiteHeadLimb,
};

FlexSkeletonHeader gGerudoWhiteSkel = { 
    { gGerudoWhiteSkelLimbs, ARRAY_COUNT(gGerudoWhiteSkelLimbs) }, 15
};

u8 object_ge1_possiblePadding_00033C[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gGerudoWhiteGeneralTLUT[] = {
#include "assets/objects/object_ge1/gerudo_white_general_tlut.rgba16.inc.c"
};

u64 gGerudoWhiteSkinGradientTex[] = {
#include "assets/objects/object_ge1/gerudo_white_skin_gradient.ci8.inc.c"
};

u64 gGerudoWhiteWhiteFabricLipsTex[] = {
#include "assets/objects/object_ge1/gerudo_white_white_fabric_lips.ci8.inc.c"
};

u64 gGerudoWhiteEarTex[] = {
#include "assets/objects/object_ge1/gerudo_white_ear.ci8.inc.c"
};

u64 gGerudoWhiteEyeOpenTex[] = {
#include "assets/objects/object_ge1/gerudo_white_eye_open.rgba16.inc.c"
};

u64 gGerudoWhiteEyeHalfTex[] = {
#include "assets/objects/object_ge1/gerudo_white_eye_half.rgba16.inc.c"
};

u64 gGerudoWhiteEyeClosedTex[] = {
#include "assets/objects/object_ge1/gerudo_white_eye_closed.rgba16.inc.c"
};

u64 gGerudoWhiteFingersTex[] = {
#include "assets/objects/object_ge1/gerudo_white_fingers.ci8.inc.c"
};

u64 gGerudoWhiteArmletTex[] = {
#include "assets/objects/object_ge1/gerudo_white_armlet.ci8.inc.c"
};

u64 gGerudoWhiteJacketTex[] = {
#include "assets/objects/object_ge1/gerudo_white_jacket.ci8.inc.c"
};

u64 gGerudoWhiteTubeTopTex[] = {
#include "assets/objects/object_ge1/gerudo_white_tube_top.ci8.inc.c"
};

u64 gGerudoWhiteNavelTex[] = {
#include "assets/objects/object_ge1/gerudo_white_navel.ci8.inc.c"
};

u64 gGerudoWhiteCleavageTex[] = {
#include "assets/objects/object_ge1/gerudo_white_cleavage.ci8.inc.c"
};

u64 gGerudoWhiteShoeUpperTex[] = {
#include "assets/objects/object_ge1/gerudo_white_shoe_upper.ci8.inc.c"
};

u64 gGerudoWhiteShoeSoleTex[] = {
#include "assets/objects/object_ge1/gerudo_white_shoe_sole.ci8.inc.c"
};

u64 gGerudoWhiteCrotchTex[] = {
#include "assets/objects/object_ge1/gerudo_white_crotch.rgba16.inc.c"
};

u64 gGerudoWhiteHairTLUT[] = {
#include "assets/objects/object_ge1/gerudo_white_hair_tlut.rgba16.inc.c"
};

u64 gGerudoWhiteHairTex[] = {
#include "assets/objects/object_ge1/gerudo_white_hair.ci8.inc.c"
};

Vtx object_ge1Vtx_002B08[] = {
#include "assets/objects/object_ge1/object_ge1Vtx_002B08.vtx.inc"
};

Gfx gGerudoWhiteTorsoDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[329], 7, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[336], 15, 7),
    gsSP2Triangles(6, 7, 8, 0, 9, 0, 6, 0),
    gsSP2Triangles(2, 0, 10, 0, 2, 11, 12, 0),
    gsSP2Triangles(13, 14, 4, 0, 15, 1, 4, 0),
    gsSP2Triangles(6, 1, 16, 0, 17, 18, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteNavelTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(5, 3, 19, 0, 20, 21, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteWhiteFabricLipsTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(&object_ge1Vtx_002B08[351], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(5, 8, 6, 0, 3, 9, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteJacketTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 10, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 21, 18, 0, 15, 22, 23, 0),
    gsSP2Triangles(15, 24, 25, 0, 18, 21, 16, 0),
    gsSP1Triangle(26, 27, 28, 0),
    gsSPVertex(&object_ge1Vtx_002B08[380], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 8, 7, 11, 0),
    gsSP1Triangle(11, 7, 12, 0),
    gsSP1Triangle(13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP1Triangle(22, 23, 21, 0),
    gsSPVertex(&object_ge1Vtx_002B08[404], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 5, 7, 0, 7, 9, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 15, 14, 0, 14, 13, 17, 0),
    gsSP2Triangles(17, 13, 18, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 18, 13, 0, 12, 21, 10, 0),
    gsSP2Triangles(15, 16, 22, 0, 23, 20, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteTubeTopTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(&object_ge1Vtx_002B08[428], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(4, 3, 5, 0, 5, 6, 4, 0),
    gsSP2Triangles(2, 7, 0, 0, 4, 7, 2, 0),
    gsSP2Triangles(8, 5, 3, 0, 4, 6, 9, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(10, 11, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteCleavageTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(13, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(16, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteHeadDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(object_ge1Vtx_002B08, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(1, 9, 10, 0, 2, 11, 0, 0),
    gsSPVertex(&object_ge1Vtx_002B08[12], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_002B08[15], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 1, 0, 0, 11, 5, 12, 0),
    gsSP1Triangle(13, 5, 9, 0),
    gsSPVertex(&object_ge1Vtx_002B08[29], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSPVertex(&object_ge1Vtx_002B08[33], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 2, 11, 0, 12, 13, 0, 0),
    gsSP2Triangles(14, 13, 12, 0, 15, 13, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsSP2Triangles(20, 17, 19, 0, 11, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 23, 25, 0),
    gsSP1Triangle(21, 27, 20, 0),
    gsSPVertex(&object_ge1Vtx_002B08[61], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSPVertex(&object_ge1Vtx_002B08[65], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 0, 8, 9, 0),
    gsSP2Triangles(10, 9, 11, 0, 1, 10, 12, 0),
    gsSP2Triangles(11, 9, 13, 0, 9, 1, 0, 0),
    gsSP1Triangle(1, 12, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteWhiteFabricLipsTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(16, 19, 18, 0, 18, 17, 16, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 25, 24, 0),
    gsSP1Triangle(25, 26, 27, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsSPVertex(&object_ge1Vtx_002B08[93], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(18, 21, 22, 0, 19, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 27, 26, 0, 24, 29, 25, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteRightUpperArmDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[305], 4, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[309], 20, 4),
    gsSP2Triangles(1, 4, 5, 0, 6, 0, 2, 0),
    gsSP2Triangles(0, 7, 8, 0, 9, 1, 10, 0),
    gsSP2Triangles(1, 3, 11, 0, 12, 3, 0, 0),
    gsSP2Triangles(2, 13, 14, 0, 15, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteArmletTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 19, 21, 0, 22, 20, 21, 0),
    gsSP2Triangles(16, 22, 21, 0, 18, 23, 16, 0),
    gsSP2Triangles(23, 22, 16, 0, 18, 19, 20, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteRightForearmDL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[281], 4, 0),
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[285], 12, 4),
    gsSP2Triangles(0, 4, 5, 0, 6, 7, 0, 0),
    gsSP2Triangles(1, 8, 9, 0, 10, 11, 1, 0),
    gsSP2Triangles(1, 2, 12, 0, 13, 2, 0, 0),
    gsSP2Triangles(14, 3, 1, 0, 0, 3, 15, 0),
    gsSPVertex(&object_ge1Vtx_002B08[297], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(4, 3, 5, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 2, 1, 0, 1, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteRightHandDL[] = {
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[226], 4, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[230], 18, 4),
    gsSP2Triangles(0, 4, 5, 0, 6, 7, 3, 0),
    gsSP2Triangles(1, 8, 3, 0, 9, 10, 0, 0),
    gsSP2Triangles(11, 12, 2, 0, 0, 2, 13, 0),
    gsSP2Triangles(14, 15, 1, 0, 1, 0, 16, 0),
    gsSP2Triangles(1, 17, 18, 0, 2, 19, 20, 0),
    gsSP1Triangle(3, 21, 2, 0),
    gsSPVertex(&object_ge1Vtx_002B08[248], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 3, 8, 2, 0),
    gsSP1Triangle(0, 2, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteFingersTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 9, 0),
    gsSP1Triangle(11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 24, 21, 0),
    gsSP2Triangles(25, 26, 27, 0, 27, 28, 25, 0),
    gsSPVertex(&object_ge1Vtx_002B08[277], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteLeftUpperArmDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[202], 4, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[206], 20, 4),
    gsSP2Triangles(4, 5, 2, 0, 0, 1, 6, 0),
    gsSP2Triangles(7, 8, 1, 0, 9, 2, 10, 0),
    gsSP2Triangles(11, 3, 2, 0, 1, 3, 12, 0),
    gsSP2Triangles(13, 14, 0, 0, 2, 0, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteArmletTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 18, 0, 18, 23, 16, 0),
    gsSP2Triangles(18, 22, 23, 0, 21, 19, 16, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteLeftForearmDL[] = {
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[178], 4, 0),
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[182], 12, 4),
    gsSP2Triangles(4, 5, 0, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 1, 0, 1, 10, 11, 0),
    gsSP2Triangles(12, 2, 1, 0, 0, 2, 13, 0),
    gsSP2Triangles(1, 3, 14, 0, 15, 3, 0, 0),
    gsSPVertex(&object_ge1Vtx_002B08[194], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 3, 6, 0, 3, 2, 6, 0),
    gsSP2Triangles(1, 0, 4, 0, 4, 7, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteLeftHandDL[] = {
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[123], 4, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[127], 18, 4),
    gsSP2Triangles(4, 5, 1, 0, 3, 6, 7, 0),
    gsSP2Triangles(3, 8, 0, 0, 1, 9, 10, 0),
    gsSP2Triangles(2, 11, 12, 0, 13, 2, 1, 0),
    gsSP2Triangles(0, 14, 15, 0, 16, 1, 0, 0),
    gsSP2Triangles(17, 18, 0, 0, 19, 20, 2, 0),
    gsSP1Triangle(2, 21, 3, 0),
    gsSPVertex(&object_ge1Vtx_002B08[145], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 0, 8, 4, 0),
    gsSP1Triangle(8, 0, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteFingersTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 9, 0),
    gsSP1Triangle(12, 13, 9, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 24, 21, 0),
    gsSP2Triangles(25, 26, 27, 0, 27, 28, 25, 0),
    gsSPVertex(&object_ge1Vtx_002B08[174], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteWaistDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGerudoWhiteCrotchTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[665], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 5, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 0, 8, 4, 0),
    gsSP2Triangles(4, 8, 5, 0, 4, 12, 1, 0),
    gsSP2Triangles(11, 12, 4, 0, 5, 11, 4, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 14, 13, 0, 18, 14, 17, 0),
    gsSP2Triangles(17, 19, 18, 0, 17, 13, 20, 0),
    gsSP2Triangles(13, 21, 20, 0, 22, 17, 20, 0),
    gsSP1Triangle(21, 22, 20, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteRightThighDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[637], 6, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteWhiteFabricLipsTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[643], 15, 6),
    gsSP2Triangles(0, 6, 7, 0, 8, 1, 0, 0),
    gsSP2Triangles(9, 5, 1, 0, 10, 11, 1, 0),
    gsSP2Triangles(0, 12, 13, 0, 14, 2, 5, 0),
    gsSP2Triangles(15, 2, 16, 0, 2, 17, 18, 0),
    gsSP2Triangles(19, 0, 3, 0, 2, 20, 4, 0),
    gsSPVertex(&object_ge1Vtx_002B08[658], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 1, 0, 0),
    gsSP1Triangle(3, 6, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteRightShinDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[605], 5, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteWhiteFabricLipsTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[610], 18, 5),
    gsSP2Triangles(5, 0, 6, 0, 0, 7, 8, 0),
    gsSP2Triangles(9, 10, 1, 0, 0, 2, 11, 0),
    gsSP2Triangles(12, 13, 1, 0, 1, 14, 2, 0),
    gsSP2Triangles(15, 3, 0, 0, 1, 4, 16, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSP2Triangles(17, 18, 19, 0, 18, 17, 20, 0),
    gsSP2Triangles(20, 17, 21, 0, 19, 22, 17, 0),
    gsSP2Triangles(21, 22, 20, 0, 20, 22, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteWhiteFabricLipsTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[628], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 3, 7, 8, 0),
    gsSP2Triangles(5, 7, 3, 0, 8, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteRightFootDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[556], 3, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteShoeUpperTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[559], 26, 3),
    gsSP2Triangles(3, 0, 1, 0, 4, 2, 0, 0),
    gsSP2Triangles(0, 5, 6, 0, 1, 7, 8, 0),
    gsSP2Triangles(2, 9, 10, 0, 11, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteShoeSoleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteShoeUpperTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsSP1Triangle(20, 21, 22, 0),
    gsSP1Triangle(23, 24, 25, 0),
    gsSP1Triangle(26, 27, 28, 0),
    gsSPVertex(&object_ge1Vtx_002B08[585], 20, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 6, 4, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
    gsSP1Triangle(14, 15, 16, 0),
    gsSP1Triangle(17, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteLeftThighDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[528], 6, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteWhiteFabricLipsTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[534], 15, 6),
    gsSP2Triangles(6, 7, 0, 0, 0, 1, 8, 0),
    gsSP2Triangles(1, 5, 9, 0, 1, 10, 11, 0),
    gsSP2Triangles(12, 13, 0, 0, 5, 2, 14, 0),
    gsSP2Triangles(15, 2, 16, 0, 17, 18, 2, 0),
    gsSP2Triangles(3, 0, 19, 0, 4, 20, 2, 0),
    gsSPVertex(&object_ge1Vtx_002B08[549], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(2, 3, 0, 0, 2, 1, 5, 0),
    gsSP1Triangle(3, 6, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteLeftShinDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[496], 5, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteWhiteFabricLipsTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[501], 12, 5),
    gsSP2Triangles(5, 0, 6, 0, 7, 8, 0, 0),
    gsSP2Triangles(1, 9, 10, 0, 11, 2, 0, 0),
    gsSP2Triangles(1, 12, 13, 0, 2, 14, 1, 0),
    gsSP2Triangles(0, 3, 15, 0, 16, 4, 1, 0),
    gsSPVertex(&object_ge1Vtx_002B08[513], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 8, 5, 0),
    gsSP2Triangles(5, 8, 3, 0, 2, 1, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSP2Triangles(9, 10, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(13, 11, 12, 0, 11, 14, 9, 0),
    gsSP2Triangles(12, 14, 13, 0, 9, 14, 12, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteLeftFootDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_ge1Vtx_002B08[447], 3, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteShoeUpperTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_002B08[450], 26, 3),
    gsSP2Triangles(0, 1, 3, 0, 1, 2, 4, 0),
    gsSP2Triangles(5, 6, 1, 0, 7, 8, 0, 0),
    gsSP2Triangles(9, 10, 2, 0, 2, 0, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP1Triangle(22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 28, 27, 0),
    gsSPVertex(&object_ge1Vtx_002B08[476], 20, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteGeneralTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteShoeSoleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSPEndDisplayList(),
};

Vtx object_ge1Vtx_007588[] = {
#include "assets/objects/object_ge1/object_ge1Vtx_007588.vtx.inc"
};

Gfx gGerudoWhiteHairstyleBobDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteHairTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteHairTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(object_ge1Vtx_007588, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsSPVertex(&object_ge1Vtx_007588[19], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[22], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsSPVertex(&object_ge1Vtx_007588[32], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPVertex(&object_ge1Vtx_007588[38], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 8, 9, 0),
    gsSPVertex(&object_ge1Vtx_007588[48], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPVertex(&object_ge1Vtx_007588[54], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[57], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPVertex(&object_ge1Vtx_007588[66], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[69], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[72], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPVertex(&object_ge1Vtx_007588[78], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPVertex(&object_ge1Vtx_007588[84], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPVertex(&object_ge1Vtx_007588[90], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSPVertex(&object_ge1Vtx_007588[108], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[111], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[114], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPVertex(&object_ge1Vtx_007588[120], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[123], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[126], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(0, 2, 6, 0),
    gsSPVertex(&object_ge1Vtx_007588[133], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPVertex(&object_ge1Vtx_007588[139], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPVertex(&object_ge1Vtx_007588[151], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSPVertex(&object_ge1Vtx_007588[158], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteHairstyleStraightFringeDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteHairTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteHairTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_007588[161], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[164], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[167], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 1, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 4, 0, 3, 11, 4, 0),
    gsSP2Triangles(5, 12, 6, 0, 4, 11, 9, 0),
    gsSP1Triangle(13, 14, 15, 0),
    gsSPVertex(&object_ge1Vtx_007588[183], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPVertex(&object_ge1Vtx_007588[189], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 0, 0),
    gsSPVertex(&object_ge1Vtx_007588[200], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[203], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[206], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[209], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[212], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[215], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 0, 0, 1, 3, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPVertex(&object_ge1Vtx_007588[227], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[230], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[233], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 0, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP1Triangle(15, 16, 17, 0),
    gsSPVertex(&object_ge1Vtx_007588[251], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPVertex(&object_ge1Vtx_007588[257], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_ge1Vtx_007588[260], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 6, 7, 5, 0),
    gsSP2Triangles(5, 8, 3, 0, 5, 7, 8, 0),
    gsSPVertex(&object_ge1Vtx_007588[269], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 2, 0, 2, 1, 4, 0),
    gsSP2Triangles(6, 4, 1, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP1Triangle(16, 15, 14, 0),
    gsSPEndDisplayList(),
};

Gfx gGerudoWhiteHairstyleSpikyDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gGerudoWhiteHairTLUT),
    gsDPLoadTextureBlock(gGerudoWhiteHairTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_ge1Vtx_007588[286], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_ge1Vtx_007588[316], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_ge1Vtx_007588[346], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_ge1Vtx_007588[376], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 4, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_ge1Vtx_007588[407], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 10, 26, 9, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&object_ge1Vtx_007588[437], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

u8 object_ge1_possiblePadding_009868[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sGerudoWhiteClapAnimFrameData[] = {
    0x0000, 0x0CE4, 0xFFCA, 0xC000, 0xFDF6, 0x1530, 0x0000, 0x000E, 0x002A, 0x0041, 0x0050, 0x005D, 0x006A, 0x0075, 
    0x007E, 0x0086, 0x007E, 0x0073, 0x007C, 0x0086, 0x007C, 0x0073, 0x007C, 0x0086, 0x007C, 0x0073, 0x0073, 0x0073, 
    0x0073, 0x0073, 0x0073, 0x0CE4, 0x0CF4, 0x0D11, 0x0D25, 0x0D2A, 0x0D2C, 0x0D2B, 0x0D29, 0x0D26, 0x0D25, 0x0D25, 
    0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 0x0D25, 
    0xFFCA, 0xFFA7, 0xFF63, 0xFF34, 0xFF29, 0xFF25, 0xFF27, 0xFF2B, 0xFF30, 0xFF32, 0xFF3B, 0xFF33, 0xFF2B, 0xFF33, 
    0xFF33, 0xFF33, 0xFF33, 0xFF33, 0xFF33, 0xFF33, 0xFF33, 0xFF33, 0xFF33, 0xFF33, 0xFF33, 0xC000, 0xBF8C, 0xBF18, 
    0xC000, 0xC413, 0xC982, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 
    0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0xCC39, 0x005B, 0x0049, 0x0025, 0x0013, 0x0000, 0xFFFF, 
    0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFE34, 0xFE65, 0xFED7, 0xFF38, 0x0004, 0x00C8, 0x00A6, 0x00D6, 0x0100, 
    0x011E, 0x010B, 0x00D7, 0x00F2, 0x0120, 0x00FC, 0x00D7, 0x00FC, 0x0120, 0x00FC, 0x00D7, 0x00D7, 0x00D7, 0x00D7, 
    0x00D7, 0x00D7, 0xF19B, 0xF1A2, 0xF268, 0xF37D, 0xF718, 0xFB8F, 0xFBF8, 0xFBFC, 0xFBE1, 0xFBE0, 0xFC2C, 0xFBFD, 
    0xFBD0, 0xFBE5, 0xFBF1, 0xFC1C, 0xFBF1, 0xFBE5, 0xFBF1, 0xFC1C, 0xFC1C, 0xFC1C, 0xFC1C, 0xFC1C, 0xFC1C, 0x0EBE, 
    0x0D3E, 0x096D, 0x06FE, 0x04A1, 0x003B, 0x0000, 0x0000, 0x003B, 0x003C, 0x0000, 0x003B, 0x003C, 0x003C, 0x003C, 
    0x0000, 0x003C, 0x003C, 0x003C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xEBA1, 0xEC0D, 0xEC6F, 0xEB74, 
    0xE71A, 0xE1C7, 0xDF12, 0xDF0D, 0xDF08, 0xDF06, 0xDF08, 0xDF0B, 0xDF09, 0xDF06, 0xDF08, 0xDF0B, 0xDF08, 0xDF06, 
    0xDF08, 0xDF0B, 0xDF0B, 0xDF0B, 0xDF0B, 0xDF0B, 0xDF0B, 0xC068, 0xC3A9, 0xC9FD, 0xCD2F, 0xC815, 0xC3DC, 0xC387, 
    0xC32D, 0xC2BB, 0xC28E, 0xC27D, 0xC2AA, 0xC2CE, 0xC285, 0xC297, 0xC2C4, 0xC297, 0xC285, 0xC297, 0xC2C4, 0xC2C4, 
    0xC2C4, 0xC2C4, 0xC2C4, 0xC2C4, 0x0007, 0x0061, 0x0047, 0x0000, 0x0000, 0x0000, 0x0001, 0x0011, 0x0015, 0x0016, 
    0x0016, 0x0019, 0x0019, 0x0015, 0x0017, 0x0019, 0x0017, 0x0015, 0x0017, 0x0019, 0x0019, 0x0019, 0x0019, 0x0019, 
    0x0019, 0xFC17, 0xFC3D, 0xFCAB, 0xFD1F, 0xFD9A, 0xFE16, 0xFE65, 0xFE95, 0xFEBF, 0xFEDD, 0xFEC9, 0xFE96, 0xFEB0, 
    0xFEDF, 0xFEBA, 0xFE96, 0xFEBA, 0xFEDF, 0xFEBA, 0xFE96, 0xFE96, 0xFE96, 0xFE96, 0xFE96, 0xFE96, 0x08D2, 0x02FC, 
    0x0119, 0x03A9, 0x032C, 0x02A2, 0x023D, 0x0071, 0xFFB0, 0xFF5D, 0xFFBF, 0xFFB9, 0xFF55, 0xFF67, 0xFF8E, 0xFFB9, 
    0xFF8E, 0xFF67, 0xFF8E, 0xFFB9, 0xFFB9, 0xFFB9, 0xFFB9, 0xFFB9, 0xFFB9, 0x0090, 0x079B, 0x063B, 0x0000, 0x0000, 
    0x0000, 0x003A, 0x0399, 0x050C, 0x05A5, 0x0542, 0x052D, 0x0597, 0x059D, 0x0568, 0x052D, 0x0568, 0x059D, 0x0568, 
    0x052D, 0x052D, 0x052D, 0x052D, 0x052D, 0x052D, 0xF913, 0xF913, 0xF913, 0xF913, 0xFAD4, 0xFC55, 0xFC55, 0xFC55, 
    0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 0xFC55, 
    0xFC55, 0xFC55, 0xFC55, 0x145F, 0x1509, 0x15C8, 0x14FF, 0x10FE, 0x0B9E, 0x08ED, 0x08EE, 0x08EF, 0x08F0, 0x08EE, 
    0x08ED, 0x08EF, 0x08F0, 0x08EE, 0x08ED, 0x08EE, 0x08F0, 0x08EE, 0x08ED, 0x08ED, 0x08ED, 0x08ED, 0x08ED, 0x08ED, 
    0xB639, 0xB4FE, 0xB871, 0xBCBD, 0xBDB8, 0xBE88, 0xBEBC, 0xBD32, 0xBC89, 0xBC4A, 0xBC47, 0xBC55, 0xBC56, 0xBC49, 
    0xBC4E, 0xBC55, 0xBC4E, 0xBC49, 0xBC4E, 0xBC55, 0xBC55, 0xBC55, 0xBC55, 0xBC55, 0xBC55, 0x0000, 0xFD2D, 0xF81D, 
    0xF2D1, 0xED48, 0xE997, 0xE86F, 0xE894, 0xE93A, 0xE997, 0xE979, 0xE950, 0xE945, 0xE975, 0xE9C2, 0xEA00, 0xEA09, 
    0xEA00, 0xEA00, 0xEA00, 0xEA00, 0xEA00, 0xEA00, 0xEA00, 0xEA00, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0003, 0x0007, 0x0008, 0x0000, 0xFFDE, 0xFFAF, 0xFF98, 0xFFA0, 0xFFC0, 0x0000, 0x00B1, 0x0139, 0x00A8, 0x0000, 
    0xFFE3, 0xFFE0, 0xFFEB, 0xFFF9, 0x0000, 0x8000, 0x809C, 0x8139, 0x8109, 0x8093, 0x8000, 0x7F44, 0x7E62, 0x7D98, 
    0x7D26, 0x7D5E, 0x7E0C, 0x7EA0, 0x7ED8, 0x7EF5, 0x7F2F, 0x7FE3, 0x8068, 0x7FDB, 0x7F2F, 0x7EFE, 0x7EE0, 0x7ECF, 
    0x7EC8, 0x7EC7, 0x0201, 0x0244, 0x02E8, 0x03B5, 0x0473, 0x0533, 0x05F9, 0x067D, 0x06A6, 0x06A2, 0x068B, 0x067D, 
    0x065C, 0x067D, 0x0811, 0x0886, 0x039C, 0xFF8F, 0x040B, 0x0886, 0x0886, 0x0886, 0x0886, 0x0886, 0x0886, 0x5EFF, 
    0x5EAE, 0x5DBF, 0x5C37, 0x5A1C, 0x565C, 0x5193, 0x4E4B, 0x4D58, 0x4D73, 0x4DFA, 0x4E4B, 0x4E4B, 0x4E4B, 0x4E4B, 
    0x4E4B, 0x4E4B, 0x4E4B, 0x4E4B, 0x4E4B, 0x4E4B, 0x4E4B, 0x4E4B, 0x4E4B, 0x4E4B, 0x307C, 0x2F68, 0x2C83, 0x2856, 
    0x2044, 0x1943, 0x185B, 0x195D, 0x1A51, 0x1943, 0x1174, 0x08F7, 0x0677, 0x08EA, 0x1560, 0x2030, 0x1A30, 0x12F0, 
    0x19B4, 0x2030, 0x184F, 0x10B4, 0x10B4, 0x10B4, 0x10B4, 0xC008, 0xC057, 0xC131, 0xC27A, 0xC530, 0xC75E, 0xC75B, 
    0xC6B9, 0xC5CD, 0xC4EC, 0xC3DE, 0xC2E2, 0xC294, 0xC285, 0xC27B, 0xC27A, 0xC26C, 0xC263, 0xC189, 0xC27A, 0xCA81, 
    0xD0BD, 0xD0BD, 0xD0BD, 0xD0BD, 0xCC41, 0xCBBB, 0xCC41, 0xCEE9, 0xD24C, 0xD5D2, 0xD8E4, 0xDAEC, 0xDA8A, 0xD85A, 
    0xD6C7, 0xD6A4, 0xD71C, 0xD81B, 0xD9D8, 0xDCF6, 0xE41C, 0xD4D9, 0xE41C, 0xDCF6, 0xDC5D, 0xDCF6, 0xDCF6, 0xDCF6, 
    0xDCF6, 0x1669, 0x1F6E, 0x2514, 0x1B98, 0x0E41, 0xFF76, 0xF19F, 0xE725, 0xE2FC, 0xE3B4, 0xE522, 0xE634, 0xE7FB, 
    0xE97F, 0xE981, 0xEA68, 0xF206, 0xE504, 0xEA48, 0xEA68, 0xED82, 0xEFB4, 0xEFB4, 0xEFB4, 0xEFB4, 0xCB71, 0xC9B2, 
    0xCB71, 0xD371, 0xDD05, 0xE77C, 0xF227, 0xFC55, 0x077A, 0x128B, 0x191B, 0x17FE, 0x125F, 0x0D54, 0x0BB7, 0x09C7, 
    0x022F, 0x08D9, 0xF2B3, 0x09C7, 0x0BB4, 0x09C7, 0x09C7, 0x09C7, 0x09C7, 0xFFA0, 0xFFBA, 0x0011, 0x00B2, 0x01AA, 
    0x03CB, 0x068D, 0x0996, 0x0C9B, 0x0DB0, 0x0C0B, 0x08ED, 0x057D, 0x02E2, 0x024B, 0x02E2, 0x042C, 0x052D, 0x0408, 
    0x02E2, 0x02E2, 0x02E2, 0x02E2, 0x02E2, 0x02E2, 0x5FD0, 0x6286, 0x682A, 0x6CFE, 0x6D42, 0x5D7D, 0x4C41, 0x4A09, 
    0x4C65, 0x4E4D, 0x4E05, 0x4D62, 0x4CB1, 0x4C41, 0x4CD4, 0x4D12, 0x4AB7, 0x48CB, 0x4AEF, 0x4D12, 0x4D12, 0x4D12, 
    0x4D12, 0x4D12, 0x4D12, 0xD609, 0xD532, 0xD609, 0xDB27, 0xE37B, 0xF208, 0xFD26, 0xFF4E, 0x0032, 0x002A, 0xFF8D, 
    0xFEB0, 0xFDED, 0xFD98, 0xFD5F, 0xFD26, 0xFD5F, 0xFD98, 0xFD65, 0xFD26, 0xFD1C, 0xFD21, 0xFD26, 0xFD26, 0xFD26, 
    0xBF38, 0xC1E4, 0xC75E, 0xCCB7, 0xD5A0, 0xE9F6, 0xFA4C, 0xFE32, 0x009E, 0x01D5, 0x0220, 0x01C5, 0x010C, 0x003B, 
    0xF9F0, 0xF35F, 0xF6D2, 0xFAEF, 0xF70F, 0xF35F, 0xF5F6, 0xFA64, 0xFCBE, 0xFCBE, 0xFCBE, 0xF709, 0xFBB9, 0x0000, 
    0xFEAD, 0xF3C7, 0xCEF2, 0xB024, 0xAA0D, 0xA715, 0xA67C, 0xA77F, 0xA95C, 0xAB53, 0xACA1, 0xB1B9, 0xB6A9, 0xB290, 
    0xAE42, 0xB28D, 0xB6A9, 0xB3DD, 0xAF09, 0xAC7A, 0xAC7A, 0xAC7A, 0xF42F, 0xF00B, 0xEC66, 0xEE7C, 0xF20E, 0xF60E, 
    0xF96D, 0xFB1C, 0xFAEF, 0xF9AF, 0xF7C1, 0xF587, 0xF366, 0xF1C1, 0xF105, 0xF0ED, 0xF157, 0xF1C1, 0xF14A, 0xF0ED, 
    0xF1CA, 0xF28E, 0xF28E, 0xF28E, 0xF28E, 0x0755, 0xEF10, 0xD706, 0xDC1B, 0xE7C5, 0xF60C, 0x02FB, 0x0A98, 0x0C50, 
    0x0AFF, 0x07D3, 0x03FA, 0x00A4, 0xFEFE, 0x0310, 0x0755, 0x032A, 0xFEFE, 0x02BF, 0x0755, 0x06F0, 0x05B4, 0x05B4, 
    0x05B4, 0x05B4, 0xDC8E, 0xF4CF, 0x0F12, 0x0F84, 0x0AB1, 0x0367, 0xFC76, 0xF8AB, 0xF84C, 0xF962, 0xFB5A, 0xFDA6, 
    0xFFB5, 0x00F5, 0xFFA0, 0xFDF6, 0xFF76, 0x00F5, 0x008A, 0xFDF6, 0xF5C1, 0xEFB4, 0xEFB4, 0xEFB4, 0xEFB4, 0x0000, 
    0x025C, 0x0843, 0x0FF6, 0x17B5, 0x1DBE, 0x200C, 0x2030, 0x203D, 0x1FFC, 0x1FA1, 0x1F5F, 0x1F57, 0x1F5F, 0x1F5F, 
    0x1F5F, 0x1F5F, 0x1F5F, 0x1F5F, 0x1F5F, 0x1F5F, 0x1F5F, 0x1F5F, 0x1F5F, 0x1F5F, 0x0000, 0xFFDA, 0xFF7A, 0xFEF9, 
    0xFE6F, 0xFDF6, 0xFD97, 0xFD26, 0xFC76, 0xFBA7, 0xFAFC, 0xFAB4, 0xFBED, 0xFD26, 0xFBED, 0xFAB4, 0xFBC2, 0xFD26, 
    0xFCBE, 0xFAB4, 0xFAEA, 0xFB6C, 0xFC06, 0xFC87, 0xFCBE, 0x0000, 0x0040, 0x00E6, 0x01CA, 0x02C4, 0x03AB, 0x04CA, 
    0x05B4, 0x05FF, 0x061D, 0x0620, 0x061D, 0x05E8, 0x05B4, 0x0630, 0x061D, 0x039C, 0x0139, 0x0377, 0x061D, 0x0547, 
    0x03EE, 0x0278, 0x014C, 0x00D1, 
};

JointIndex sGerudoWhiteClapAnimJointIndices[] = {
    { 0x0006, 0x001F, 0x0038 },
    { 0x0051, 0x0000, 0x0003 },
    { 0x006A, 0x0083, 0x009C },
    { 0x0000, 0x0000, 0x00B5 },
    { 0x0004, 0x00CE, 0x00E7 },
    { 0x0100, 0x0119, 0x0132 },
    { 0x0000, 0x0000, 0x014B },
    { 0x0164, 0x017D, 0x0196 },
    { 0x01AF, 0x01C8, 0x01E1 },
    { 0x0000, 0x01FA, 0x0213 },
    { 0x0005, 0x022C, 0x0245 },
    { 0x025E, 0x0277, 0x0290 },
    { 0x0000, 0x02A9, 0x02C2 },
    { 0x02DB, 0x02F4, 0x030D },
    { 0x0326, 0x033F, 0x0358 },
    { 0x0371, 0x038A, 0x03A3 },
};

AnimationHeader gGerudoWhiteClapAnim = { 
    { 25 }, sGerudoWhiteClapAnimFrameData,
    sGerudoWhiteClapAnimJointIndices, 6
};

u8 object_ge1_possiblePadding_00A058[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sGerudoWhiteDismissiveAnimFrameData[] = {
    0x0000, 0x0CE6, 0x002D, 0xC000, 0xFE34, 0xFDF6, 0xEBA1, 0xF913, 0x145F, 0x0201, 0x5EFF, 0xCC41, 0x5FD0, 0xD609, 
    0xF709, 0xF42F, 0x0755, 0xDC8E, 0x0CE6, 0x0CE7, 0x0CE9, 0x0CEB, 0x0CED, 0x0CF0, 0x0CF2, 0x0CF4, 0x0CF5, 0x0CF6, 
    0x0CF7, 0x0CF8, 0x0CF7, 0x0CF6, 0x0CF4, 0x0CF2, 0x0CEF, 0x0CED, 0x0CEA, 0x0CE8, 0x0CE6, 0x0CE4, 0x002D, 0x0030, 
    0x0032, 0x0035, 0x0036, 0x0038, 0x0039, 0x003A, 0x003B, 0x003B, 0x003B, 0x003B, 0x003B, 0x003A, 0x0039, 0x0037, 
    0x0036, 0x0034, 0x0032, 0x002F, 0x002D, 0x002A, 0x0068, 0x0067, 0x0065, 0x0063, 0x0061, 0x005F, 0x005D, 0x005B, 
    0x0059, 0x0058, 0x0057, 0x0057, 0x0057, 0x0058, 0x005A, 0x005D, 0x005F, 0x0062, 0x0064, 0x0066, 0x0068, 0x0069, 
    0xF213, 0xF23A, 0xF267, 0xF299, 0xF2CD, 0xF302, 0xF335, 0xF365, 0xF38F, 0xF3B0, 0xF3C5, 0xF3CD, 0xF3C0, 0xF3A0, 
    0xF370, 0xF337, 0xF2F8, 0xF2B7, 0xF27A, 0xF242, 0xF214, 0xF1F4, 0x10CB, 0x1099, 0x105A, 0x1010, 0x0FC0, 0x0F6B, 
    0x0F18, 0x0EC8, 0x0E81, 0x0E48, 0x0E22, 0x0E13, 0x0E25, 0x0E5A, 0x0EA8, 0x0F07, 0x0F6E, 0x0FD5, 0x1035, 0x1087, 
    0x10C6, 0x10EC, 0xC02C, 0xBFDB, 0xBF7B, 0xBF12, 0xBEA5, 0xBE3A, 0xBDD6, 0xBD7F, 0xBD3A, 0xBD0D, 0xBCFC, 0xBD0C, 
    0xBD38, 0xBD7C, 0xBDD1, 0xBE33, 0xBE9C, 0xBF08, 0xBF71, 0xBFD3, 0xC027, 0xC068, 0x0000, 0x0000, 0x0000, 0x0003, 
    0x0003, 0x0000, 0x0003, 0x0003, 0x0003, 0x0003, 0x0000, 0x0000, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 0x0003, 
    0x0003, 0x0000, 0x0003, 0x0003, 0xFC21, 0xFC22, 0xFC23, 0xFC24, 0xFC25, 0xFC26, 0xFC27, 0xFC27, 0xFC28, 0xFC28, 
    0xFC29, 0xFC29, 0xFC29, 0xFC28, 0xFC27, 0xFC26, 0xFC25, 0xFC24, 0xFC23, 0xFC22, 0xFC21, 0xFC20, 0x0AA1, 0x0AAA, 
    0x0AB2, 0x0A99, 0x0A9D, 0x0AC1, 0x0AA4, 0x0AA5, 0x0AA6, 0x0AA6, 0x0AC5, 0x0AC4, 0x0AA3, 0x0AA1, 0x0A9F, 0x0A9D, 
    0x0A99, 0x0A95, 0x0A8F, 0x0AA8, 0x0A80, 0x0A77, 0x0000, 0x0000, 0x0000, 0x003A, 0x003B, 0x0000, 0x003A, 0x003B, 
    0x003A, 0x003B, 0x0000, 0x0000, 0x003B, 0x003B, 0x003A, 0x003A, 0x003B, 0x003A, 0x003A, 0x0000, 0x003B, 0x003A, 
    0xB65B, 0xB68A, 0xB6C0, 0xB6FC, 0xB73A, 0xB778, 0xB7B1, 0xB7E3, 0xB80A, 0xB824, 0xB82D, 0xB824, 0xB80B, 0xB7E5, 
    0xB7B4, 0xB77C, 0xB740, 0xB702, 0xB6C6, 0xB68E, 0xB65E, 0xB639, 0x78CC, 0x78B7, 0x7896, 0x786C, 0x783D, 0x780C, 
    0x77DA, 0x77AB, 0x7782, 0x7761, 0x774B, 0x7743, 0x774E, 0x776C, 0x7799, 0x77CF, 0x780B, 0x7846, 0x787C, 0x78AA, 
    0x78C8, 0x78D4, 0x1EE4, 0x1F25, 0x1F85, 0x1FFA, 0x2079, 0x20F8, 0x216E, 0x21D0, 0x2215, 0x2232, 0x2224, 0x21F7, 
    0x21B2, 0x2159, 0x20F4, 0x2088, 0x201C, 0x1FB5, 0x1F5A, 0x1F11, 0x1EE0, 0x1ECD, 0x1324, 0x13E5, 0x1475, 0x14DB, 
    0x151E, 0x1545, 0x1557, 0x155B, 0x1557, 0x1553, 0x153F, 0x14EA, 0x1463, 0x13BB, 0x1305, 0x1251, 0x11B1, 0x1137, 
    0x10F5, 0x10FC, 0x115E, 0x122C, 0xC06F, 0xC184, 0xC31A, 0xC508, 0xC721, 0xC93A, 0xCB27, 0xCCBD, 0xCDD1, 0xCE36, 
    0xCDEF, 0xCD29, 0xCBFE, 0xCA88, 0xC8DF, 0xC71D, 0xC55B, 0xC3B3, 0xC23D, 0xC113, 0xC04E, 0xC008, 0x10A5, 0x0AEB, 
    0x0BC5, 0x0DE6, 0x10AA, 0x136E, 0x158F, 0x1669, 0x10AA, 0x0AEB, 0x0B23, 0x0BBF, 0x0CAA, 0x0DD1, 0x0F21, 0x1087, 
    0x11EE, 0x1344, 0x1476, 0x156E, 0x161B, 0x1669, 0xEDD2, 0x2193, 0x19E8, 0x06BE, 0xEDD4, 0xD4EA, 0xC1C0, 0xBA15, 
    0xEDD4, 0x2193, 0x1F89, 0x19E6, 0x1162, 0x06B6, 0xFA9A, 0xEDC6, 0xE0F3, 0xD4D9, 0xCA31, 0xC1B3, 0xBC17, 0xBA15, 
    0x0584, 0x05AF, 0x05D5, 0x05F6, 0x0612, 0x062A, 0x063D, 0x064C, 0x0656, 0x065C, 0x065E, 0x065B, 0x0654, 0x0648, 
    0x0639, 0x0625, 0x060D, 0x05F2, 0x05D2, 0x05AF, 0x0587, 0x055C, 0xBF3D, 0xBF44, 0xBF4C, 0xBF55, 0xBF5F, 0xBF68, 
    0xBF71, 0xBF79, 0xBF81, 0xBF86, 0xBF8A, 0xBF8B, 0xBF89, 0xBF84, 0xBF7D, 0xBF73, 0xBF68, 0xBF5D, 0xBF52, 0xBF47, 
    0xBF3F, 0xBF38, 0xF97B, 0xF97B, 0xF97B, 0xF97B, 0xF97B, 0xF97B, 0xF97B, 0xF97C, 0xF97C, 0xF97C, 0xF97D, 0xF97D, 
    0xF97D, 0xF97D, 0xF97D, 0xF97E, 0xF97D, 0xF97D, 0xF97D, 0xF97D, 0xF97C, 0xF97B, 0xF68D, 0xF68E, 0xF68E, 0xF68F, 
    0xF690, 0xF691, 0xF692, 0xF692, 0xF693, 0xF694, 0xF694, 0xF694, 0xF695, 0xF695, 0xF695, 0xF694, 0xF693, 0xF693, 
    0xF691, 0xF690, 0xF68E, 0xF68C, 
};

JointIndex sGerudoWhiteDismissiveAnimJointIndices[] = {
    { 0x0000, 0x0012, 0x0028 },
    { 0x0003, 0x0000, 0x0003 },
    { 0x003E, 0x0004, 0x0054 },
    { 0x0000, 0x0000, 0x006A },
    { 0x0005, 0x0006, 0x0080 },
    { 0x0096, 0x00AC, 0x00C2 },
    { 0x0000, 0x0000, 0x00D8 },
    { 0x0007, 0x0008, 0x00EE },
    { 0x0000, 0x0000, 0x0104 },
    { 0x0000, 0x0009, 0x000A },
    { 0x011A, 0x0130, 0x0146 },
    { 0x000B, 0x015C, 0x0172 },
    { 0x0000, 0x0188, 0x000C },
    { 0x000D, 0x019E, 0x000E },
    { 0x000F, 0x0010, 0x0011 },
    { 0x0000, 0x01B4, 0x01CA },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gGerudoWhiteDismissiveAnim = { 
    { 22 }, sGerudoWhiteDismissiveAnimFrameData,
    sGerudoWhiteDismissiveAnimJointIndices, 18
};

