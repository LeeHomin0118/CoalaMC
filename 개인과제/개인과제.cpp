#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>
#include <stdio.h>
#include <string.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <math.h>

#define SWAP(s, e){int t = s; s = e ; e = t;}

/*
BlockID my_stone = createBlock(BLOCK_NETHERRACK);
BlockID my_dirt = createBlock(BLOCK_LAPIS_LAZULI);
BlockID my_air = createBlock(BLOCK_AIR);
BlockID my_glass = createBlock(BLOCK_STAINED_GLASS);
BlockID my_glow = createBlock(BLOCK_GLOWSTONE);
*/

BlockID my_1 = createBlock(BLOCK_STONE);
BlockID my_2 = createBlock(BLOCK_GRANITE);
BlockID my_3 = createBlock(BLOCK_POLISHED_GRANITE);
BlockID my_4 = createBlock(BLOCK_DIORITE);
BlockID my_5 = createBlock(BLOCK_POLISHED_DIORITE);
BlockID my_6 = createBlock(BLOCK_ANDESITE);
BlockID my_7 = createBlock(BLOCK_POLISHED_ANDESITE);
BlockID my_8 = createBlock(BLOCK_GRASS);
BlockID my_9 = createBlock(BLOCK_DIRT);
BlockID my_10 = createBlock(BLOCK_COARSE_DIRT);
BlockID my_11 = createBlock(BLOCK_PODZOL);
BlockID my_12 = createBlock(BLOCK_COBBLESTONE);
BlockID my_13 = createBlock(BLOCK_BEDROCK);
BlockID my_14 = createBlock(BLOCK_SAND);
BlockID my_15 = createBlock(BLOCK_RED_SAND);
BlockID my_16 = createBlock(BLOCK_GRAVEL);
BlockID my_17 = createBlock(BLOCK_GLASS);
BlockID my_18 = createBlock(BLOCK_LAPIS_LAZULI);
BlockID my_19 = createBlock(BLOCK_SAND_STONE);
BlockID my_20 = createBlock(BLOCK_CHISELED_SAND_STONE);
BlockID my_21 = createBlock(BLOCK_SMOOTH_SAND_STONE);
BlockID my_22 = createBlock(BLOCK_GOLD);
BlockID my_23 = createBlock(BLOCK_IRON);
BlockID my_24 = createBlock(BLOCK_TNT);
BlockID my_25 = createBlock(BLOCK_MOSSY_COBBLESTONE);
BlockID my_26 = createBlock(BLOCK_OBSIDIAN);
BlockID my_27 = createBlock(BLOCK_DIAMOND);
BlockID my_28 = createBlock(BLOCK_CLAY);
BlockID my_29 = createBlock(BLOCK_NETHERRACK);
BlockID my_30 = createBlock(BLOCK_SOUL_SAND);
BlockID my_31 = createBlock(BLOCK_GLOWSTONE);
BlockID my_32 = createBlock(BLOCK_STAINED_GLASS);
BlockID my_33 = createBlock(BLOCK_MELON);
BlockID my_34 = createBlock(BLOCK_MYCELIUM);
BlockID my_35 = createBlock(BLOCK_END_STONE);
BlockID my_36 = createBlock(BLOCK_EMERALD);
BlockID my_37 = createBlock(BLOCK_NETHER_QUARTZ);
BlockID my_38 = createBlock(BLOCK_SLIME);
BlockID my_39 = createBlock(BLOCK_PRISMARINE);
BlockID my_40 = createBlock(BLOCK_HAY_BALE);
BlockID my_41 = createBlock(BLOCK_COAL);
BlockID my_42 = createBlock(BLOCK_RED_SANDSTONE);
BlockID my_43 = createBlock(BLOCK_CHISELED_RED_SANDSTONE);
BlockID my_44 = createBlock(BLOCK_SMOOTH_RED_SANDSTONE);
BlockID my_45 = createBlock(BLOCK_PURPUR);
BlockID my_46 = createBlock(BLOCK_PURPUR_PILLAR);
BlockID my_47 = createBlock(BLOCK_GRASS_PATH);
BlockID my_48 = createBlock(BLOCK_MAGMA);
BlockID my_49 = createBlock(BLOCK_NETHER_WART);
BlockID my_50 = createBlock(BLOCK_BONE);


int arr[100][100][100] = { {{1,26},{2,27},{3,28},{4,29},{5,30}},
						   {{6,31},{7,32},{8,33},{9,34},{10,35}},
						   {{11,36},{12,37},{13,38},{14,39},{15,40}},
						   {{16,41},{17,42},{18,43},{19,44},{20,45}},
						   {{21,46},{22,47},{23,48},{24,49},{25,50}},
};

