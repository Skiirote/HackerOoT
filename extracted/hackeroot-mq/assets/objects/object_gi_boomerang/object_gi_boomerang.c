#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_boomerang.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_gi_boomerangVtx_000000[] = {
#include "assets/objects/object_gi_boomerang/object_gi_boomerangVtx_000000.vtx.inc"
};

Gfx gGiBoomerangDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, COMBINED, 0, SHADE, 0, 1, 1,
                       PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 160, 100, 0, 255),
    gsDPSetEnvColor(60, 30, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsSPVertex(object_gi_boomerangVtx_000000, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 8, 9, 1, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 11, 0),
    gsSP2Triangles(15, 13, 16, 0, 17, 5, 18, 0),
    gsSP2Triangles(19, 16, 20, 0, 21, 5, 4, 0),
    gsSP2Triangles(22, 18, 5, 0, 8, 0, 23, 0),
    gsSP2Triangles(2, 6, 0, 0, 1, 0, 8, 0),
    gsSP2Triangles(12, 24, 10, 0, 11, 10, 13, 0),
    gsSP2Triangles(16, 19, 15, 0, 20, 25, 19, 0),
    gsSP2Triangles(4, 26, 21, 0, 5, 21, 22, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&object_gi_boomerangVtx_000000[30], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 14, 13, 0),
    gsSP2Triangles(8, 0, 16, 0, 17, 15, 18, 0),
    gsSP2Triangles(1, 0, 19, 0, 0, 20, 7, 0),
    gsSP2Triangles(21, 22, 8, 0, 3, 5, 23, 0),
    gsSP2Triangles(8, 22, 6, 0, 11, 24, 9, 0),
    gsSP2Triangles(14, 25, 12, 0, 13, 18, 15, 0),
    gsSP2Triangles(18, 26, 17, 0, 19, 27, 1, 0),
    gsSP1Triangle(7, 19, 0, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 150, 255),
    gsDPSetEnvColor(100, 50, 0, 255),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_boomerangVtx_000000[58], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_boomerangVtx_000000[61], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 8, 5, 0),
    gsSP2Triangles(2, 9, 10, 0, 5, 11, 7, 0),
    gsSP2Triangles(10, 12, 2, 0, 13, 0, 14, 0),
    gsSP2Triangles(14, 0, 6, 0, 10, 15, 14, 0),
    gsSP2Triangles(10, 14, 12, 0, 16, 3, 17, 0),
    gsSP2Triangles(17, 3, 18, 0, 7, 19, 17, 0),
    gsSP1Triangle(7, 17, 8, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_gi_boomerangVtx_000000[81], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 7, 0, 1, 0, 4, 0),
    gsSP2Triangles(2, 6, 0, 0, 5, 8, 3, 0),
    gsSP2Triangles(7, 9, 6, 0, 4, 3, 1, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 10, 17, 0, 14, 12, 11, 0),
    gsSP2Triangles(12, 17, 10, 0, 15, 18, 13, 0),
    gsSP2Triangles(17, 19, 16, 0, 11, 15, 14, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 50, 150, 255),
    gsDPSetEnvColor(80, 0, 0, 255),
    gsSPTexture(0x1770, 0x1770, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_gi_boomerangVtx_000000[101], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 0, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(2, 1, 8, 0, 5, 9, 3, 0),
    gsSP2Triangles(6, 8, 1, 0, 9, 5, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 50, 200, 0, 255),
    gsDPSetEnvColor(0, 80, 0, 255),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_gi_boomerangVtx_000000[111], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 7, 0, 1, 0, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 8, 13, 0),
    gsSP2Triangles(10, 9, 4, 0, 14, 11, 15, 0),
    gsSP2Triangles(2, 6, 0, 0, 5, 16, 3, 0),
    gsSP2Triangles(7, 17, 6, 0, 8, 12, 1, 0),
    gsSP2Triangles(11, 14, 9, 0, 13, 18, 12, 0),
    gsSP2Triangles(4, 3, 10, 0, 15, 19, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 20, 27, 0, 28, 22, 21, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_gi_boomerangVtx_000000[143], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 10, 15, 16, 0),
    gsSP2Triangles(17, 2, 1, 0, 4, 8, 7, 0),
    gsSP2Triangles(2, 18, 0, 0, 5, 12, 3, 0),
    gsSP1Triangle(8, 19, 6, 0),
    gsSPEndDisplayList(),
};

