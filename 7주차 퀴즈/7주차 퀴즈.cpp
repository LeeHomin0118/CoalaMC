#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

int main() {
	BlockID stone = createBlock(BLOCK_STONE);
	int sx, sy, sz, sd;
	scanf("%d %d %d %d", &sx, &sy, &sz, &sd);
	for (int i = 0; i <= sd; i++) {
		for (int j = 0; j < 2 * i + 1; j++) {
			for (int k = 0; k < 2 * i + 1; k++) {
				printf("(%d, %d, %d)\n", sx + j - i, sy + sd - i, sz + k - i);
				locateBlock(stone, sx + j - i, sy + sd - i, sz + k - i);
			}
		}
	}
}