#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_ani.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

StandardLimb gRoofManRootLimb = { 
    { -80, 3198, 149 }, 0x01, LIMB_DONE,
    gRoofManWaistDL
};

StandardLimb gRoofManLeftThighLimb = { 
    { 359, 0, 350 }, 0x02, 0x04,
    gRoofManLeftThighDL
};

StandardLimb gRoofManLeftLegLimb = { 
    { 1200, 0, 0 }, 0x03, LIMB_DONE,
    gRoofManLeftLegDL
};

StandardLimb gRoofManLeftFootLimb = { 
    { 1400, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gRoofManLeftFootDL
};

StandardLimb gRoofManRightThighLimb = { 
    { 359, 0, -350 }, 0x05, 0x07,
    gRoofManRightThighDL
};

StandardLimb gRoofManRightLegLimb = { 
    { 1200, 0, 0 }, 0x06, LIMB_DONE,
    gRoofManRightLegDL
};

StandardLimb gRoofManRightFootLimb = { 
    { 1400, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gRoofManRightFootDL
};

StandardLimb gRoofManTorsoLimb = { 
    { 0, 0, 0 }, 0x08, LIMB_DONE,
    gRoofManTorsoDL
};

StandardLimb gRoofManLeftUpperArmLimb = { 
    { 1400, -100, 650 }, 0x09, 0x0B,
    gRoofManLeftUpperArmDL
};

StandardLimb gRoofManLeftForearmLimb = { 
    { 1050, 0, 0 }, 0x0A, LIMB_DONE,
    gRoofManLeftForearmDL
};

StandardLimb gRoofManLeftHandLimb = { 
    { 751, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gRoofManLeftHandDL
};

StandardLimb gRoofManRightUpperArmLimb = { 
    { 1400, -100, -650 }, 0x0C, 0x0E,
    gRoofManRightUpperArmDL
};

StandardLimb gRoofManRightForearmLimb = { 
    { 1050, 0, 0 }, 0x0D, LIMB_DONE,
    gRoofManRightForearmDL
};

StandardLimb gRoofManRightHandLimb = { 
    { 750, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gRoofManRightHandDL
};

StandardLimb gRoofManHeadLimb = { 
    { 2004, 0, 0 }, LIMB_DONE, LIMB_DONE,
    gRoofManHeadDL
};

void* gRoofManSkelLimbs[] = {
    &gRoofManRootLimb,
    &gRoofManLeftThighLimb,
    &gRoofManLeftLegLimb,
    &gRoofManLeftFootLimb,
    &gRoofManRightThighLimb,
    &gRoofManRightLegLimb,
    &gRoofManRightFootLimb,
    &gRoofManTorsoLimb,
    &gRoofManLeftUpperArmLimb,
    &gRoofManLeftForearmLimb,
    &gRoofManLeftHandLimb,
    &gRoofManRightUpperArmLimb,
    &gRoofManRightForearmLimb,
    &gRoofManRightHandLimb,
    &gRoofManHeadLimb,
};

FlexSkeletonHeader gRoofManSkel = { 
    { gRoofManSkelLimbs, ARRAY_COUNT(gRoofManSkelLimbs) }, 15
};

u8 object_ani_possiblePadding_0000FC[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 gRoofMan1TLUT[] = {
#include "assets/objects/object_ani/roof_man_1_tlut.rgba16.inc.c"
};

u8 object_ani_unaccounted_000308[] = {
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0A, 0x0A, 0x5E, 0x31, 0x02, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 
    0x01, 0x01, 0x01, 0x01, 0x0A, 0x0A, 0x25, 0x32, 0x0E, 0x02, 0x5B, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 
    0x0A, 0x01, 0x0A, 0x0A, 0x30, 0x5A, 0x0C, 0x26, 0x33, 0x36, 0x36, 0x19, 0x19, 0x19, 0x19, 0x19, 
    0x0A, 0x0A, 0x45, 0x67, 0x26, 0x33, 0x63, 0x29, 0x19, 0x65, 0x28, 0x14, 0x14, 0x14, 0x14, 0x14, 
    0x01, 0x45, 0x58, 0x29, 0x14, 0x46, 0x59, 0x61, 0x62, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 
    0x01, 0x1C, 0x28, 0x3D, 0x3D, 0x2D, 0x2D, 0x28, 0x3E, 0x3E, 0x14, 0x2D, 0x46, 0x10, 0x10, 0x10, 
    0x01, 0x1C, 0x14, 0x68, 0x66, 0x34, 0x34, 0x34, 0x6E, 0x43, 0x2E, 0x2E, 0x2E, 0x27, 0x27, 0x27, 
    0x01, 0x1C, 0x26, 0x33, 0x29, 0x04, 0x6B, 0x74, 0x64, 0x72, 0x54, 0x5F, 0x75, 0x3F, 0x3F, 0x43, 
    0x01, 0x30, 0x30, 0x0A, 0x0A, 0x0A, 0x0A, 0x57, 0x60, 0x41, 0x15, 0x15, 0x1F, 0x1F, 0x1F, 0x1F, 
    0x01, 0x0A, 0x0A, 0x0A, 0x01, 0x01, 0x01, 0x0A, 0x56, 0x6D, 0x41, 0x15, 0x15, 0x15, 0x15, 0x15, 
    0x01, 0x0A, 0x01, 0x01, 0x01, 0x01, 0x71, 0x0A, 0x5D, 0x73, 0x70, 0x5C, 0x1A, 0x39, 0x39, 0x6A, 
    0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x0A, 0x1C, 0x2A, 0x16, 0x4D, 0x4D, 0x3B, 0x1A, 0x1A, 0x1A, 
    0x25, 0x0A, 0x3A, 0x25, 0x3A, 0x0E, 0x02, 0x09, 0x2A, 0x16, 0x07, 0x07, 0x16, 0x3B, 0x1A, 0x1A, 
    0x09, 0x37, 0x37, 0x09, 0x09, 0x09, 0x09, 0x09, 0x2A, 0x6F, 0x07, 0x07, 0x07, 0x16, 0x16, 0x16, 
    0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 
};

u64 gRoofManEyeOpenTex[] = {
#include "assets/objects/object_ani/roof_man_eye_open.rgba16.inc.c"
};

u64 gRoofManHandBackTex[] = {
#include "assets/objects/object_ani/roof_man_hand_back.ci8.inc.c"
};

u64 gRoofManForearmGradientTex[] = {
#include "assets/objects/object_ani/roof_man_forearm_gradient.ci8.inc.c"
};

u64 gRoofManThighGradientTex[] = {
#include "assets/objects/object_ani/roof_man_thigh_gradient.ci8.inc.c"
};

u64 gRoofManSandalBuckleTex[] = {
#include "assets/objects/object_ani/roof_man_sandal_buckle.ci8.inc.c"
};

u64 gRoofManTrouserPatternTex[] = {
#include "assets/objects/object_ani/roof_man_trouser_pattern.rgba16.inc.c"
};

u64 gRoofMan2TLUT[] = {
#include "assets/objects/object_ani/roof_man_2_tlut.rgba16.inc.c"
};

u64 object_aniTex_0011D8[] = {
#include "assets/objects/object_ani/object_aniTex_0011D8.ci8.inc.c"
};

u64 gRoofManSkinGradientTex[] = {
#include "assets/objects/object_ani/roof_man_skin_gradient.ci8.inc.c"
};

u64 gRoofManEarTex[] = {
#include "assets/objects/object_ani/roof_man_ear.ci8.inc.c"
};

u64 gRoofManHairTex[] = {
#include "assets/objects/object_ani/roof_man_hair.ci8.inc.c"
};

u64 gRoofManEyeHalfTex[] = {
#include "assets/objects/object_ani/roof_man_eye_half.rgba16.inc.c"
};

u64 gRoofManEyeClosedTex[] = {
#include "assets/objects/object_ani/roof_man_eye_closed.rgba16.inc.c"
};

Vtx object_aniVtx_002518[] = {
#include "assets/objects/object_ani/object_aniVtx_002518.vtx.inc"
};

Gfx gRoofManHeadDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gRoofManEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gRoofMan2TLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_aniVtx_002518, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_aniTex_0011D8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002518[12], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 0, 2, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 10, 0, 1, 0, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRoofManSkinGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_aniVtx_002518[28], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRoofManHairTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_aniVtx_002518[35], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 3, 5, 27, 0),
    gsSP2Triangles(27, 5, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_aniVtx_002518[67], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
    gsSP2Triangles(9, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&object_aniVtx_002518[98], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_aniVtx_002518[113], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 8, 0),
    gsSP2Triangles(8, 9, 3, 0, 10, 9, 8, 0),
    gsSPEndDisplayList(),
};

Vtx object_aniVtx_002FA8[] = {
#include "assets/objects/object_ani/object_aniVtx_002FA8.vtx.inc"
};

Gfx gRoofManRightHandDL[] = {
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[84], 4, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManHandBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[88], 12, 4),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x011C037D),
    gsSP1Triangle(0, 4, 5, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x010D03EF),
    gsSP1Triangle(6, 7, 1, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x004F03C6),
    gsSP2Triangles(8, 9, 2, 0, 10, 11, 0, 0),
    gsSP2Triangles(2, 1, 12, 0, 0, 2, 13, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x01E503A7),
    gsSP2Triangles(14, 3, 0, 0, 1, 3, 15, 0),
    gsSPVertex(&object_aniVtx_002FA8[100], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 0, 0, 0, 3, 4, 0),
    gsSP2Triangles(6, 7, 5, 0, 1, 7, 8, 0),
    gsSP2Triangles(8, 9, 1, 0, 5, 10, 6, 0),
    gsSP2Triangles(11, 12, 8, 0, 13, 10, 9, 0),
    gsSP2Triangles(13, 12, 10, 0, 12, 11, 10, 0),
    gsSP2Triangles(6, 10, 11, 0, 8, 6, 11, 0),
    gsSP2Triangles(3, 2, 14, 0, 4, 3, 9, 0),
    gsSP2Triangles(8, 12, 13, 0, 1, 9, 2, 0),
    gsSP2Triangles(4, 10, 5, 0, 7, 6, 8, 0),
    gsSP2Triangles(14, 2, 9, 0, 4, 9, 10, 0),
    gsSP2Triangles(13, 9, 8, 0, 9, 15, 14, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManRightForearmDL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[116], 4, 0),
    gsSPMatrix(0x0D000300, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManForearmGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[120], 12, 4),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x01D8FEA0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x00CFFE7B),
    gsSP2Triangles(6, 7, 3, 0, 8, 9, 0, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x02CDFE71),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x03A0FE7B),
    gsSP2Triangles(12, 1, 3, 0, 0, 1, 13, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x015EFE83),
    gsSP1Triangle(14, 2, 0, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x00CFFE7B),
    gsSP1Triangle(3, 2, 15, 0),
    gsSPVertex(&object_aniVtx_002FA8[132], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(1, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(0, 9, 3, 0, 2, 9, 0, 0),
    gsSP2Triangles(6, 2, 1, 0, 4, 3, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManRightUpperArmDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[142], 4, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManForearmGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[146], 22, 4),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x00CC004A),
    gsSP2Triangles(4, 2, 5, 0, 6, 2, 7, 0),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x00A5FF64),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0xFF8EFF88),
    gsSP2Triangles(8, 0, 3, 0, 9, 10, 3, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x00DBFF71),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x02A9FF80),
    gsSP2Triangles(11, 1, 2, 0, 3, 1, 12, 0),
    gsSP2Triangles(3, 13, 14, 0, 2, 0, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 21, 18, 0, 22, 17, 16, 0),
    gsSP2Triangles(20, 19, 23, 0, 23, 24, 20, 0),
    gsSP2Triangles(18, 21, 16, 0, 25, 24, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManLeftHandDL[] = {
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(object_aniVtx_002FA8, 4, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManHandBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[4], 12, 4),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x011C037D),
    gsSP1Triangle(4, 5, 0, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x010D03EF),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x004F03C6),
    gsSP2Triangles(2, 8, 9, 0, 0, 10, 11, 0),
    gsSP2Triangles(12, 1, 2, 0, 13, 2, 0, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x01E503A7),
    gsSP2Triangles(0, 3, 14, 0, 15, 3, 1, 0),
    gsSPVertex(&object_aniVtx_002FA8[16], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 5, 0, 5, 3, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 8, 6, 1, 0),
    gsSP2Triangles(1, 9, 8, 0, 7, 10, 4, 0),
    gsSP2Triangles(8, 11, 12, 0, 9, 10, 13, 0),
    gsSP2Triangles(10, 11, 13, 0, 10, 12, 11, 0),
    gsSP2Triangles(12, 10, 7, 0, 12, 7, 8, 0),
    gsSP2Triangles(14, 0, 3, 0, 9, 3, 5, 0),
    gsSP2Triangles(13, 11, 8, 0, 0, 9, 1, 0),
    gsSP2Triangles(4, 10, 5, 0, 8, 7, 6, 0),
    gsSP2Triangles(9, 0, 14, 0, 10, 9, 5, 0),
    gsSP2Triangles(8, 9, 13, 0, 14, 15, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManLeftForearmDL[] = {
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[32], 4, 0),
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManForearmGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[36], 12, 4),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x01D8FEA0),
    gsSP1Triangle(4, 5, 0, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x00CFFE7B),
    gsSP2Triangles(3, 6, 7, 0, 0, 8, 9, 0),
    gsSP1Triangle(10, 11, 3, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x03A0FE7B),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x02CDFE71),
    gsSP2Triangles(3, 1, 12, 0, 13, 1, 0, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x015EFE83),
    gsSP1Triangle(0, 2, 14, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x00CFFE7B),
    gsSP1Triangle(15, 2, 3, 0),
    gsSPVertex(&object_aniVtx_002FA8[48], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 1, 0, 3, 7, 8, 0),
    gsSP2Triangles(4, 9, 2, 0, 2, 9, 0, 0),
    gsSP2Triangles(1, 0, 5, 0, 8, 4, 3, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManLeftUpperArmDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[58], 4, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManForearmGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[62], 22, 4),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0xFF8EFF88),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x00A5FF64),
    gsSP2Triangles(3, 0, 4, 0, 3, 5, 6, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x02A9FF80),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x00DBFF71),
    gsSP2Triangles(2, 1, 7, 0, 8, 1, 3, 0),
    gsSP2Triangles(9, 10, 3, 0, 11, 0, 2, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x00CC004A),
    gsSP2Triangles(12, 2, 13, 0, 14, 2, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 16, 0),
    gsSP2Triangles(16, 21, 19, 0, 18, 17, 22, 0),
    gsSP2Triangles(23, 20, 19, 0, 19, 24, 23, 0),
    gsSP2Triangles(18, 21, 16, 0, 23, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManTorsoDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[168], 6, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManForearmGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[174], 18, 6),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x082B00AA),
    gsSPModifyVertex(5, G_MWO_POINT_ST, 0x094000AA),
    gsSP2Triangles(6, 0, 5, 0, 7, 5, 8, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x05350097),
    gsSP1Triangle(9, 1, 10, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x03800097),
    gsSP2Triangles(11, 2, 12, 0, 13, 1, 14, 0),
    gsSP1Triangle(15, 2, 1, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x025A00A5),
    gsSP1Triangle(16, 3, 2, 0),
    gsSPModifyVertex(4, G_MWO_POINT_ST, 0x065A00A5),
    gsSP1Triangle(17, 4, 18, 0),
    gsSPModifyVertex(5, G_MWO_POINT_ST, 0x008A00AA),
    gsSP2Triangles(19, 5, 3, 0, 4, 0, 20, 0),
    gsSP2Triangles(1, 4, 21, 0, 22, 3, 23, 0),
    gsSPVertex(&object_aniVtx_002FA8[192], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManThighGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 18, 0),
    gsSP2Triangles(19, 21, 22, 0, 16, 23, 22, 0),
    gsSP2Triangles(18, 23, 16, 0, 18, 17, 19, 0),
    gsSP2Triangles(22, 20, 19, 0, 22, 21, 16, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 24, 0),
    gsSP1Triangle(28, 25, 24, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManForearmGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPVertex(&object_aniVtx_002FA8[221], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
    gsSP1Triangle(22, 24, 26, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManRightFootDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[328], 2, 0),
    gsSPVertex(&object_aniVtx_002FA8[330], 3, 2),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManSandalBuckleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[333], 11, 5),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x0203FF31),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x0047FF47),
    gsSP2Triangles(0, 5, 1, 0, 6, 7, 1, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x01DEFF25),
    gsSP1Triangle(2, 8, 9, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x0018FF89),
    gsSP1Triangle(2, 1, 10, 0),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0xFF9B002A),
    gsSPModifyVertex(4, G_MWO_POINT_ST, 0xFFE80124),
    gsSP1Triangle(0, 4, 11, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x02DA00F5),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x033AFFDD),
    gsSP1Triangle(12, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManHandBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP1Triangle(13, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManRightLegDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[344], 4, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRoofManTrouserPatternTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[348], 12, 4),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x008C0320),
    gsSP1Triangle(4, 3, 5, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x008002CB),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x00F6032B),
    gsSP1Triangle(6, 2, 0, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x000A0324),
    gsSP2Triangles(3, 1, 7, 0, 8, 1, 9, 0),
    gsSP2Triangles(1, 2, 10, 0, 0, 11, 12, 0),
    gsSP2Triangles(13, 0, 3, 0, 14, 3, 15, 0),
    gsSPVertex(&object_aniVtx_002FA8[360], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(3, 4, 1, 0, 2, 5, 6, 0),
    gsSP2Triangles(4, 3, 6, 0, 6, 5, 4, 0),
    gsSP2Triangles(5, 2, 7, 0, 7, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManThighGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 14, 0, 19, 20, 14, 0),
    gsSP2Triangles(20, 15, 12, 0, 15, 17, 12, 0),
    gsSP2Triangles(12, 17, 13, 0, 12, 14, 20, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManSandalBuckleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(21, 22, 23, 0, 24, 21, 23, 0),
    gsSP2Triangles(25, 26, 27, 0, 27, 26, 28, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManRightThighDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[389], 5, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRoofManTrouserPatternTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[394], 13, 5),
    gsSPModifyVertex(4, G_MWO_POINT_ST, 0x0103051C),
    gsSP1Triangle(5, 4, 6, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0xFFA90670),
    gsSP1Triangle(7, 1, 8, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x01250512),
    gsSP2Triangles(9, 10, 3, 0, 4, 3, 11, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x00920639),
    gsSP2Triangles(2, 1, 12, 0, 13, 1, 14, 0),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x009D0610),
    gsSP2Triangles(15, 0, 4, 0, 1, 0, 16, 0),
    gsSP1Triangle(3, 2, 17, 0),
    gsSPVertex(&object_aniVtx_002FA8[407], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 3, 1, 0, 1, 0, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManLeftFootDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[248], 5, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManSandalBuckleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[253], 11, 5),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x01DEFF25),
    gsSP1Triangle(5, 6, 0, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x0018FF89),
    gsSP1Triangle(7, 1, 0, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x0047FF47),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x0203FF31),
    gsSP2Triangles(1, 8, 2, 0, 1, 9, 10, 0),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0xFFE80124),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0xFF9B002A),
    gsSP1Triangle(11, 3, 2, 0),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x033AFFDD),
    gsSPModifyVertex(4, G_MWO_POINT_ST, 0x02DA00F5),
    gsSP1Triangle(0, 4, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManHandBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP1Triangle(13, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManLeftLegDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[264], 4, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRoofManTrouserPatternTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[268], 25, 4),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x0249032D),
    gsSP1Triangle(4, 3, 5, 0),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x01DE0331),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x025902D8),
    gsSP1Triangle(0, 2, 6, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x02CA0338),
    gsSP2Triangles(7, 1, 3, 0, 8, 1, 9, 0),
    gsSP2Triangles(10, 2, 1, 0, 11, 12, 0, 0),
    gsSP2Triangles(3, 0, 13, 0, 14, 3, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManThighGradientTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 19, 16, 23, 0),
    gsSP2Triangles(20, 18, 17, 0, 20, 24, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 19, 23, 0),
    gsSP2Triangles(21, 19, 22, 0, 24, 20, 22, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManSandalBuckleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(25, 26, 27, 0, 28, 26, 25, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRoofManTrouserPatternTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[293], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 6, 0, 0),
    gsSP2Triangles(5, 3, 4, 0, 4, 6, 5, 0),
    gsSP2Triangles(7, 0, 6, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gRoofMan1TLUT),
    gsDPLoadTextureBlock(gRoofManSandalBuckleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManLeftThighDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&object_aniVtx_002FA8[305], 5, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRoofManTrouserPatternTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[310], 13, 5),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x01B50521),
    gsSP1Triangle(5, 3, 6, 0),
    gsSPModifyVertex(4, G_MWO_POINT_ST, 0x02FD0688),
    gsSP1Triangle(7, 4, 8, 0),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x01940515),
    gsSP2Triangles(1, 9, 10, 0, 11, 1, 3, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x02160644),
    gsSP2Triangles(12, 4, 2, 0, 13, 4, 14, 0),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x020D061A),
    gsSP2Triangles(3, 0, 15, 0, 16, 0, 4, 0),
    gsSP1Triangle(17, 2, 1, 0),
    gsSPVertex(&object_aniVtx_002FA8[323], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(1, 3, 4, 0, 4, 2, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gRoofManWaistDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRoofManTrouserPatternTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_aniVtx_002FA8[412], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 3, 5, 0, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 5, 6, 0),
    gsSP2Triangles(6, 8, 9, 0, 9, 10, 6, 0),
    gsSP2Triangles(6, 10, 11, 0, 11, 7, 6, 0),
    gsSP2Triangles(12, 3, 2, 0, 2, 13, 12, 0),
    gsSP2Triangles(8, 12, 13, 0, 13, 9, 8, 0),
    gsSP2Triangles(2, 14, 15, 0, 15, 14, 10, 0),
    gsSP2Triangles(10, 14, 11, 0, 1, 14, 2, 0),
    gsSPEndDisplayList(),
};

