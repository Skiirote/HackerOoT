#include "ultra64.h"
#include "global.h"

u64 object_st_DL_002100_tex_00000320_i4_png_002_i4[] = {
	0x0000000000000000, 0x0000012333100000, 0x888888abcb988888, 0xeeeeeeeeeeeeeeee, 0xddddddddddeeeedd, 0x568acdb988acca87, 0x0013665211344310, 0x0000000000000000, 
	
};

Vtx object_st_DL_002100_object_st_DL_002100_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-8, 13, -120}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-8, 13, 53}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-8, 1307, 53}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-8, 1307, -120}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {543, 13, -120}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {543, 13, 53}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {543, 1307, 53}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {543, 1307, -120}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx object_st_DL_002100_object_st_DL_002100_mesh_layer_Opaque_vtx_0[12] = {
	{{ {-8, 13, -43}, 0, {341, 266}, {219, 3, 121, 255} }},
	{{ {274, 112, 42}, 0, {341, 0}, {219, 3, 121, 255} }},
	{{ {252, 166, 33}, 0, {142, 5}, {219, 3, 121, 255} }},
	{{ {213, 97, 50}, 0, {335, 246}, {1, 3, 127, 255} }},
	{{ {543, 625, 36}, 0, {183, 18}, {1, 3, 127, 255} }},
	{{ {473, 656, 36}, 0, {-73, 22}, {1, 3, 127, 255} }},
	{{ {486, 580, 53}, 0, {256, 247}, {255, 35, 122, 255} }},
	{{ {523, 1177, -120}, 0, {256, 48}, {7, 15, 126, 255} }},
	{{ {461, 1150, -113}, 0, {101, 58}, {7, 15, 126, 255} }},
	{{ {487, 1307, -110}, 0, {148, 10}, {17, 251, 126, 255} }},
	{{ {461, 1150, -113}, 0, {101, 58}, {7, 15, 126, 255} }},
	{{ {523, 1177, -120}, 0, {256, 48}, {7, 15, 126, 255} }},
};

Gfx object_st_DL_002100_object_st_DL_002100_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(object_st_DL_002100_object_st_DL_002100_mesh_layer_Opaque_vtx_0 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSPEndDisplayList(),
};

Gfx mat_object_st_DL_002100_f3dlite_material_014_layerOpaque[] = {
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 0, 5, 255),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_st_DL_002100_tex_00000320_i4_png_002_i4),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 31, 2048),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 3, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 28),
	gsSPEndDisplayList(),
};

Gfx object_st_DL_002100[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(object_st_DL_002100_object_st_DL_002100_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_object_st_DL_002100_f3dlite_material_014_layerOpaque),
	gsSPDisplayList(object_st_DL_002100_object_st_DL_002100_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