char c[20] = { 'my_50' };

void room(int sx, int sy, int sz, int ex, int ey, int ez) {
	int tmpx = sx, tmpy = sy, tmpz = sz;
	for (int q = 0; q < 5; q++) {
		for (int t = 0; t < ey - sy; t++) {
			for (int i = 0; i < 5; i++) {
				for (int l = 0; l < ex - sx; l++) {
					for (int j = 0; j < 2; j++) {
						for (int k = 0; k < ez - sz; k++) {
							printf("%2d ", arr[i][q][j]);
							locateBlock(, tmpx+l, tmpy+t, tmpz+k);
						}
						//tmpz += 2;
					}
					printf("*****\n");
				}
				//tmpx += 5;
			}
			printf("***\n");
		}
		//tmpy += 5;
	}
}

void fill(BlockID block, int sx, int sy, int sz, int ex, int ey, int ez) {

}

int main() {
	//double pi = 3.14159265358979323846;
	/*
	BlockID my_stone = createBlock(BLOCK_NETHERRACK);
	BlockID my_dirt = createBlock(BLOCK_LAPIS_LAZULI);
	BlockID my_air = createBlock(BLOCK_AIR);
	BlockID my_glass = createBlock(BLOCK_STAINED_GLASS);
	BlockID my_glow = createBlock(BLOCK_GLOWSTONE);
	*/
	//int i, j, l, k;
	//int px, py, pz;
	int sx, sy, sz;
	int ex, ey, ez;
	/*
	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();
	double radian = dir * pi / 180.;
	int dx = -150 * sin(radian);
	int dz = 150 * cos(radian);
	px += dx;
	pz += dz;
	printf("%d %d %d", px, py, pz);
	*/
	scanf("%d %d %d", &sx, &sy, &sz);
	scanf("%d %d %d", &ex, &ey, &ez);
	if (sx > ex) SWAP(sx, ex);
	if (sy > ey) SWAP(sy, ey);
	if (sz > ez) SWAP(sz, ez);
	room(sx, sy, sz, ex, ey, ez);

}


