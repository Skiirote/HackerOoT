#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_nuts.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

u64 object_gi_nutsTex_000000[] = {
#include "assets/objects/object_gi_nuts/object_gi_nutsTex_000000.i8.inc.c"
};

Vtx object_gi_nutsVtx_000400[] = {
#include "assets/objects/object_gi_nuts/object_gi_nutsVtx_000400.vtx.inc"
};

Gfx gGiNutDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1, COMBINED, 0, SHADE, 0, 1, 1,
                       PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0, 160, 100, 40, 255),
    gsDPSetEnvColor(40, 10, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_gi_nutsTex_000000, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(object_gi_nutsVtx_000400, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 11, 0, 12, 13, 1, 0),
    gsSP2Triangles(14, 12, 0, 0, 15, 14, 3, 0),
    gsSP2Triangles(16, 15, 5, 0, 17, 18, 7, 0),
    gsSP2Triangles(19, 13, 12, 0, 20, 12, 14, 0),
    gsSP2Triangles(21, 14, 15, 0, 22, 18, 17, 0),
    gsSP2Triangles(17, 10, 23, 0, 23, 24, 25, 0),
    gsSP2Triangles(25, 26, 27, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 30, 13, 0, 24, 23, 10, 0),
    gsSP2Triangles(26, 25, 24, 0, 28, 27, 26, 0),
    gsSP2Triangles(30, 29, 28, 0, 1, 13, 30, 0),
    gsSPVertex(&object_gi_nutsVtx_000400[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 5, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 11, 12, 0),
    gsSP2Triangles(11, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 2, 20, 0),
    gsSP2Triangles(10, 12, 21, 0, 12, 14, 22, 0),
    gsSP2Triangles(14, 16, 23, 0, 24, 19, 25, 0),
    gsSP2Triangles(19, 20, 26, 0, 20, 2, 1, 0),
    gsSP2Triangles(1, 0, 4, 0, 4, 3, 6, 0),
    gsSP2Triangles(6, 5, 8, 0, 8, 7, 10, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 30, 0),
    gsSPVertex(&object_gi_nutsVtx_000400[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 17, 0, 18, 16, 19, 0),
    gsSP2Triangles(20, 18, 21, 0, 22, 20, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 24, 0),
    gsSP1Triangle(29, 30, 27, 0),
    gsSPVertex(&object_gi_nutsVtx_000400[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 13, 0),
    gsSP2Triangles(14, 12, 15, 0, 16, 4, 3, 0),
    gsSP2Triangles(17, 16, 5, 0, 18, 19, 10, 0),
    gsSP2Triangles(20, 18, 9, 0, 21, 20, 12, 0),
    gsSP2Triangles(21, 14, 22, 0, 22, 23, 24, 0),
    gsSP2Triangles(24, 25, 26, 0, 26, 2, 1, 0),
    gsSP2Triangles(1, 0, 4, 0, 14, 27, 23, 0),
    gsSP2Triangles(23, 28, 25, 0, 25, 29, 2, 0),
    gsSP2Triangles(2, 30, 0, 0, 0, 31, 3, 0),
    gsSP2Triangles(28, 23, 27, 0, 29, 25, 28, 0),
    gsSP2Triangles(30, 2, 29, 0, 31, 0, 30, 0),
    gsSP1Triangle(6, 3, 31, 0),
    gsSPVertex(&object_gi_nutsVtx_000400[125], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 8, 9, 7, 0),
    gsSP2Triangles(2, 1, 10, 0, 11, 5, 12, 0),
    gsSP2Triangles(5, 4, 13, 0, 4, 7, 14, 0),
    gsSP2Triangles(7, 9, 15, 0, 16, 10, 17, 0),
    gsSP2Triangles(10, 18, 19, 0, 12, 13, 20, 0),
    gsSP2Triangles(13, 14, 21, 0, 14, 15, 22, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, PRIM_LOD_FRAC, 1, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, 1, 1, PRIM_LOD_FRAC, 1),
    gsDPSetPrimColor(0, 0x80, 255, 255, 170, 200),
    gsDPSetEnvColor(200, 150, 0, 255),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, 15, G_TX_NOMIRROR | G_TX_WRAP,
                5, 15),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsSPSetGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_gi_nutsVtx_000400[148], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_nutsVtx_000400[151], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 13, 15, 0, 16, 15, 1, 0),
    gsSP2Triangles(13, 14, 12, 0, 1, 0, 16, 0),
    gsSP2Triangles(8, 17, 7, 0, 11, 12, 9, 0),
    gsSP2Triangles(15, 16, 14, 0, 2, 3, 0, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSPEndDisplayList(),
};