u8 object_ani_possiblePadding_0062A8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sRoofManKnockbackAnimFrameData[] = {
    0x0060, 0x0DC0, 0xFF76, 0x0000, 0xFBAA, 0x0185, 0x013A, 0x01A9, 0xFF68, 0xFA31, 0xF7A1, 0x1170, 0xFFC8, 0x05B3, 
    0x137A, 0xFDD6, 0x0060, 0x0080, 0x0097, 0x00A0, 0x00A8, 0x00AE, 0x00B4, 0x00B7, 0x00B9, 0x00B9, 0x00BB, 0x00BC, 
    0x00BE, 0x00C0, 0x00C2, 0x00C4, 0x00C6, 0x00C7, 0x00CA, 0x00CC, 0x0DC0, 0x103B, 0x11FB, 0x12AE, 0x134D, 0x13D3, 
    0x143C, 0x1482, 0x14A2, 0x14B3, 0x14CC, 0x14EC, 0x1511, 0x1538, 0x1560, 0x1586, 0x15A8, 0x15C4, 0x15F9, 0x161F, 
    0xFF76, 0xFD3C, 0xFBBB, 0xFB65, 0xFB61, 0xFB8B, 0xFBC0, 0xFBDB, 0xFBBB, 0xFB64, 0xFAF6, 0xFA77, 0xF9ED, 0xF95E, 
    0xF8D0, 0xF848, 0xF7CE, 0xF766, 0xF73D, 0xF751, 0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0xDFEE, 0xD77C, 
    0xCB34, 0xC372, 0xD300, 0xE1FD, 0xEEF2, 0xF869, 0xFCE9, 0xFE45, 0xFF4D, 0x0009, 0x007D, 0x00B1, 0x00A9, 0x006D, 
    0x0001, 0xFF6E, 0xFEB7, 0xFDE5, 0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x08CF, 0x0725, 0x04CC, 0x021C, 
    0xFF5D, 0xFBA5, 0xF6E5, 0xF2A6, 0xF077, 0xF059, 0xF10B, 0xF240, 0xF3B9, 0xF539, 0xF689, 0xF775, 0xF7C8, 0xF747, 
    0xF5A0, 0xF2C1, 0x0536, 0x0134, 0xFC30, 0xF788, 0xF491, 0xF39F, 0xF3D5, 0xF4B2, 0xF5B2, 0xF675, 0xF71C, 0xF7E6, 
    0xF8C1, 0xF993, 0xFA3C, 0xFA9B, 0xFA90, 0xFA03, 0xF8C7, 0xF70B, 0xDFCD, 0xDEE6, 0xDD79, 0xDBAC, 0xD9CE, 0xD7D6, 
    0xD5A7, 0xD396, 0xD1E8, 0xD023, 0xCDDF, 0xCB71, 0xC915, 0xC706, 0xC57A, 0xC4A5, 0xC4BD, 0xC5FC, 0xC907, 0xCE15, 
    0x1804, 0x17E7, 0x17BD, 0x178F, 0x1764, 0x1741, 0x172F, 0x1733, 0x1756, 0x179D, 0x1810, 0x18F1, 0x1A58, 0x1C11, 
    0x1DE3, 0x1F99, 0x20FD, 0x21D7, 0x220A, 0x21B3, 0xB5F3, 0xB5E8, 0xB5D7, 0xB5C0, 0xB5A4, 0xB585, 0xB562, 0xB53D, 
    0xB517, 0xB4F0, 0xB4C8, 0xB4A2, 0xB47D, 0xB45A, 0xB43B, 0xB41F, 0xB409, 0xB3F7, 0xB3EC, 0xB3E9, 0x07EC, 0x0431, 
    0x005B, 0xFE4B, 0xFE49, 0xFF19, 0x004D, 0x0187, 0x0220, 0x01BF, 0x00D2, 0xFF97, 0xFE50, 0xFD34, 0xFC6C, 0xFC0F, 
    0xFC36, 0xFD03, 0xFF1A, 0x02DC, 0xFA86, 0x0082, 0x058B, 0x074E, 0x098B, 0x0F73, 0x16C5, 0x1D50, 0x2113, 0x2263, 
    0x22F1, 0x22DF, 0x2250, 0x2175, 0x2085, 0x1FBE, 0x1F5B, 0x1F8E, 0x205A, 0x2130, 0xD2AC, 0xC9D1, 0xBF78, 0xB964, 
    0xB931, 0xBB77, 0xBF33, 0xC309, 0xC4ED, 0xC42B, 0xC209, 0xBF0E, 0xBBCD, 0xB8CC, 0xB680, 0xB54D, 0xB596, 0xB7C6, 
    0xBD56, 0xC6B8, 0x1B7C, 0x1DB1, 0x20F8, 0x24FB, 0x2965, 0x2DE2, 0x321A, 0x35BA, 0x386C, 0x3A58, 0x3BE8, 0x3D28, 
    0x3E25, 0x3EEA, 0x3F85, 0x4001, 0x406C, 0x40D1, 0x40FB, 0x40C0, 0x0024, 0x0024, 0x0024, 0x0024, 0x0023, 0x0023, 
    0x0023, 0x0023, 0x0023, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 0x0024, 
    0x04F2, 0x0536, 0x0569, 0x058E, 0x05A6, 0x05B2, 0x05B4, 0x05AC, 0x059D, 0x0588, 0x056F, 0x0552, 0x0533, 0x0514, 
    0x04F5, 0x04D9, 0x04C1, 0x04AE, 0x04A2, 0x049D, 0xB123, 0xB11D, 0xB113, 0xB106, 0xB0F7, 0xB0E7, 0xB0D7, 0xB0C6, 
    0xB0B7, 0xB0A9, 0xB09E, 0xB096, 0xB092, 0xB093, 0xB099, 0xB0A5, 0xB0B9, 0xB0D4, 0xB0F8, 0xB125, 0x946A, 0x92FD, 
    0x91F1, 0x925D, 0x94EE, 0x98E4, 0x9D38, 0xA0E0, 0xA2D3, 0xA335, 0xA2F8, 0xA242, 0xA13C, 0xA00D, 0x9EDE, 0x9DD7, 
    0x9D20, 0x9CE0, 0x9D64, 0x9E9E, 0xF05B, 0xF05B, 0xF05B, 0xF05B, 0xF05B, 0xF05B, 0xF05B, 0xF05B, 0xF05B, 0xF05D, 
    0xF05E, 0xF060, 0xF062, 0xF064, 0xF065, 0xF066, 0xF066, 0xF065, 0xF063, 0xF060, 0xA1B7, 0xA315, 0xA50B, 0xA755, 
    0xA9B0, 0xABD9, 0xAD8E, 0xAE89, 0xAF26, 0xAFDE, 0xB0A2, 0xB15F, 0xB207, 0xB289, 0xB2D4, 0xB2D7, 0xB282, 0xB1C6, 
    0xB090, 0xAED1, 0xC4FF, 0xC4E5, 0xC4B7, 0xC473, 0xC416, 0xC39E, 0xC308, 0xC252, 0xC17A, 0xC008, 0xBDC6, 0xBB0C, 
    0xB834, 0xB598, 0xB392, 0xB27C, 0xB2AF, 0xB485, 0xB934, 0xC0F3, 0x1E82, 0x1C13, 0x186C, 0x13E4, 0x0ED4, 0x0993, 
    0x0478, 0xFFDC, 0xFC15, 0xF97C, 0xF7F4, 0xF710, 0xF6B3, 0xF6C2, 0xF71E, 0xF7AB, 0xF84B, 0xF8E1, 0xF951, 0xF97C, 
    0xED10, 0xEB8D, 0xE956, 0xE6AD, 0xE3D3, 0xE10A, 0xDE93, 0xDCAF, 0xDB9F, 0xDBA5, 0xDCD9, 0xDF06, 0xE1F8, 0xE578, 
    0xE952, 0xED51, 0xF140, 0xF4E9, 0xF818, 0xFA97, 0x975E, 0x9C84, 0xA356, 0xAA65, 0xB042, 0xB37C, 0xB4DC, 0xB61E, 
    0xB73D, 0xB834, 0xB8FF, 0xB999, 0xB9FD, 0xBA28, 0xBA14, 0xB9BD, 0xB91E, 0xB833, 0xB6F8, 0xB567, 0xFD12, 0xF99C, 
    0xF504, 0xF040, 0xEC48, 0xEA11, 0xE930, 0xE891, 0xE82E, 0xE7FC, 0xE7F6, 0xE812, 0xE848, 0xE891, 0xE8E5, 0xE93C, 
    0xE98D, 0xE9D1, 0xE9FF, 0xEA11, 0x2BAF, 0x2BB3, 0x2BB8, 0x2BBE, 0x2BC2, 0x2BC5, 0x2BC6, 0x2BC3, 0x2BBB, 0x2BAE, 
    0x2A5C, 0x26E5, 0x21D1, 0x1BAB, 0x14FD, 0x0E50, 0x082F, 0x0323, 0xFFB7, 0xFE74, 0x0788, 0x0792, 0x0790, 0x0788, 
    0x077D, 0x0774, 0x0770, 0x0770, 0x0770, 0x0770, 0x0770, 0x0770, 0x0770, 0x0770, 0x0770, 0x0770, 0x0770, 0x0770, 
    0x0770, 0x0770, 0xFC41, 0x0200, 0x0A45, 0x13FB, 0x1E11, 0x2773, 0x2F11, 0x34DD, 0x39A0, 0x3D88, 0x40BE, 0x4370, 
    0x4529, 0x45B6, 0x45A3, 0x457D, 0x45D9, 0x467C, 0x46BC, 0x45F1, 
};

