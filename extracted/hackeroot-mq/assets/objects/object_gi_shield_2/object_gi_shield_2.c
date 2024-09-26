#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_shield_2.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_gi_shield_2Vtx_000000[] = {
#include "assets/objects/object_gi_shield_2/object_gi_shield_2Vtx_000000.vtx.inc"
};

Gfx gGiHylianShieldDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, COMBINED, 0, SHADE, 0, 1, 1,
                       PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(130, 130, 140, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_shield_2Vtx_000000, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_shield_2Vtx_000000[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(1, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 7, 8, 0),
    gsSP2Triangles(10, 9, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 16, 15, 0),
    gsSP2Triangles(17, 16, 14, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 20, 0, 20, 19, 21, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
    gsSP2Triangles(26, 25, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&object_gi_shield_2Vtx_000000[34], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(8, 9, 10, 0, 3, 2, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(15, 17, 18, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 100, 100, 110, 255),
    gsDPSetEnvColor(30, 30, 30, 255),
    gsSPTexture(0x07D0, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_shield_2Vtx_000000[53], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
    gsSP2Triangles(5, 2, 6, 0, 6, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 60, 80, 200, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_shield_2Vtx_000000[60], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 3, 1, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 1, 0, 7, 5, 1, 0),
    gsSP2Triangles(7, 8, 5, 0, 7, 9, 8, 0),
    gsSP2Triangles(7, 10, 9, 0, 11, 0, 2, 0),
    gsSP2Triangles(0, 11, 12, 0, 12, 13, 0, 0),
    gsSP2Triangles(10, 13, 12, 0, 12, 9, 10, 0),
    gsSP2Triangles(14, 15, 12, 0, 12, 15, 16, 0),
    gsSP2Triangles(16, 17, 12, 0, 18, 19, 16, 0),
    gsSP2Triangles(19, 17, 16, 0, 17, 20, 12, 0),
    gsSP2Triangles(12, 20, 9, 0, 9, 20, 21, 0),
    gsSP2Triangles(22, 23, 20, 0, 20, 23, 21, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 21, 0),
    gsSP2Triangles(26, 21, 25, 0, 27, 28, 19, 0),
    gsSP2Triangles(27, 29, 28, 0, 25, 28, 26, 0),
    gsSP2Triangles(28, 29, 26, 0, 30, 26, 29, 0),
    gsSP1Triangle(29, 31, 30, 0),
    gsSPVertex(&object_gi_shield_2Vtx_000000[92], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(8, 9, 7, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 12, 10, 0),
    gsSP2Triangles(12, 13, 10, 0, 13, 14, 10, 0),
    gsSP2Triangles(3, 5, 15, 0, 16, 15, 5, 0),
    gsSP2Triangles(5, 17, 16, 0, 16, 17, 18, 0),
    gsSP2Triangles(18, 19, 16, 0, 16, 20, 21, 0),
    gsSP2Triangles(22, 20, 16, 0, 16, 23, 22, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 23, 24, 0),
    gsSP2Triangles(16, 26, 23, 0, 19, 26, 16, 0),
    gsSP2Triangles(27, 28, 13, 0, 26, 29, 30, 0),
    gsSP1Triangle(27, 31, 28, 0),
    gsSPVertex(&object_gi_shield_2Vtx_000000[124], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 4, 6, 0, 0),
    gsSP2Triangles(4, 8, 6, 0, 8, 4, 9, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(7, 8, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 100, 150, 255),
    gsDPSetEnvColor(100, 0, 50, 255),
    gsSPVertex(&object_gi_shield_2Vtx_000000[142], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 5, 0, 5, 6, 2, 0),
    gsSP2Triangles(7, 8, 6, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 7, 6, 0, 10, 11, 7, 0),
    gsSP2Triangles(12, 10, 6, 0, 12, 13, 10, 0),
    gsSP2Triangles(4, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(4, 15, 19, 0, 18, 20, 21, 0),
    gsSP2Triangles(4, 19, 22, 0, 19, 23, 22, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, PRIM_LOD_FRAC, 1, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0x80, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 120, 0, 255),
    gsSPTexture(0x1770, 0x1770, 0, G_TX_RENDERTILE, G_ON),
    gsSPVertex(&object_gi_shield_2Vtx_000000[166], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(0, 3, 5, 0, 6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, COMBINED, 0, SHADE, 0, 1, 1,
                       PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 120, 40, 0, 255),
    gsDPSetEnvColor(30, 10, 0, 255),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_shield_2Vtx_000000[175], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 0, 0),
    gsSP2Triangles(5, 10, 3, 0, 11, 8, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 14, 21, 12, 0),
    gsSP2Triangles(17, 22, 15, 0, 19, 23, 20, 0),
    gsSPEndDisplayList(),
};

