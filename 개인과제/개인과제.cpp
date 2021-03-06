﻿#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#pragma comment(lib, "CoalaMOD.lib")

#define SWAP(s, e){int t = s; s = e ; e = t;}

BlockID my_air = createBlock(BLOCK_AIR);										//0
BlockID my_stone = createBlock(BLOCK_STONE);									//1
BlockID my_granite = createBlock(BLOCK_GRANITE);								//2
BlockID my_polished_granite = createBlock(BLOCK_POLISHED_GRANITE);				//3
BlockID my_diorite = createBlock(BLOCK_DIORITE);								//4
BlockID my_polished_diorite = createBlock(BLOCK_POLISHED_DIORITE);				//5
BlockID my_andesite = createBlock(BLOCK_ANDESITE);								//6
BlockID my_polished_andesite = createBlock(BLOCK_POLISHED_ANDESITE);			//7
BlockID my_grass = createBlock(BLOCK_GRASS);									//8
BlockID my_dirt = createBlock(BLOCK_DIRT);										//9
BlockID my_coarse_dirt = createBlock(BLOCK_COARSE_DIRT);						//10
BlockID my_podzol = createBlock(BLOCK_PODZOL);									//11
BlockID my_cobblestone = createBlock(BLOCK_COBBLESTONE);						//12
BlockID my_bedrock = createBlock(BLOCK_BEDROCK);								//13
BlockID my_sand = createBlock(BLOCK_SAND);										//14
BlockID my_red_sand = createBlock(BLOCK_RED_SAND);								//15
BlockID my_gravel = createBlock(BLOCK_GRAVEL);									//16
BlockID my_glass = createBlock(BLOCK_GLASS);									//17
BlockID my_lapis_lazuli = createBlock(BLOCK_LAPIS_LAZULI);						//18
BlockID my_sand_stone = createBlock(BLOCK_SAND_STONE);							//19
BlockID my_chiseled_sand_stone = createBlock(BLOCK_CHISELED_SAND_STONE);		//20
BlockID my_smooth_sand_stone = createBlock(BLOCK_SMOOTH_SAND_STONE);			//21
BlockID my_gold = createBlock(BLOCK_GOLD);										//22
BlockID my_iron = createBlock(BLOCK_IRON);										//23
BlockID my_tnt = createBlock(BLOCK_TNT);										//24
BlockID my_mossy_cobblestone = createBlock(BLOCK_MOSSY_COBBLESTONE);			//25
BlockID my_obsidian = createBlock(BLOCK_OBSIDIAN);								//26
BlockID my_diamond = createBlock(BLOCK_DIAMOND);								//27
BlockID my_clay = createBlock(BLOCK_CLAY);										//28
BlockID my_netherrack = createBlock(BLOCK_NETHERRACK);							//29
BlockID my_soul_sand = createBlock(BLOCK_SOUL_SAND);							//30
BlockID my_glowstone = createBlock(BLOCK_GLOWSTONE);							//31
BlockID my_stained_glass = createBlock(BLOCK_STAINED_GLASS);					//32
BlockID my_melon = createBlock(BLOCK_MELON);									//33
BlockID my_mycelium = createBlock(BLOCK_MYCELIUM);								//34
BlockID my_end_stone = createBlock(BLOCK_END_STONE);							//35
BlockID my_emerald = createBlock(BLOCK_EMERALD);								//36
BlockID my_nether_quartz = createBlock(BLOCK_NETHER_QUARTZ);					//37
BlockID my_slime = createBlock(BLOCK_SLIME);									//38
BlockID my_prismarine = createBlock(BLOCK_PRISMARINE);							//39
BlockID my_hey_bale = createBlock(BLOCK_HAY_BALE);								//40
BlockID my_coal = createBlock(BLOCK_COAL);										//41
BlockID my_red_sandstone = createBlock(BLOCK_RED_SANDSTONE);					//42
BlockID my_chiseled_red_santstone = createBlock(BLOCK_CHISELED_RED_SANDSTONE);	//43
BlockID my_smooth_red_sandstone = createBlock(BLOCK_SMOOTH_RED_SANDSTONE);		//44
BlockID my_purpur = createBlock(BLOCK_PURPUR);									//45
BlockID my_purpur_pillar = createBlock(BLOCK_PURPUR_PILLAR);					//46
BlockID my_grass_path = createBlock(BLOCK_GRASS_PATH);							//47
BlockID my_magma = createBlock(BLOCK_MAGMA);									//48
BlockID my_nether_wart = createBlock(BLOCK_NETHER_WART);						//49
BlockID my_bone = createBlock(BLOCK_BONE);										//50