JointIndex sRoofManKnockbackAnimJointIndices[] = {
    { 0x0010, 0x0024, 0x0038 },
    { 0x004C, 0x0060, 0x0074 },
    { 0x0088, 0x009C, 0x00B0 },
    { 0x0003, 0x0003, 0x00C4 },
    { 0x0004, 0x0005, 0x00D8 },
    { 0x00EC, 0x0100, 0x0114 },
    { 0x0003, 0x0003, 0x0128 },
    { 0x013C, 0x0150, 0x0164 },
    { 0x0006, 0x0007, 0x0178 },
    { 0x0003, 0x018C, 0x01A0 },
    { 0x0008, 0x0009, 0x01B4 },
    { 0x01C8, 0x01DC, 0x000A },
    { 0x0003, 0x000B, 0x01F0 },
    { 0x000C, 0x000D, 0x0204 },
    { 0x000E, 0x0218, 0x0003 },
    { 0x000F, 0x022C, 0x0240 },
};

AnimationHeader gRoofManKnockbackAnim = { 
    { 20 }, sRoofManKnockbackAnimFrameData,
    sRoofManKnockbackAnimJointIndices, 16
};

u8 object_ani_possiblePadding_0067C8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

s16 sRoofManGettingUpAfterKnockbackAnimFrameData[] = {
    0x00C7, 0x15C4, 0xF766, 0x0000, 0x0185, 0x0024, 0x049D, 0xF97C, 0xFFC8, 0x0770, 0x00C7, 0x00BA, 0x00A8, 0x0095, 
    0x0083, 0x0076, 0x0071, 0x0071, 0x0071, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076, 0x0078, 0x0079, 0x007B, 
    0x007D, 0x0080, 0x0083, 0x008A, 0x0095, 0x00A6, 0x00BA, 0x00CD, 0x00DC, 0x00E2, 0x00E1, 0x00E0, 0x15C4, 0x14BF, 
    0x1359, 0x11D4, 0x106F, 0x0F6A, 0x0F04, 0x0F06, 0x0F0B, 0x0F13, 0x0F20, 0x0F30, 0x0F43, 0x0F5A, 0x0F74, 0x0F92, 
    0x0FB4, 0x0FD9, 0x1002, 0x102E, 0x1078, 0x1105, 0x11E1, 0x1328, 0x14B8, 0x163C, 0x175E, 0x17D4, 0x17D0, 0x17B7, 
    0x3FFC, 0x3FF2, 0x3FE2, 0x3FCE, 0x3FB6, 0x3F9E, 0xBF85, 0xBF6C, 0xBF56, 0xBF43, 0xBF35, 0xBF2C, 0xBF2B, 0xBF32, 
    0xBF43, 0xBF5F, 0xBF87, 0xBFBC, 0xC000, 0xC1D2, 0xC4E5, 0xC685, 0xC685, 0xC685, 0xC685, 0xC685, 0xC685, 0xC685, 
    0xC685, 0xC685, 0xFCFC, 0xF8AE, 0xEF1C, 0xE26E, 0xD4CC, 0xC85F, 0xC0AF, 0xC435, 0xC43C, 0xC43D, 0xC43A, 0xC434, 
    0xC42C, 0xC423, 0xC41C, 0xC416, 0xC415, 0xC419, 0xC423, 0xC435, 0xC59B, 0xC941, 0xCE95, 0xD507, 0xDC08, 0xE306, 
    0xE972, 0xEEBB, 0xF250, 0xF3A2, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xEEC4, 0xE9EE, 0xE4BA, 0xDFBF, 0xDB83, 0xD7A2, 0xD449, 0xD24B, 
    0xD1AC, 0xD433, 0xDA23, 0xE169, 0xE9AC, 0xF26A, 0xFB0F, 0x0308, 0x09DD, 0x0F30, 0x12B9, 0x14A3, 0x1572, 0x1561, 
    0x149A, 0x133B, 0x1158, 0x0F0A, 0x0C7A, 0x09F9, 0x0808, 0x0742, 0xF560, 0xF44A, 0xF421, 0xF4F1, 0xF672, 0xF89F, 
    0xFB4C, 0xFD5F, 0xFD48, 0xFB61, 0xF92E, 0xF753, 0xF618, 0xF5A2, 0xF5E6, 0xF6A6, 0xF781, 0xF804, 0xF7BB, 0xF647, 
    0xF3B5, 0xF044, 0xEC3C, 0xE7EB, 0xE3A0, 0xDFA7, 0xDC44, 0xD9AD, 0xD808, 0xD774, 0xD4C3, 0xDC91, 0xE4D6, 0xECD1, 
    0xF3CF, 0xFA8D, 0x00D5, 0x04E8, 0x04BE, 0x0100, 0xFB9C, 0xF51D, 0xEDE6, 0xE66E, 0xDF34, 0xD8A6, 0xD31A, 0xCECA, 
    0xCBEE, 0xCA72, 0xCA01, 0xCA82, 0xCBE4, 0xCE14, 0xD0FA, 0xD46D, 0xD826, 0xDBAF, 0xDE5D, 0xDF6A, 0x0001, 0x0001, 
    0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0001, 0x0000, 0xFFFC, 0xFFF2, 0xFFE6, 0xFFDA, 0xFFCF, 0xFFC9, 
    0xFFC9, 0xFFD1, 0xFFE4, 0xFFE4, 0x001D, 0x012C, 0x03D7, 0x0759, 0x0A07, 0x0B9D, 0x0CEF, 0x0DF1, 0x0E95, 0x0ECE, 
    0x20FA, 0x2004, 0x1EF9, 0x1DFD, 0x1D39, 0x1CD2, 0x1CEE, 0x1DB4, 0x1F4A, 0x21D7, 0x25D1, 0x2B5D, 0x3228, 0x39DB, 
    0x4225, 0x4AB0, 0x5328, 0x5B39, 0x6290, 0x6A60, 0x7189, 0x7431, 0x6F11, 0x6571, 0x5D55, 0x57D6, 0x5277, 0x4DD9, 
    0x4A9E, 0x4966, 0xFBAA, 0xFBAA, 0xFBAA, 0xFBAA, 0xFBAA, 0xFBAA, 0xFBAA, 0xFBAA, 0xFBAA, 0xFBAA, 0xFB88, 0xFB32, 
    0xFABE, 0xFA42, 0xF9D6, 0xF98F, 0xF983, 0xF9CB, 0xFA7B, 0xFBAA, 0x00B4, 0x0920, 0x0F43, 0x1092, 0x0F99, 0x0E47, 
    0x0D08, 0x0B65, 0x09F7, 0x095A, 0xB3ED, 0xB3F9, 0xB410, 0xB430, 0xB45C, 0xB493, 0xB4D7, 0xB528, 0xB588, 0xB5F7, 
    0xB6CF, 0xB850, 0xBA4F, 0xBCA4, 0xBF23, 0xC1A4, 0xC3FD, 0xC604, 0xC790, 0xC876, 0xC623, 0xC0E9, 0xBCF7, 0xBC7D, 
    0xBD4B, 0xBD09, 0xBA6C, 0xB6B8, 0xB368, 0xB1F9, 0x07D3, 0x0CF5, 0x112C, 0x13F5, 0x156B, 0x156C, 0x13A5, 0x10FD, 
    0x0EBD, 0x0C71, 0x0A2A, 0x07F4, 0x05D5, 0x03D4, 0x01F5, 0x003C, 0xFEAF, 0xFD52, 0xFC2A, 0xFB51, 0xFAD4, 0xFAA5, 
    0xFAB6, 0xFAF9, 0xFB5D, 0xFBCD, 0xFCC7, 0xFE5A, 0xFFC3, 0x005D, 0x215B, 0x2070, 0x1E96, 0x1C6C, 0x1AAE, 0x1B97, 
    0x1E33, 0x1EB2, 0x1CDC, 0x1A87, 0x17D7, 0x14ED, 0x11E9, 0x0EED, 0x0C18, 0x098C, 0x0768, 0x05CA, 0x04D3, 0x050B, 
    0x069E, 0x0923, 0x0C2F, 0x0F58, 0x1233, 0x1454, 0x1597, 0x162D, 0x1643, 0x1633, 0xD2A1, 0xDF48, 0xEAD9, 0xF407, 
    0xFA03, 0xF894, 0xF0B3, 0xEA4F, 0xE7F3, 0xE5E2, 0xE41D, 0xE29F, 0xE160, 0xE054, 0xDF72, 0xDEB1, 0xDE07, 0xDD6F, 
    0xDCE2, 0xDC65, 0xDC07, 0xDBCD, 0xDBC3, 0xDBF6, 0xDC7A, 0xDD5F, 0xDFD1, 0xE3C9, 0xE777, 0xE913, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFC, 0xFFF9, 0xFFF6, 0xFFF3, 0xFFF2, 
    0xFFF4, 0xFFF8, 0x0000, 0x0011, 0x002D, 0x004F, 0x0072, 0x008F, 0x00AB, 0x00CA, 0x00E8, 0x0102, 0x0114, 0x011A, 
    0x403C, 0x3F8B, 0x3EC9, 0x3E12, 0x3D81, 0x3D34, 0x3D47, 0x3DD4, 0x3EF9, 0x40D1, 0x43F7, 0x48A7, 0x4E71, 0x54E4, 
    0x5B90, 0x6204, 0x67D0, 0x6C82, 0x6FAC, 0x7085, 0x6EE6, 0x6B52, 0x6647, 0x6047, 0x57E4, 0x4CA9, 0x4087, 0x3573, 
    0x2D5F, 0x2A3F, 0xB15D, 0xB19F, 0xB1EA, 0xB23F, 0xB29A, 0xB2FC, 0xB364, 0xB3D1, 0xB441, 0xB4B4, 0xB529, 0xB59F, 
    0xB614, 0xB689, 0xB6FB, 0xB76B, 0xB7D6, 0xB83D, 0xB89E, 0xB8F8, 0xB8FA, 0xB89D, 0xB84E, 0xB87B, 0xB992, 0xBC58, 
    0xC085, 0xC4F0, 0xC870, 0xC9DC, 0x013A, 0x013A, 0x013A, 0x013A, 0x013A, 0x013A, 0x013A, 0x013A, 0x013A, 0x013A, 
    0x013A, 0x0129, 0x0100, 0x00CE, 0x00A0, 0x0086, 0x008D, 0x00C4, 0x013A, 0x01FD, 0x0306, 0x0443, 0x05A0, 0x070C, 
    0x0873, 0x09C3, 0x0AE9, 0x0BD1, 0x0C6B, 0x0CA2, 0x01A9, 0x01A9, 0x01A9, 0x01A9, 0x01A9, 0x01A9, 0x01A9, 0x01A9, 
    0x01A9, 0x01A9, 0x01A9, 0x01B1, 0x01C6, 0x01DF, 0x01F6, 0x0203, 0x01FF, 0x01E4, 0x01A9, 0x0147, 0x00C3, 0x0024, 
    0xFF76, 0xFEC0, 0xFE0C, 0xFD64, 0xFCD1, 0xFC5D, 0xFC10, 0xFBF5, 0xA032, 0xA1C2, 0xA2F1, 0xA360, 0xA294, 0xA0B2, 
    0x9E55, 0x9C18, 0x9A95, 0x9A65, 0x9C24, 0xA088, 0xA746, 0xAF7B, 0xB840, 0xC0B0, 0xC7E7, 0xCCFF, 0xCF12, 0xCE3A, 
    0xCB71, 0xC723, 0xC1BF, 0xBBB0, 0xB565, 0xAF4A, 0xA9CC, 0xA559, 0xA25D, 0xA146, 0xF05B, 0xF05D, 0xF04F, 0xF000, 
    0xEF53, 0xEE6B, 0xED73, 0xEC96, 0xEC01, 0xEBE0, 0xEC3A, 0xECEB, 0xEDD7, 0xEEE6, 0xEFFE, 0xF105, 0xF1E1, 0xF278, 
    0xF2B2, 0xF274, 0xF192, 0xF00F, 0xEE15, 0xEBD2, 0xE96F, 0xE71A, 0xE4FD, 0xE345, 0xE21D, 0xE1B0, 0xAC78, 0xA1EC, 
    0x9021, 0x83D6, 0x7F8D, 0x7D04, 0x7BDB, 0x7BB2, 0x7C2A, 0x7CE3, 0x7DE7, 0x7F6C, 0x8153, 0x837F, 0x85D0, 0x8828, 
    0x8A68, 0x8C71, 0x8E26, 0x8F68, 0x903E, 0x90CE, 0x9123, 0x9148, 0x9149, 0x9130, 0x9109, 0x90DF, 0x90BE, 0x90B0, 
    0xFF68, 0xFF68, 0xFF68, 0xFF68, 0xFF68, 0xFF2D, 0xFEF2, 0xFF68, 0x0094, 0x01FC, 0x0391, 0x0541, 0x06FC, 0x08B2, 
    0x0A52, 0x0BCB, 0x0D0D, 0x0E07, 0x0EAA, 0x0EE3, 0x0E87, 0x0D8A, 0x0C10, 0x0A3C, 0x0833, 0x0618, 0x040F, 0x023B, 
    0x00C1, 0xFFC4, 0xFA31, 0xFA31, 0xFA31, 0xFA31, 0xFA31, 0xFA37, 0xFA3D, 0xFA31, 0xF9FD, 0xF9A3, 0xF92F, 0xF8AE, 
    0xF82C, 0xF7B5, 0xF756, 0xF719, 0xF70C, 0xF73B, 0xF7B2, 0xF87D, 0xF9DB, 0xFBE5, 0xFE70, 0x0150, 0x045B, 0x0764, 
    0x0A41, 0x0CC7, 0x0ECA, 0x101E, 0xCAA0, 0xD516, 0xDF33, 0xE7D4, 0xEDD4, 0xEC86, 0xE530, 0xDFA0, 0xDD8C, 0xDB7D, 
    0xD97A, 0xD78B, 0xD5B9, 0xD40B, 0xD289, 0xD13B, 0xD02A, 0xCF5D, 0xCEDC, 0xCEAF, 0xCF14, 0xD029, 0xD1C7, 0xD3C7, 
    0xD601, 0xD84F, 0xDA89, 0xDC88, 0xDE26, 0xDF3B, 0xFBA2, 0xFB22, 0xF9ED, 0xF8D9, 0xF751, 0xF628, 0xF6D4, 0xF82C, 
    0xF92E, 0xF8D9, 0xF72A, 0xF4E9, 0xF242, 0xEF63, 0xEC78, 0xE9B0, 0xE738, 0xE53C, 0xE3EA, 0xE370, 0xE370, 0xE370, 
    0xE370, 0xE370, 0xE370, 0xE370, 0xE370, 0xE370, 0xE370, 0xE370, 0xF70E, 0xF61A, 0xF5E9, 0xF7A1, 0x018F, 0x09F7, 
    0x0758, 0x0173, 0xFB3B, 0xF7A1, 0xF691, 0xF5F4, 0xF5B4, 0xF5BE, 0xF5FE, 0xF65F, 0xF6CE, 0xF736, 0xF783, 0xF7A1, 
    0xF7A1, 0xF7A1, 0xF7A1, 0xF7A1, 0xF7A1, 0xF7A1, 0xF7A1, 0xF7A1, 0xF7A1, 0xF7A1, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0xFFEC, 0xFFB9, 0xFF70, 0xFF1C, 0xFEC9, 0xFE80, 0xFE4C, 0xFE39, 0xFE50, 0xFE9C, 
    0xFF29, 0x0000, 0x016D, 0x0391, 0x0639, 0x092F, 0x0C40, 0x8F38, 0x91E1, 0x9409, 0x957A, 0x9600, 0x1170, 0x1170, 
    0x1170, 0x1170, 0x1170, 0x1170, 0x1170, 0x1170, 0x112B, 0x1076, 0x0F75, 0x0E4F, 0x0D29, 0x0C29, 0x0B73, 0x0B2E, 
    0x0B80, 0x0C8D, 0x0E7B, 0x1170, 0x1674, 0x1DFE, 0x2755, 0x31C1, 0x3C8B, 0x3905, 0x2FA7, 0x2813, 0x2300, 0x2126, 
    0xB37C, 0xAD63, 0xA219, 0x95D3, 0x8CC7, 0x89F0, 0x8AF9, 0x8C20, 0x8C1B, 0x8C1F, 0x8C2B, 0x8C3B, 0x8C4D, 0x8C5E, 
    0x8C6B, 0x8C73, 0x8C72, 0x8C65, 0x8C4B, 0x8C20, 0x8BD6, 0x8B66, 0x8ADC, 0x8A41, 0x89A1, 0x0907, 0x087C, 0x080B, 
    0x07C0, 0x07A5, 0x05B3, 0x05B3, 0x05B3, 0x05B3, 0x05B3, 0x05B3, 0x05B3, 0x05B3, 0x05B3, 0x05B3, 0x0595, 0x0548, 
    0x04E0, 0x0471, 0x0410, 0x03D0, 0x03C6, 0x0406, 0x04A3, 0x05B3, 0x077E, 0x0A17, 0x0D42, 0x10C4, 0x1460, 0x17DB, 
    0x1AF8, 0x1D7C, 0x1F2A, 0x1FC7, 0xEA11, 0xEA11, 0xEA11, 0xEA11, 0xEA11, 0xEA11, 0xEA11, 0xEA11, 0xEA11, 0xEA11, 
    0xEA35, 0xEA94, 0xEB13, 0xEB9A, 0xEC11, 0xEC5E, 0xEC6B, 0xEC1D, 0xEB5C, 0xEA11, 0xE7E1, 0xE4B5, 0xE0D6, 0xDC8E, 
    0xD826, 0xD3E7, 0xD01A, 0xCD09, 0xCAFC, 0xCA3C, 0x137A, 0x137A, 0x137A, 0x137A, 0x137A, 0x137A, 0x137A, 0x137A, 
    0x137A, 0x137A, 0x1353, 0x12F1, 0x126C, 0x11DF, 0x1163, 0x1112, 0x1105, 0x1156, 0x121F, 0x137A, 0x15C4, 0x1917, 
    0x1D26, 0x21A4, 0x2645, 0x2ABB, 0x2EB9, 0x31F2, 0x341A, 0x34E3, 0xFF84, 0x026F, 0x06CC, 0x0C34, 0x123D, 0x1881, 
    0x1E96, 0x2415, 0x2895, 0x2BAE, 0x2DAD, 0x2F2A, 0x302B, 0x30B6, 0x30D1, 0x3083, 0x2FD3, 0x2EC5, 0x2D61, 0x2BAE, 
    0x2925, 0x2577, 0x20F8, 0x1BFE, 0x16DF, 0x11EE, 0x0D82, 0x09F0, 0x078E, 0x06AF, 0xFDD6, 0xFDD6, 0xFDD6, 0xFDD6, 
    0xFDD6, 0xFDD6, 0xFDD6, 0xFDD6, 0xFE82, 0xFFA1, 0xFFDA, 0xFDD6, 0xF024, 0xE853, 0x04F4, 0x1E8D, 0x0A3C, 0xF0C7, 
    0xF4FD, 0xFDD6, 0xFEB8, 0xFF3B, 0xFF70, 0xFF67, 0xFF32, 0xFEE2, 0xFE86, 0xFE2F, 0xFDEF, 0xFDD6, 0x4370, 0x3DCE, 
    0x357C, 0x2C9A, 0x2549, 0x20F3, 0x1EC1, 0x1D77, 0x1CA4, 0x1C71, 0x1C85, 0x1C89, 0x1C8C, 0x1CAE, 0x1CD3, 0x1CFD, 
    0x1D26, 0x1D4A, 0x1EA2, 0x1D77, 0x17D5, 0x1109, 0x097D, 0x0199, 0xF9CA, 0xF278, 0xEC0E, 0xE6F5, 0xE399, 0xE263, 
    
};