/*
BlockID my_1 = createBlock(BLOCK_STONE);
BlockID my_2 = createBlock(BLOCK_GRANITE);
BlockID my_3 = createBlock(BLOCK_POLISHED_GRANITE);
BlockID my_4 = createBlock(BLOCK_DIORITE);
BlockID my_5 = createBlock(BLOCK_POLISHED_DIORITE);
BlockID my_6 = createBlock(BLOCK_ANDESITE);
BlockID my_7 = createBlock(BLOCK_POLISHED_ANDESITE);
BlockID my_8 = createBlock(BLOCK_GRASS);
BlockID my_9 = createBlock(BLOCK_DIRT);
BlockID my_10 = createBlock(BLOCK_COARSE_DIRT );
BlockID my_11 = createBlock(BLOCK_PODZOL );
BlockID my_12 = createBlock(BLOCK_COBBLESTONE );
BlockID my_13 = createBlock(BLOCK_BEDROCK );
BlockID my_14 = createBlock(BLOCK_SAND );
BlockID my_15 = createBlock(BLOCK_RED_SAND );
BlockID my_16 = createBlock(BLOCK_GRAVEL );
BlockID my_17 = createBlock(BLOCK_GLASS );
BlockID my_18 = createBlock(BLOCK_LAPIS_LAZULI );
BlockID my_19 = createBlock(BLOCK_SAND_STONE );
BlockID my_20 = createBlock(BLOCK_CHISELED_SAND_STONE );
BlockID my_21 = createBlock(BLOCK_SMOOTH_SAND_STONE );
BlockID my_22 = createBlock(BLOCK_GOLD );
BlockID my_23 = createBlock(BLOCK_IRON );
BlockID my_24 = createBlock(BLOCK_TNT );
BlockID my_25 = createBlock(BLOCK_MOSSY_COBBLESTONE );
BlockID my_26 = createBlock(BLOCK_OBSIDIAN );
BlockID my_27 = createBlock(BLOCK_DIAMOND );
BlockID my_28 = createBlock(BLOCK_CLAY );
BlockID my_29 = createBlock(BLOCK_NETHERRACK );
BlockID my_30 = createBlock(BLOCK_SOUL_SAND );
BlockID my_31 = createBlock(BLOCK_GLOWSTONE );
BlockID my_32 = createBlock(BLOCK_STAINED_GLASS );
BlockID my_33 = createBlock(BLOCK_MELON );
BlockID my_34 = createBlock(BLOCK_MYCELIUM );
BlockID my_35 = createBlock(BLOCK_END_STONE);
BlockID my_36 = createBlock(BLOCK_EMERALD);
BlockID my_37 = createBlock(BLOCK_NETHER_QUARTZ);
BlockID my_38 = createBlock(BLOCK_SLIME);
BlockID my_39 = createBlock(BLOCK_PRISMARINE);
BlockID my_40 = createBlock(BLOCK_HAY_BALE);
BlockID my_41 = createBlock(BLOCK_COAL);
BlockID my_42 = createBlock(BLOCK_RED_SANDSTONE);
BlockID my_43 = createBlock(BLOCK_CHISELED_RED_SANDSTONE);
BlockID my_44 = createBlock(BLOCK_SMOOTH_RED_SANDSTONE);
BlockID my_45 = createBlock(BLOCK_PURPUR);
BlockID my_46 = createBlock(BLOCK_PURPUR_PILLAR);
BlockID my_47 = createBlock(BLOCK_GRASS_PATH);
BlockID my_48 = createBlock(BLOCK_MAGMA);
BlockID my_49 = createBlock(BLOCK_NETHER_WART);
BlockID my_50 = createBlock(BLOCK_BONE);

BlockID 1 = createBlock(BLOCK_STONE);
BlockID 2 = createBlock(BLOCK_GRANITE);
BlockID 3 = createBlock(BLOCK_POLISHED_GRANITE);
BlockID 4 = createBlock(BLOCK_DIORITE);
BlockID 5 = createBlock(BLOCK_POLISHED_DIORITE);
BlockID 6 = createBlock(BLOCK_ANDESITE);
BlockID 7 = createBlock(BLOCK_POLISHED_ANDESITE);
BlockID 8 = createBlock(BLOCK_GRASS);
BlockID 9 = createBlock(BLOCK_DIRT);
BlockID 10 = createBlock(BLOCK_COARSE_DIRT );
BlockID 11 = createBlock(BLOCK_PODZOL );
BlockID 12 = createBlock(BLOCK_COBBLESTONE );
BlockID 13 = createBlock(BLOCK_BEDROCK );
BlockID 14 = createBlock(BLOCK_SAND );
BlockID 15 = createBlock(BLOCK_RED_SAND );
BlockID 16 = createBlock(BLOCK_GRAVEL );
BlockID 17 = createBlock(BLOCK_GLASS );
BlockID 18 = createBlock(BLOCK_LAPIS_LAZULI );
BlockID 19 = createBlock(BLOCK_SAND_STONE );
BlockID 20 = createBlock(BLOCK_CHISELED_SAND_STONE );
BlockID 21 = createBlock(BLOCK_SMOOTH_SAND_STONE );
BlockID 22 = createBlock(BLOCK_GOLD );
BlockID 23 = createBlock(BLOCK_IRON );
BlockID 24 = createBlock(BLOCK_TNT );
BlockID 25 = createBlock(BLOCK_MOSSY_COBBLESTONE );
BlockID 26 = createBlock(BLOCK_OBSIDIAN );
BlockID 27 = createBlock(BLOCK_DIAMOND );
BlockID 28 = createBlock(BLOCK_CLAY );
BlockID 29 = createBlock(BLOCK_NETHERRACK );
BlockID 30 = createBlock(BLOCK_SOUL_SAND );
BlockID 31 = createBlock(BLOCK_GLOWSTONE );
BlockID 32 = createBlock(BLOCK_STAINED_GLASS );
BlockID 33 = createBlock(BLOCK_MELON );
BlockID 34 = createBlock(BLOCK_MYCELIUM );
BlockID 35 = createBlock(BLOCK_END_STONE);
BlockID 36 = createBlock(BLOCK_EMERALD);
BlockID 37 = createBlock(BLOCK_NETHER_QUARTZ);
BlockID 38 = createBlock(BLOCK_SLIME);
BlockID 39 = createBlock(BLOCK_PRISMARINE);
BlockID 40 = createBlock(BLOCK_HAY_BALE);
BlockID 41 = createBlock(BLOCK_COAL);
BlockID 42 = createBlock(BLOCK_RED_SANDSTONE);
BlockID 43 = createBlock(BLOCK_CHISELED_RED_SANDSTONE);
BlockID 44 = createBlock(BLOCK_SMOOTH_RED_SANDSTONE);
BlockID 45 = createBlock(BLOCK_PURPUR);
BlockID 46 = createBlock(BLOCK_PURPUR_PILLAR);
BlockID 47 = createBlock(BLOCK_GRASS_PATH);
BlockID 48 = createBlock(BLOCK_MAGMA);
BlockID 49 = createBlock(BLOCK_NETHER_WART);
BlockID 50 = createBlock(BLOCK_BONE);
*/