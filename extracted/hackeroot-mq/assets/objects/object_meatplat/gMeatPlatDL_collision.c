#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "assets/objects/object_meatplat/gMeatPlatDL_collision.h"

CollisionHeader gMeatPlatDL_collisionHeader = {
    { -1288, -2000, 0 },
    { 1288, 0, 2512 },
    ARRAY_COUNT(gMeatPlatDL_vertices), gMeatPlatDL_vertices,
    ARRAY_COUNT(gMeatPlatDL_polygons), gMeatPlatDL_polygons,
    gMeatPlatDL_polygonTypes,
    NULL,
    0, NULL
};

SurfaceType gMeatPlatDL_polygonTypes[1] = {
    { SURFACETYPE0(0, 0, 0x00, 0, 0x00, 0x00, 0, 0), SURFACETYPE1(0x00, 0x00, 0, 0, 0, 0, 0, 0) },
};

Vec3s gMeatPlatDL_vertices[10] = {
    {  -1288,  -2000,   1052 },
    {  -1288,      0,   1052 },
    {  -1000,      0,      0 },
    {  -1000,  -2000,      0 },
    {   1000,  -2000,      0 },
    {   1000,      0,      0 },
    {   1288,      0,   1468 },
    {   1288,  -2000,   1468 },
    {      0,  -2000,   2512 },
    {      0,      0,   2512 },
};

CollisionPoly gMeatPlatDL_polygons[11] = {
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(-0.9646050930023193), COLPOLY_SNORMAL(-1.5717677825932697e-08), COLPOLY_SNORMAL(-0.26369887590408325) }, 64571 },
    { 0, COLPOLY_VTX(0, COLPOLY_IGNORE_NONE), COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(3), { COLPOLY_SNORMAL(-0.9646050930023193), COLPOLY_SNORMAL(-1.1526643639570011e-08), COLPOLY_SNORMAL(-0.26369887590408325) }, 64571 },
    { 0, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.9813470840454102), COLPOLY_SNORMAL(-8.403257645284157e-09), COLPOLY_SNORMAL(-0.19224412739276886) }, 64555 },
    { 0, COLPOLY_VTX(4, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(7), { COLPOLY_SNORMAL(0.9813470840454102), COLPOLY_SNORMAL(-1.145864292340093e-08), COLPOLY_SNORMAL(-0.19224412739276886) }, 64555 },
    { 0, COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX(9, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(1), { COLPOLY_SNORMAL(-0.7500991821289062), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.6613253951072693) }, 63875 },
    { 0, COLPOLY_VTX(8, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(0), { COLPOLY_SNORMAL(-0.7500990629196167), COLPOLY_SNORMAL(3.941806525631364e-08), COLPOLY_SNORMAL(0.6613253951072693) }, 63875 },
    { 0, COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX(5, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(2), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-4.371138473402425e-08) }, 0 },
    { 0, COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX(1, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(9), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-4.371139183945161e-08) }, 0 },
    { 0, COLPOLY_VTX(2, COLPOLY_IGNORE_NONE), COLPOLY_VTX(9, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(6), { COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(1.0), COLPOLY_SNORMAL(-4.371138473402425e-08) }, 0 },
    { 0, COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX(6, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(9), { COLPOLY_SNORMAL(0.629976749420166), COLPOLY_SNORMAL(4.628979866083682e-08), COLPOLY_SNORMAL(0.7766139507293701) }, 63585 },
    { 0, COLPOLY_VTX(7, COLPOLY_IGNORE_NONE), COLPOLY_VTX(9, COLPOLY_IGNORE_NONE), COLPOLY_VTX_INDEX(8), { COLPOLY_SNORMAL(0.6299766898155212), COLPOLY_SNORMAL(0.0), COLPOLY_SNORMAL(0.7766139507293701) }, 63585 },
};

