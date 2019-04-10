#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#pragma comment(lib, "CoalaMOD.lib")

#define SWAP(s, e){int t = s; s = e ; e = t;}


BlockID my_air = createBlock(BLOCK_AIR);
BlockID my_stone = createBlock(BLOCK_STONE);
BlockID my_granite = createBlock(BLOCK_GRANITE);
BlockID my_polished_granite = createBlock(BLOCK_POLISHED_GRANITE);
BlockID my_diorite = createBlock(BLOCK_DIORITE);
BlockID my_polished_diorite = createBlock(BLOCK_POLISHED_DIORITE);
BlockID my_andesite = createBlock(BLOCK_ANDESITE);
BlockID my_polished_andesite = createBlock(BLOCK_POLISHED_ANDESITE);
BlockID my_grass = createBlock(BLOCK_GRASS);
BlockID my_dirt = createBlock(BLOCK_DIRT);
BlockID my_coarse_dirt = createBlock(BLOCK_COARSE_DIRT);
BlockID my_podzol = createBlock(BLOCK_PODZOL);
BlockID my_cobblestone = createBlock(BLOCK_COBBLESTONE);
BlockID my_bedrock = createBlock(BLOCK_BEDROCK);
BlockID my_sand = createBlock(BLOCK_SAND);
BlockID my_red_sand = createBlock(BLOCK_RED_SAND);
BlockID my_gravel = createBlock(BLOCK_GRAVEL);
BlockID my_glass = createBlock(BLOCK_GLASS);
BlockID my_lapis_lazuli = createBlock(BLOCK_LAPIS_LAZULI);
BlockID my_sand_stone = createBlock(BLOCK_SAND_STONE);
BlockID my_chiseled_sand_stone = createBlock(BLOCK_CHISELED_SAND_STONE);
BlockID my_smooth_sand_stone = createBlock(BLOCK_SMOOTH_SAND_STONE);
BlockID my_gold = createBlock(BLOCK_GOLD);
BlockID my_iron = createBlock(BLOCK_IRON);
BlockID my_tnt = createBlock(BLOCK_TNT);
BlockID my_mossy_cobblestone = createBlock(BLOCK_MOSSY_COBBLESTONE);
BlockID my_obsidian = createBlock(BLOCK_OBSIDIAN);
BlockID my_diamond = createBlock(BLOCK_DIAMOND);
BlockID my_clay = createBlock(BLOCK_CLAY);
BlockID my_netherrack = createBlock(BLOCK_NETHERRACK);
BlockID my_soul_sand = createBlock(BLOCK_SOUL_SAND);
BlockID my_glowstone = createBlock(BLOCK_GLOWSTONE);
BlockID my_stained_glass = createBlock(BLOCK_STAINED_GLASS);
BlockID my_melon = createBlock(BLOCK_MELON);
BlockID my_mycelium = createBlock(BLOCK_MYCELIUM);
BlockID my_end_stone = createBlock(BLOCK_END_STONE);
BlockID my_emerald = createBlock(BLOCK_EMERALD);
BlockID my_nether_quartz = createBlock(BLOCK_NETHER_QUARTZ);
BlockID my_slime = createBlock(BLOCK_SLIME);
BlockID my_prismarine = createBlock(BLOCK_PRISMARINE);
BlockID my_hey_bale = createBlock(BLOCK_HAY_BALE);
BlockID my_coal = createBlock(BLOCK_COAL);
BlockID my_red_sandstone = createBlock(BLOCK_RED_SANDSTONE);
BlockID my_chiseled_red_santstone = createBlock(BLOCK_CHISELED_RED_SANDSTONE);
BlockID my_smooth_red_sandstone = createBlock(BLOCK_SMOOTH_RED_SANDSTONE);
BlockID my_purpur = createBlock(BLOCK_PURPUR);
BlockID my_purpur_pillar = createBlock(BLOCK_PURPUR_PILLAR);
BlockID my_grass_path = createBlock(BLOCK_GRASS_PATH);
BlockID my_magma = createBlock(BLOCK_MAGMA);
BlockID my_nether_wart = createBlock(BLOCK_NETHER_WART);
BlockID my_bone = createBlock(BLOCK_BONE);