CarpetID my_carpet_white = createCarpet(COLOR_WHITE);				//0
CarpetID my_carpet_orange = createCarpet(COLOR_ORANGE);				//1
CarpetID my_carpet_magenta = createCarpet(COLOR_MAGENTA);			//2
CarpetID my_carpet_light_blue = createCarpet(COLOR_LIGHT_BLUE);		//3
CarpetID my_carpet_yellow = createCarpet(COLOR_YELLOW);				//4
CarpetID my_carpet_lime = createCarpet(COLOR_LIME);					//5
CarpetID my_carpet_pink = createCarpet(COLOR_PINK);					//6
CarpetID my_carpet_gray = createCarpet(COLOR_GRAY);					//7
CarpetID my_carpet_light_gray = createCarpet(COLOR_LIGHT_GRAY);		//8
CarpetID my_carpet_cyan = createCarpet(COLOR_CYAN);					//9
CarpetID my_carpet_purple = createCarpet(COLOR_PURPLE);				//10
CarpetID my_carpet_blue = createCarpet(COLOR_BLUE);					//11
CarpetID my_carpet_brown = createCarpet(COLOR_BROWN);				//12
CarpetID my_carpet_green = createCarpet(COLOR_GREEN);				//13
CarpetID my_carpet_red = createCarpet(COLOR_RED);					//14
CarpetID my_carpet_black = createCarpet(COLOR_BLACK);				//15

WoolID my_wool_white = createWool(COLOR_WHITE);				//0
WoolID my_wool_orange = createWool(COLOR_ORANGE);			//1
WoolID my_wool_magenta = createWool(COLOR_MAGENTA);			//2
WoolID my_wool_light_blue = createWool(COLOR_LIGHT_BLUE);	//3
WoolID my_wool_yellow = createWool(COLOR_YELLOW);			//4
WoolID my_wool_lime = createWool(COLOR_LIME);				//5
WoolID my_wool_pink = createWool(COLOR_PINK);				//6
WoolID my_wool_gray = createWool(COLOR_GRAY);				//7
WoolID my_wool_light_gray = createWool(COLOR_LIGHT_GRAY);	//8
WoolID my_wool_cyan = createWool(COLOR_CYAN);				//9
WoolID my_wool_purple = createWool(COLOR_PURPLE);			//10
WoolID my_wool_blue = createWool(COLOR_BLUE);				//11
WoolID my_wool_brown = createWool(COLOR_BROWN);				//12
WoolID my_wool_green = createWool(COLOR_GREEN);				//13
WoolID my_wool_red = createWool(COLOR_RED);					//14
WoolID my_wool_black = createWool(COLOR_BLACK);				//15

WoodID my_wood_oak = createWood(WOOD_OAK, STRIP_UP_DOWN);			//0
WoodID my_wood_spruce = createWood(WOOD_SPRUCE, STRIP_UP_DOWN);		//1
WoodID my_wood_birch = createWood(WOOD_BIRCH, STRIP_UP_DOWN);		//2
WoodID my_wood_jungle = createWood(WOOD_JUNGLE, STRIP_UP_DOWN);		//3
WoodID my_wood_acacia = createWood(WOOD_ACACIA, STRIP_UP_DOWN);		//4
WoodID my_wood_dark_oak = createWood(WOOD_DARK_OAK, STRIP_UP_DOWN);	//5

BlockID b[60] = {
my_air,						//0		0
my_stone,					//1		1
my_granite,					//2		2
my_polished_granite,		//3		3
my_diorite,					//4		4
my_polished_diorite,		//5		5
my_andesite,				//6		6
my_polished_andesite,		//7		7
my_grass,					//8		8
my_dirt,					//9		9
my_coarse_dirt,				//10	10
my_podzol,					//11	11
my_cobblestone,				//12	12
my_bedrock,					//13	13
my_sand,					//14	14
my_red_sand,				//15	15
my_gravel,					//16	16
my_glass,					//17	17
my_lapis_lazuli,			//18	18
my_sand_stone,				//19	19
my_chiseled_sand_stone,		//20	20
my_smooth_sand_stone,		//21	21
my_gold,					//22	22
my_iron,					//23	23
my_tnt,						//24	24
my_mossy_cobblestone,		//25	25
my_obsidian,				//26	26
my_diamond,					//27	27
my_clay,					//28	28
my_netherrack,				//29	29
my_soul_sand,				//30	30
my_glowstone,				//31	31
my_stained_glass,			//32	32
my_melon,					//33	33
my_mycelium,				//34	34
my_end_stone,				//35	35
my_emerald,					//36	36
my_nether_quartz,			//37	37
my_slime,					//38	38
my_prismarine,				//39	39
my_hey_bale,				//40	40
my_coal,					//41	41
my_red_sandstone,			//42	42
my_chiseled_red_santstone,	//43	43
my_smooth_red_sandstone,	//44	44
my_purpur,					//45	45
my_purpur_pillar,			//46	46
my_grass_path,				//47	47
my_magma,					//48	48
my_nether_wart,				//49	49
my_bone,					//50	50
};

