#include "ultra64.h"
#include "global.h"

u64 object_st_DL_002198_tex_00000320_i4_png_002_i4[] = {
	0x0000000000000000, 0x0000012333100000, 0x888888abcb988888, 0xeeeeeeeeeeeeeeee, 0xddddddddddeeeedd, 0x568acdb988acca87, 0x0013665211344310, 0x0000000000000000, 
	
};

Vtx object_st_DL_002198_object_st_DL_002198_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-3, -34, -174}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-3, -34, 32}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-3, 1069, 32}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-3, 1069, -174}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {257, -34, -174}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {257, -34, 32}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {257, 1069, 32}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {257, 1069, -174}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx object_st_DL_002198_object_st_DL_002198_mesh_layer_Opaque_vtx_0[12] = {
	{{ {183, 827, -96}, 0, {171, 303}, {248, 34, 122, 255} }},
	{{ {36, 1069, -174}, 0, {402, -63}, {248, 34, 122, 255} }},
	{{ {21, 989, -153}, 0, {171, 0}, {248, 34, 122, 255} }},
	{{ {-3, -34, -38}, 0, {256, 266}, {217, 5, 121, 255} }},
	{{ {217, 177, 24}, 0, {256, 0}, {217, 5, 121, 255} }},
	{{ {176, 216, 9}, 0, {-44, 5}, {217, 5, 121, 255} }},
	{{ {173, 165, 22}, 0, {256, 266}, {1, 6, 127, 255} }},
	{{ {257, 465, 5}, 0, {256, 0}, {1, 6, 127, 255} }},
	{{ {199, 475, 5}, 0, {106, 5}, {1, 6, 127, 255} }},
	{{ {235, 431, 32}, 0, {256, 284}, {5, 44, 119, 255} }},
	{{ {196, 852, -120}, 0, {256, 28}, {5, 44, 119, 255} }},
	{{ {146, 848, -116}, 0, {-2, 29}, {5, 44, 119, 255} }},
};

Gfx object_st_DL_002198_object_st_DL_002198_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(object_st_DL_002198_object_st_DL_002198_mesh_layer_Opaque_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSPEndDisplayList(),
};

Gfx mat_object_st_DL_002198_f3dlite_material_014_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 0, 5, 255),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_st_DL_002198_tex_00000320_i4_png_002_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 28),
	gsSPEndDisplayList(),
};

Gfx object_st_DL_002198[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(object_st_DL_002198_object_st_DL_002198_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_object_st_DL_002198_f3dlite_material_014_layerOpaque),
	gsSPDisplayList(object_st_DL_002198_object_st_DL_002198_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

