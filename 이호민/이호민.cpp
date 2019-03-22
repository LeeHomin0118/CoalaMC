#include <CoalaMOD.h>
#include <stdio.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <math.h>
int main() {
	double pi = 3.14159265358979323846;
	BlockID my_stone = createBlock(BLOCK_NETHERRACK);
	BlockID my_dirt = createBlock(BLOCK_LAPIS_LAZULI);
	BlockID my_air = createBlock(BLOCK_AIR);
	BlockID my_glass = createBlock(BLOCK_STAINED_GLASS);
	BlockID my_glow = createBlock(BLOCK_GLOWSTONE);
	int i, j, l, k;
	int px, py, pz;
	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();
	double radian = dir * pi / 180.;
	int dx = -150 * sin(radian);
	int dz = 150 * cos(radian);
	px += dx;
	pz += dz;
	//print("%d %d %d", px, py, pz);
	/*
	#include <math.h>	이 해더 문장은 코드의 맨 윗줄에 적으세요.
	int px, py, pz;
	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();
	double radian = dir * pi / 180.;
	int dx = 이 칸은 건물의 x좌표의 길이를 음수로 적으세요. * sin(radian);
	int dz = 이 칸은 건물의 y좌표의 길이를 양수로 적으세요. * cos(radian);
	px += dx;
	pz += dz;
	*/
	printf("%d %d %d", px, py, pz);
	for (i = 1; i < 100; i += 2) {
		for (j = 0; j < i; j += 2) {
			for (l = 0; l < j; l += 2) {

				locateBlock(my_stone, px - l, py + i, pz + j);
				locateBlock(my_dirt, px + l, py + i, pz + j);
				locateBlock(my_dirt, px - l, py + i, pz - j);
				locateBlock(my_stone, px + l, py + i, pz - j);
				locateBlock(my_dirt, px - j, py + i, pz + l);
				locateBlock(my_stone, px + j, py + i, pz + l);
				locateBlock(my_stone, px - j, py + i, pz - l);
				locateBlock(my_dirt, px + j, py + i, pz - l);

			}
		}
	}

	for (i = 1; i < 100; i += 2) {
		for (j = 101 - i; j > i; j -= 2) {
			for (l = 101 - j; l > j; l -= 2) {

				locateBlock(my_stone, px - l, 101 + i + py, pz + j);
				locateBlock(my_dirt, px + l, 101 + i + py, pz + j);
				locateBlock(my_dirt, px - l, 101 + i + py, pz - j);
				locateBlock(my_stone, px + l, 101 + i + py, pz - j);
				locateBlock(my_dirt, px - j, 101 + i + py, pz + l);
				locateBlock(my_stone, px + j, 101 + i + py, pz + l);
				locateBlock(my_stone, px - j, 101 + i + py, pz - l);
				locateBlock(my_dirt, px + j, 101 + i + py, pz - l);

			}
		}
	}

	for (i = 1; i < 100; i += 2) {
		for (j = 0; j < i; j += 2) {
			for (l = 0; l < j; l += 2) {

				locateBlock(my_stone, px - l, 101 + i + py, pz + j);
				locateBlock(my_dirt, px + l, 101 + i + py, pz + j);
				locateBlock(my_dirt, px - l, 101 + i + py, pz - j);
				locateBlock(my_stone, px + l, 101 + i + py, pz - j);
				locateBlock(my_dirt, px - j, 101 + i + py, pz + l);
				locateBlock(my_stone, px + j, 101 + i + py, pz + l);
				locateBlock(my_stone, px - j, 101 + i + py, pz - l);
				locateBlock(my_dirt, px + j, 101 + i + py, pz - l);

			}
		}
	}

}