CarpetID c[20] = {
my_carpet_white,		//0		51
my_carpet_orange,		//1		52
my_carpet_magenta,		//2		53
my_carpet_light_blue,	//3		54
my_carpet_yellow,		//4		55
my_carpet_lime,			//5		56
my_carpet_pink,			//6		57
my_carpet_gray,			//7		58
my_carpet_light_gray,	//8		59
my_carpet_cyan,			//9		60
my_carpet_purple,		//10	61
my_carpet_blue,			//11	62
my_carpet_brown,		//12	63
my_carpet_green,		//13	64
my_carpet_red,			//14	65
my_carpet_black,		//15	66
};

WoolID wl[20] = {
my_wool_white,		//0		67
my_wool_orange,		//1		68
my_wool_magenta,	//2		69
my_wool_light_blue,	//3		70
my_wool_yellow,		//4		71
my_wool_lime,		//5		72
my_wool_pink,		//6		73
my_wool_gray,		//7		74
my_wool_light_gray,	//8		75
my_wool_cyan,		//9		76
my_wool_purple,		//10	77
my_wool_blue,		//11	78
my_wool_brown,		//12	79
my_wool_green,		//13	80
my_wool_red,		//14	81
my_wool_black,		//15	82
};

WoodID wd[10] = {
my_wood_oak,		//0		83
my_wood_spruce,		//1		84
my_wood_birch,		//2		85
my_wood_jungle,		//3		86
my_wood_acacia,		//4		87
my_wood_dark_oak,	//5		88
};

/*
int arr[100][100][100] = { {{1,26},{2,27},{3,28},{4,29},{5,30}},
						   {{6,31},{7,32},{8,33},{9,34},{10,35}},
						   {{11,36},{12,37},{13,38},{14,39},{15,40}},
						   {{16,41},{17,42},{18,43},{19,44},{20,45}},
						   {{21,46},{22,47},{23,48},{24,49},{25,50}},
};
*/

/*
int arr[100][100][100] = { {{1,0,0,0,26},{2,0,0,0,27},{3,0,0,0,28},{4,0,0,0,29},{5,0,0,0,30}},
						   {{6,0,0,0,31},{7,0,0,0,32},{8,0,0,0,33},{9,0,0,0,34},{10,0,0,0,35}},
						   {{11,0,0,0,36},{12,0,0,0,37},{13,0,0,0,38},{14,0,0,0,39},{15,0,0,0,40}},
						   {{16,0,0,0,41},{17,0,0,0,42},{18,0,0,0,43},{19,0,0,0,44},{20,0,0,0,45}},
						   {{21,0,0,0,46},{22,0,0,0,47},{23,0,0,0,48},{24,0,0,0,49},{25,0,0,0,50}},
};
*/

/*
int arr[100][100][100] = {
{ {1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,51,0,52,0,53,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,69,0,70,0,71,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,87,0,88,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,22,0,23,0,24,0,25,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,45,0,46,0,47,0,48,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,54,0,55,0,56,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,72,0,73,0,74,0,1},{1,0,0,0,0,0,0,0,0,1},{1,2,0,3,0,4,0,5,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,29,0,28,0,27,0,26,1},{1,0,0,0,0,0,0,0,0,1},{1,49,0,50,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,57,0,58,0,59,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,75,0,76,0,77,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,6,0,7,0,8,0,9,1},{1,0,0,0,0,0,0,0,0,1},{1,30,0,31,0,32,0,33,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,60,0,61,0,62,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,78,0,79,0,80,0,1},{1,0,0,0,0,0,0,0,0,1},{1,10,0,11,0,12,0,13,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,34,0,35,0,36,0,37,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,63,0,64,0,65,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,81,0,82,0,83,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,14,0,15,0,16,0,17,1},{1,0,0,0,0,0,0,0,0,1},{1,38,0,39,0,40,0,41,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,66,0,67,0,68,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,84,0,85,0,86,0,1},{1,0,0,0,0,0,0,0,0,1},{1,18,0,19,0,20,0,21,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,41,0,42,0,43,0,44,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1}, },
};
*/

/*
int arr[100][100][100] = { 
{ {1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1},{1,0,0,0,0,0,0,0,0,1}, },
{ {1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1}, },
};
*/