JointIndex sRoofManGettingUpAfterKnockbackAnimJointIndices[] = {
    { 0x000A, 0x0028, 0x0002 },
    { 0x0046, 0x0064, 0x0082 },
    { 0x00A0, 0x00BE, 0x00DC },
    { 0x0003, 0x00FA, 0x0118 },
    { 0x0136, 0x0004, 0x0154 },
    { 0x0172, 0x0190, 0x01AE },
    { 0x0003, 0x01CC, 0x01EA },
    { 0x0005, 0x0006, 0x0208 },
    { 0x0226, 0x0244, 0x0262 },
    { 0x0003, 0x0280, 0x029E },
    { 0x02BC, 0x02DA, 0x02F8 },
    { 0x0007, 0x0316, 0x0334 },
    { 0x0352, 0x0370, 0x038E },
    { 0x0008, 0x03AC, 0x03CA },
    { 0x03E8, 0x0406, 0x0003 },
    { 0x0424, 0x0009, 0x0442 },
};

AnimationHeader gRoofManGettingUpAfterKnockbackAnim = { 
    { 30 }, sRoofManGettingUpAfterKnockbackAnimFrameData,
    sRoofManGettingUpAfterKnockbackAnimJointIndices, 10
};

s16 sRoofManIdleAnimFrameData[] = {
    0x0050, 0x0C7E, 0x009B, 0xC000, 0x0000, 0x1810, 0xFBAA, 0x0185, 0xB5F7, 0x0024, 0xF05B, 0xFF68, 0xFA31, 0xF7A1, 
    0x1170, 0xFFC8, 0x05B3, 0x137A, 0x2BAE, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 
    0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7E, 0x0C7D, 0x0C7D, 0x0C7D, 
    0x0C7D, 0x0C7D, 0x0C7D, 0x0C7D, 0x0C7D, 0x0C7E, 0x0C7E, 0xE312, 0xE312, 0xE313, 0xE313, 0xE313, 0xE313, 0xE313, 
    0xE314, 0xE314, 0xE314, 0xE314, 0xE315, 0xE315, 0xE315, 0xE316, 0xE316, 0xE316, 0xE316, 0xE316, 0xE316, 0xE316, 
    0xE316, 0xE316, 0xE316, 0xE316, 0xE315, 0xE315, 0xE314, 0xE313, 0xE312, 0x0973, 0x0973, 0x0973, 0x0974, 0x0975, 
    0x0976, 0x0976, 0x0977, 0x0979, 0x097A, 0x097A, 0x097B, 0x097C, 0x097D, 0x097D, 0x097D, 0x097D, 0x097C, 0x097C, 
    0x097B, 0x0979, 0x0978, 0x0977, 0x0976, 0x0974, 0x0974, 0x0974, 0x0976, 0x0976, 0x0973, 0x06D9, 0x06D9, 0x06D8, 
    0x06D8, 0x06D7, 0x06D6, 0x06D4, 0x06D3, 0x06D1, 0x06D0, 0x06CF, 0x06CD, 0x06CC, 0x06CC, 0x06CB, 0x06CB, 0x06CB, 
    0x06CB, 0x06CC, 0x06CE, 0x06CF, 0x06D1, 0x06D2, 0x06D4, 0x06D5, 0x06D6, 0x06D7, 0x06D8, 0x06D9, 0x06D9, 0xE01E, 
    0xE01F, 0xE021, 0xE024, 0xE028, 0xE02D, 0xE033, 0xE039, 0xE03F, 0xE045, 0xE04A, 0xE050, 0xE054, 0xE058, 0xE05A, 
    0xE05C, 0xE05B, 0xE059, 0xE055, 0xE050, 0xE04A, 0xE043, 0xE03D, 0xE036, 0xE031, 0xE02C, 0xE027, 0xE022, 0xE01F, 
    0xE01E, 0x099F, 0x099F, 0x099F, 0x099F, 0x099F, 0x099F, 0x099E, 0x099E, 0x099E, 0x099D, 0x099D, 0x099D, 0x099C, 
    0x099C, 0x099B, 0x099B, 0x099B, 0x099A, 0x0999, 0x0999, 0x0998, 0x0998, 0x0997, 0x0997, 0x0997, 0x0997, 0x0998, 
    0x099B, 0x099E, 0x099F, 0xF789, 0xF789, 0xF789, 0xF788, 0xF788, 0xF788, 0xF787, 0xF787, 0xF786, 0xF786, 0xF785, 
    0xF785, 0xF784, 0xF784, 0xF784, 0xF784, 0xF784, 0xF784, 0xF785, 0xF785, 0xF786, 0xF787, 0xF788, 0xF788, 0xF789, 
    0xF789, 0xF787, 0xF784, 0xF783, 0xF789, 0xD641, 0xD641, 0xD642, 0xD643, 0xD645, 0xD647, 0xD649, 0xD64B, 0xD64D, 
    0xD64F, 0xD651, 0xD653, 0xD654, 0xD655, 0xD656, 0xD655, 0xD654, 0xD652, 0xD64E, 0xD64A, 0xD646, 0xD641, 0xD63D, 
    0xD639, 0xD636, 0xD634, 0xD635, 0xD639, 0xD63D, 0xD641, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 
    0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAE, 0x1AAF, 0x1AAF, 0x1AB0, 0x1AB1, 
    0x1AB1, 0x1AB2, 0x1AB2, 0x1AB3, 0x1AB3, 0x1AB2, 0x1AB1, 0x1AB0, 0x1AAE, 0x049D, 0x046D, 0x03E6, 0x0318, 0x0210, 
    0x00DC, 0xFF8C, 0xFE2D, 0xFCCE, 0xFB7E, 0xFA4A, 0xF942, 0xF874, 0xF7ED, 0xF7BD, 0xF7E1, 0xF847, 0xF8E7, 0xF9B6, 
    0xFAAB, 0xFBBE, 0xFCE4, 0xFE16, 0xFF49, 0x0075, 0x0190, 0x0291, 0x036F, 0x0421, 0x049D, 0xB125, 0xB125, 0xB125, 
    0xB124, 0xB123, 0xB122, 0xB121, 0xB120, 0xB11E, 0xB11D, 0xB11C, 0xB11B, 0xB11B, 0xB11A, 0xB11A, 0xB11A, 0xB11A, 
    0xB11B, 0xB11C, 0xB11D, 0xB11E, 0xB11F, 0xB120, 0xB121, 0xB122, 0xB123, 0xB124, 0xB124, 0xB125, 0xB125, 0x013A, 
    0x013A, 0x013A, 0x0139, 0x0138, 0x0138, 0x0137, 0x0136, 0x0135, 0x0133, 0x0132, 0x0132, 0x0131, 0x0131, 0x0130, 
    0x0130, 0x0131, 0x0131, 0x0132, 0x0132, 0x0133, 0x0134, 0x0135, 0x0135, 0x0136, 0x0137, 0x0138, 0x0139, 0x0139, 
    0x013A, 0x01A9, 0x01A9, 0x01A9, 0x01A9, 0x01AA, 0x01AA, 0x01AB, 0x01AC, 0x01AD, 0x01AD, 0x01AE, 0x01AF, 0x01AF, 
    0x01B0, 0x01B0, 0x01B0, 0x01AF, 0x01AF, 0x01AF, 0x01AE, 0x01AE, 0x01AD, 0x01AD, 0x01AC, 0x01AB, 0x01AB, 0x01AA, 
    0x01AA, 0x01A9, 0x01A9, 0x9522, 0x9522, 0x951E, 0x9514, 0x9503, 0x94EE, 0x94D6, 0x94BD, 0x94A2, 0x9488, 0x9470, 
    0x945C, 0x944B, 0x9440, 0x943D, 0x9440, 0x9448, 0x9455, 0x9465, 0x9479, 0x948E, 0x94A5, 0x94BC, 0x94D2, 0x94E7, 
    0x94FB, 0x950B, 0x9518, 0x9520, 0x9522, 0xA134, 0xA134, 0xA134, 0xA134, 0xA134, 0xA134, 0xA134, 0xA134, 0xA134, 
    0xA134, 0xA135, 0xA135, 0xA135, 0xA135, 0xA135, 0xA135, 0xA135, 0xA135, 0xA135, 0xA136, 0xA136, 0xA135, 0xA135, 
    0xA135, 0xA135, 0xA135, 0xA135, 0xA134, 0xA134, 0xA134, 0xC507, 0xC507, 0xC507, 0xC507, 0xC507, 0xC507, 0xC508, 
    0xC508, 0xC508, 0xC508, 0xC508, 0xC508, 0xC508, 0xC508, 0xC509, 0xC509, 0xC509, 0xC509, 0xC509, 0xC509, 0xC509, 
    0xC509, 0xC509, 0xC509, 0xC509, 0xC508, 0xC508, 0xC508, 0xC508, 0xC507, 0x1F61, 0x1F60, 0x1F60, 0x1F5F, 0x1F5E, 
    0x1F5C, 0x1F5B, 0x1F59, 0x1F57, 0x1F55, 0x1F53, 0x1F51, 0x1F4F, 0x1F4E, 0x1F4C, 0x1F4A, 0x1F49, 0x1F48, 0x1F47, 
    0x1F47, 0x1F47, 0x1F48, 0x1F49, 0x1F4A, 0x1F4C, 0x1F4F, 0x1F52, 0x1F56, 0x1F5B, 0x1F61, 0xED9F, 0xED9F, 0xED9F, 
    0xED9F, 0xED9F, 0xED9F, 0xED9F, 0xED9F, 0xED9E, 0xED9E, 0xED9E, 0xED9E, 0xED9E, 0xED9D, 0xED9D, 0xED9D, 0xED9D, 
    0xED9D, 0xED9D, 0xED9D, 0xED9D, 0xED9D, 0xED9D, 0xED9D, 0xED9D, 0xED9E, 0xED9E, 0xED9E, 0xED9F, 0xED9F, 0x9555, 
    0x9559, 0x9563, 0x9572, 0x9586, 0x959E, 0x95B8, 0x95D5, 0x95F2, 0x960F, 0x962B, 0x9646, 0x965D, 0x9671, 0x9681, 
    0x968B, 0x968E, 0x9689, 0x967A, 0x9664, 0x9648, 0x9627, 0x9604, 0x95E0, 0x95BD, 0x959C, 0x9580, 0x9569, 0x955B, 
    0x9555, 0xFE70, 0xFE68, 0xFE52, 0xFE31, 0xFE06, 0xFDD3, 0xFD9B, 0xFD5F, 0xFD23, 0xFCE8, 0xFCB0, 0xFC7D, 0xFC52, 
    0xFC30, 0xFC1A, 0xFC13, 0xFC1C, 0xFC34, 0xFC5A, 0xFC8B, 0xFCC3, 0xFD01, 0xFD41, 0xFD81, 0xFDBF, 0xFDF8, 0xFE28, 
    0xFE4E, 0xFE67, 0xFE70, 0xFDD6, 0xFDD6, 0xFDD6, 0xFDD7, 0xFDD7, 0xFDD8, 0xFDD8, 0xFDD9, 0xFDD9, 0xFDDA, 0xFDDA, 
    0xFDDB, 0xFDDB, 0xFDDB, 0xFDDC, 0xFDDC, 0xFDDC, 0xFDDC, 0xFDDB, 0xFDDB, 0xFDDA, 0xFDDA, 0xFDD9, 0xFDD9, 0xFDD8, 
    0xFDD8, 0xFDD7, 0xFDD7, 0xFDD6, 0xFDD6, 0x0770, 0x0767, 0x074D, 0x0726, 0x06F3, 0x06B8, 0x0676, 0x0631, 0x05EA, 
    0x05A5, 0x0563, 0x0528, 0x04F5, 0x04CE, 0x04B4, 0x04AB, 0x04B4, 0x04CA, 0x04EE, 0x051D, 0x0554, 0x0591, 0x05D3, 
    0x0617, 0x065C, 0x069F, 0x06DE, 0x0717, 0x0749, 0x0770, 0xFA19, 0xFA1A, 0xFA1B, 0xFA1D, 0xFA20, 0xFA23, 0xFA26, 
    0xFA2A, 0xFA2E, 0xFA32, 0xFA35, 0xFA38, 0xFA3B, 0xFA3D, 0xFA3E, 0xFA3F, 0xFA3E, 0xFA3D, 0xFA3A, 0xFA37, 0xFA33, 
    0xFA2F, 0xFA2A, 0xFA26, 0xFA22, 0xFA1F, 0xFA1C, 0xFA1A, 0xFA19, 0xFA19, 0x0000, 
};

JointIndex sRoofManIdleAnimJointIndices[] = {
    { 0x0000, 0x0013, 0x0002 },
    { 0x0003, 0x0031, 0x0003 },
    { 0x004F, 0x006D, 0x008B },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0006, 0x0007, 0x0008 },
    { 0x00A9, 0x00C7, 0x00E5 },
    { 0x0004, 0x0004, 0x0103 },
    { 0x0009, 0x0121, 0x013F },
    { 0x015D, 0x017B, 0x0199 },
    { 0x0004, 0x000A, 0x01B7 },
    { 0x000B, 0x000C, 0x01D5 },
    { 0x01F3, 0x0211, 0x000D },
    { 0x0004, 0x000E, 0x022F },
    { 0x000F, 0x0010, 0x024D },
    { 0x0011, 0x0012, 0x0004 },
    { 0x026B, 0x0289, 0x02A7 },
};

AnimationHeader gRoofManIdleAnim = { 
    { 30 }, sRoofManIdleAnimFrameData,
    sRoofManIdleAnimJointIndices, 19
};