BlockID c[100] = {
my_air,						//0
my_stone,					//1
my_granite,					//2
my_polished_granite,		//3
my_diorite,					//4
my_polished_diorite,		//5
my_andesite,				//6
my_polished_andesite,		//7
my_grass,					//8
my_dirt,					//9
my_coarse_dirt,				//10
my_podzol,					//11
my_cobblestone,				//12
my_bedrock,					//13
my_sand,					//14
my_red_sand,				//15
my_gravel,					//16
my_glass,					//17
my_lapis_lazuli,			//18
my_sand_stone,				//19
my_chiseled_sand_stone,		//20
my_smooth_sand_stone,		//21
my_gold,					//22
my_iron,					//23
my_tnt,						//24
my_mossy_cobblestone,		//25
my_obsidian,				//26
my_diamond,					//27
my_clay,					//28
my_netherrack,				//29
my_soul_sand,				//30
my_glowstone,				//31
my_stained_glass,			//32
my_melon,					//33
my_mycelium,				//34
my_end_stone,				//35
my_emerald,					//36
my_nether_quartz,			//37
my_slime,					//38
my_prismarine,				//39
my_hey_bale,				//40
my_coal,					//41
my_red_sandstone,			//42
my_chiseled_red_santstone,	//43
my_smooth_red_sandstone,	//44
my_purpur,					//45
my_purpur_pillar,			//46
my_grass_path,				//47
my_magma,					//48
my_nether_wart,				//49
my_bone,					//50
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
int arr[100][100][100] = { {{1,51,51,51,26},{2,51,51,51,27},{3,51,51,51,28},{4,51,51,51,29},{5,51,51,51,30}},
						   {{6,51,51,51,31},{7,51,51,51,32},{8,51,51,51,33},{9,51,51,51,34},{10,51,51,51,35}},
						   {{11,51,51,51,36},{12,51,51,51,37},{13,51,51,51,38},{14,51,51,51,39},{15,51,51,51,40}},
						   {{16,51,51,51,41},{17,51,51,51,42},{18,51,51,51,43},{19,51,51,51,44},{20,51,51,51,45}},
						   {{21,51,51,51,46},{22,51,51,51,47},{23,51,51,51,48},{24,51,51,51,49},{25,51,51,51,50}},
};
*/

int arr[100][100][100] = { { {1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1}, },
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


void room(int sx, int sy, int sz, int ex, int ey, int ez) {
	int tmpx = sx, tmpy = sy, tmpz = sz;
	for (int q = 0; q < 10; q++) {
		for (int t = 0; t < (ey - sy) / 10; t++) {
			tmpx = sx;
			for (int i = 0; i < 10; i++) {
				for (int l = 0; l < (ex - sx) / 10; l++) {
					tmpz = sz;
					for (int j = 0; j < 10; j++) {
						for (int k = 0; k < (ez - sz) / 10; k++) {
							printf("%2d ", arr[i][q][j]);
							locateBlock(c[arr[i][q][j]], tmpx, tmpy, tmpz);
							++tmpz;
						}
					}
					++tmpx;
					printf("*****\n");
				}
			}
			++tmpy;
			printf("***\n");
		}
	}
}


int main() {
	
	int sx, sy, sz;
	int ex, ey, ez;
	
	scanf("%d %d %d", &sx, &sy, &sz);
	scanf("%d %d %d", &ex, &ey, &ez);

	if (sx > ex) SWAP(sx, ex);
	if (sy > ey) SWAP(sy, ey);
	if (sz > ez) SWAP(sz, ez);

	room(sx, sy, sz, ex, ey, ez);

}

