#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_pachinko.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx object_gi_pachinkoVtx_000000[] = {
#include "assets/objects/object_gi_pachinko/object_gi_pachinkoVtx_000000.vtx.inc"
};

/*Gfx gGiSlingshotDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, COMBINED, 0, SHADE, 0, 1, 1,
                       PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 200, 0, 0, 255),
    gsDPSetEnvColor(50, 0, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0BB8, 0x0BB8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_pachinkoVtx_000000, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_pachinkoVtx_000000[3], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 1, 0, 5, 0),
    gsSP2Triangles(3, 1, 6, 0, 4, 3, 7, 0),
    gsSP2Triangles(0, 8, 9, 0, 5, 6, 1, 0),
    gsSP2Triangles(6, 7, 3, 0, 7, 10, 4, 0),
    gsSP2Triangles(9, 5, 0, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 11, 15, 14, 0),
    gsSP2Triangles(13, 15, 11, 0, 16, 12, 14, 0),
    gsSP2Triangles(17, 14, 15, 0, 18, 15, 13, 0),
    gsSP2Triangles(19, 20, 12, 0, 14, 17, 16, 0),
    gsSP2Triangles(15, 18, 17, 0, 13, 21, 18, 0),
    gsSP1Triangle(12, 16, 19, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 200, 140, 80, 255),
    gsDPSetEnvColor(120, 80, 30, 255),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_pachinkoVtx_000000[25], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(10, 9, 14, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 15, 7, 0, 11, 12, 9, 0),
    gsSP2Triangles(13, 16, 12, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 17, 26, 0, 27, 14, 28, 0),
    gsSP2Triangles(19, 26, 17, 0, 22, 29, 20, 0),
    gsSP2Triangles(24, 22, 21, 0, 26, 24, 25, 0),
    gsSP2Triangles(28, 30, 27, 0, 14, 27, 10, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 100, 60, 0, 255),
    gsDPSetEnvColor(40, 20, 0, 255),
    gsSPVertex(&object_gi_pachinkoVtx_000000[56], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 2, 6, 0),
    gsSP2Triangles(8, 5, 9, 0, 5, 3, 9, 0),
    gsSP2Triangles(0, 9, 3, 0, 8, 9, 0, 0),
    gsSP2Triangles(2, 8, 0, 0, 1, 0, 3, 0),
    gsSP2Triangles(7, 10, 5, 0, 6, 5, 8, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(150, 150, 150, 255),
    gsSPVertex(&object_gi_pachinkoVtx_000000[67], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 9, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 13, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 20, 0, 21, 0),
    gsSP2Triangles(22, 3, 6, 0, 23, 6, 8, 0),
    gsSP2Triangles(24, 8, 10, 0, 25, 10, 12, 0),
    gsSP2Triangles(26, 12, 14, 0, 27, 14, 16, 0),
    gsSP2Triangles(28, 16, 18, 0, 29, 18, 30, 0),
    gsSP2Triangles(1, 20, 31, 0, 4, 22, 23, 0),
    gsSP2Triangles(5, 23, 24, 0, 7, 24, 25, 0),
    gsSP2Triangles(9, 25, 26, 0, 11, 26, 27, 0),
    gsSP2Triangles(13, 27, 28, 0, 15, 28, 29, 0),
    gsSPVertex(&object_gi_pachinkoVtx_000000[99], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(11, 12, 10, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 16, 14, 0, 17, 18, 16, 0),
    gsSP2Triangles(0, 19, 18, 0, 20, 21, 19, 0),
    gsSP2Triangles(4, 22, 23, 0, 7, 24, 25, 0),
    gsSP2Triangles(10, 26, 24, 0, 12, 27, 26, 0),
    gsSP2Triangles(14, 28, 27, 0, 16, 29, 28, 0),
    gsSP2Triangles(18, 30, 29, 0, 19, 1, 30, 0),
    gsSP2Triangles(21, 2, 1, 0, 22, 3, 31, 0),
    gsSPVertex(&object_gi_pachinkoVtx_000000[131], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 12, 10, 0),
    gsSP2Triangles(13, 14, 12, 0, 15, 16, 14, 0),
    gsSPEndDisplayList(),
};*/

#include "gGiSlingshotDL.h"