int arr[100][100][100] = {			//각 사각형마다 y축을 기준으로 한 층을 나타냄.
{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{18,18,18,18,18,18,18,18,18,18,18,18},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{ {19,31,19,19,19,19,19,19,19,19,31,19},{ 0,31,32,81,81,81,81,81,81,32,31, 0},{ 0,31,32,81,81,81,81,81,81,32,31, 0},{ 0,31,32,81,81,81,81,81,81,32,31, 0},{ 0,31,32,81,81,81,81,81,81,32,31, 0},{ 0,31,32,32,81,81,81,81,32,32,31, 0},{ 0,31,32,32,32,81,81,32,32,32,31, 0},{18,31,31,31,31,31,31,31,31,31,31,18},{ 0,18,18,18,18,18,18,18,18,18,18, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0,81,31,31,81, 0, 0,32, 0},{ 0,32, 0, 0, 0,32,32, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0,31,31, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,18,18,18,18,18,18,18,18, 0},{ 0, 0,18,18,18,18,18,18,18,18, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0,81,81,31,31,81,81, 0,32, 0},{ 0,32, 0,81,81,32,32,81,81, 0,32, 0},{ 0,32, 0,81,31, 0, 0,31,81, 0,32, 0},{ 0,32, 0,81,31, 0, 0,31,81, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,31,31,31,31,31,18, 0, 0},{ 0, 0, 0,18,18,18,18,18,18, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0,81,81,81,81, 0, 0,32, 0},{ 0,32, 0, 0,81,81,81,81, 0, 0,32, 0},{ 0,32, 0, 0,81,81,81,81, 0, 0,32, 0},{ 0,32, 0, 0,81, 0, 0,81, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,18,18,18,18, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{ {19,19,19,19,31,31,31,31,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,31,31,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,31,31,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,31,31, 0, 0,31,31, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,27,27,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,27,27,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,31,31, 0, 0,31,31, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,31,31,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,31,31,31,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,31,31, 0, 0,31,31, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,31,31,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,18,18,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,31,31,31,31,31,18, 0, 0},{ 0, 0, 0,18,18,18,18,18,18, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,18,18,18,18,18,18,18,18, 0},{ 0, 0,18,18,18,18,18,18,18,18, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{ {19,31,19,19,19,19,19,19,19,19,31,19},{ 0,31,32,31,81, 0, 0,81,31,32,31, 0},{ 0,31,32,31,81, 0, 0,81,31,32,31, 0},{ 0,31,32,31,81, 0, 0,81,31,32,31, 0},{ 0,31,32,31,31,81,81,31,31,32,31, 0},{ 0,31,32,32,31,31,31,31,32,32,31, 0},{ 0,31,32,32,32,32,32,32,32,32,31, 0},{18,31,31,31,31,31,31,31,31,31,31,18},{ 0,18,18,18,18,18,18,18,18,18,18, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0, 0, 0, 0,31, 0, 0,31, 0, 0, 0, 0},{ 0, 0, 0, 0,31, 0, 0,31, 0, 0, 0, 0},{ 0, 0, 0, 0,31, 0, 0,31, 0, 0, 0, 0},{ 0, 0, 0, 0, 0,31,31, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{18,18,18,18,18,18,18,18,18,18,18,18},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
};

//x=20,y=12,z=12

void room(int sx, int sy, int sz, int ex, int ey, int ez) {
	int tmpx = sx, tmpy = sy, tmpz = sz;
	for (int q = 0; q < 12; q++) {
		for (int t = 0; t < (ey - sy) / 12; t++) {
			tmpx = sx;
			for (int i = 0; i < 20; i++) {
				for (int l = 0; l < (ex - sx) / 20; l++) {
					tmpz = sz;
					for (int j = 0; j < 12; j++) {
						for (int k = 0; k < (ez - sz) / 12; k++) {
							//printf("%2d ", arr[i][q][j]);
							if (arr[i][q][j] < 51) locateBlock(b[arr[i][q][j]], tmpx, tmpy, tmpz);
							else if (arr[i][q][j] < 67) locateCarpet(c[arr[i][q][j] % 51], tmpx, tmpy, tmpz);
							else if (arr[i][q][j] < 83) locateWool(wl[arr[i][q][j] % 67], tmpx, tmpy, tmpz);
							else if (arr[i][q][j] < 89) locateWood(wd[arr[i][q][j] % 83], tmpx, tmpy, tmpz);
							++tmpz;
						}
					}
					++tmpx;
					//printf("*****\n");
				}
			}
			++tmpy;
			//printf("***\n");
		}
	}
}

int main() {
	int sx, sy, sz;
	int ex, ey, ez;
	
	printf("x축 20칸 이상, z축 12칸 이상, y축 12칸 이상의 공간을 설정해주세요.\n");

	scanf("%d %d %d", &sx, &sy, &sz);
	scanf("%d %d %d", &ex, &ey, &ez);

	if (sx > ex) SWAP(sx, ex);
	if (sy > ey) SWAP(sy, ey);
	if (sz > ez) SWAP(sz, ez);

	room(sx, sy, sz, ex, ey, ez);
}
