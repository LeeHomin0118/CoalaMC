#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
int main() {
	unsigned long long int i, j, l, k;
	BlockID my_stone = createBlock(BLOCK_NETHERRACK);
	BlockID my_dirt = createBlock(BLOCK_LAPIS_LAZULI);
	BlockID my_air = createBlock(BLOCK_AIR);
	BlockID my_glass = createBlock(BLOCK_STAINED_GLASS);
	BlockID my_glow = createBlock(BLOCK_GLOWSTONE);
	BricksID my_redstone = createBricks(BRICKS_RED_NETHER);

	for (i = 1; i < 100; i += 2) {
		for (j = 0; j < i; j += 2) {
			for (l = 0; l < j; l += 2) {

				locateBlock(my_stone, 400 - l, 4 + i, 200 + j);
				locateBlock(my_dirt, 400 + l, 4 + i, 200 + j);
				locateBlock(my_dirt, 400 - l, 4 + i, 200 - j);
				locateBlock(my_stone, 400 + l, 4 + i, 200 - j);
				locateBlock(my_dirt, 400 - j, 4 + i, 200 + l);
				locateBlock(my_stone, 400 + j, 4 + i, 200 + l);
				locateBlock(my_stone, 400 - j, 4 + i, 200 - l);
				locateBlock(my_dirt, 400 + j, 4 + i, 200 - l);

			}
		}
	}

	for (i = 1; i < 100; i += 2) {
		for (j = 101 - i; j > i; j -= 2) {
			for (l = 101 - j; l > j; l -= 2) {

				locateBlock(my_stone, 400 - l, 105 + i, 200 + j);
				locateBlock(my_dirt, 400 + l, 105 + i, 200 + j);
				locateBlock(my_dirt, 400 - l, 105 + i, 200 - j);
				locateBlock(my_stone, 400 + l, 105 + i, 200 - j);
				locateBlock(my_dirt, 400 - j, 105 + i, 200 + l);
				locateBlock(my_stone, 400 + j, 105 + i, 200 + l);
				locateBlock(my_stone, 400 - j, 105 + i, 200 - l);
				locateBlock(my_dirt, 400 + j, 105 + i, 200 - l);

			}
		}
	}

	for (i = 1; i < 100; i += 2) {
		for (j = 0; j < i; j += 2) {
			for (l = 0; l < j; l += 2) {

				locateBlock(my_stone, 400 - l, 105 + i, 200 + j);
				locateBlock(my_dirt, 400 + l, 105 + i, 200 + j);
				locateBlock(my_dirt, 400 - l, 105 + i, 200 - j);
				locateBlock(my_stone, 400 + l, 105 + i, 200 - j);
				locateBlock(my_dirt, 400 - j, 105 + i, 200 + l);
				locateBlock(my_stone, 400 + j, 105 + i, 200 + l);
				locateBlock(my_stone, 400 - j, 105 + i, 200 - l);
				locateBlock(my_dirt, 400 + j, 105 + i, 200 - l);

			}
		}
	}
	//중앙 기중 하단
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 17; j++) {
			locateBlock(my_glass, 392 + j, 4 + i, 188);
			locateBlock(my_glass, 392 + j, 4 + i, 212);
			locateBlock(my_glass, 412, 4 + i, 192 + j);
			locateBlock(my_glass, 388, 4 + i, 192 + j);
		}
		for (int j = 0; j < 2; j++) {
			locateBlock(my_glass, 389, 4 + i, 191 + j);
			locateBlock(my_glass, 389, 4 + i, 208 + j);
			locateBlock(my_glass, 390, 4 + i, 190 + j);
			locateBlock(my_glass, 390, 4 + i, 209 + j);
			locateBlock(my_glass, 391, 4 + i, 189 + j);
			locateBlock(my_glass, 391, 4 + i, 210 + j);
			locateBlock(my_glass, 409, 4 + i, 189 + j);
			locateBlock(my_glass, 409, 4 + i, 210 + j);
			locateBlock(my_glass, 410, 4 + i, 190 + j);
			locateBlock(my_glass, 410, 4 + i, 209 + j);
			locateBlock(my_glass, 411, 4 + i, 191 + j);
			locateBlock(my_glass, 411, 4 + i, 208 + j);
		}
		locateBlock(my_glass, 392, 4 + i, 189);
		locateBlock(my_glass, 392, 4 + i, 211);
		locateBlock(my_glass, 408, 4 + i, 189);
		locateBlock(my_glass, 408, 4 + i, 211);
	}
	//중앙 기둥 중단
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			locateBlock(my_glass, 393 + j, 7 + i, 189);
			locateBlock(my_glass, 393 + j, 7 + i, 211);
			locateBlock(my_glass, 411, 7 + i, 193 + j);
			locateBlock(my_glass, 389, 7 + i, 193 + j);
		}
		for (int j = 0; j < 2; j++) {
			locateBlock(my_glass, 390, 7 + i, 192 + j);
			locateBlock(my_glass, 390, 7 + i, 207 + j);
			locateBlock(my_glass, 391, 7 + i, 191 + j);
			locateBlock(my_glass, 391, 7 + i, 208 + j);
			locateBlock(my_glass, 392, 7 + i, 190 + j);
			locateBlock(my_glass, 392, 7 + i, 209 + j);
			locateBlock(my_glass, 408, 7 + i, 190 + j);
			locateBlock(my_glass, 408, 7 + i, 209 + j);
			locateBlock(my_glass, 409, 7 + i, 191 + j);
			locateBlock(my_glass, 409, 7 + i, 208 + j);
			locateBlock(my_glass, 410, 7 + i, 192 + j);
			locateBlock(my_glass, 410, 7 + i, 207 + j);
		}
		locateBlock(my_glass, 393, 7 + i, 190);
		locateBlock(my_glass, 393, 7 + i, 210);
		locateBlock(my_glass, 407, 7 + i, 190);
		locateBlock(my_glass, 407, 7 + i, 210);
	}
	//메인 기둥
	for (int i = 0; i < 200; i++) {
		for (int j = 0; j < 13; j++) {
			locateBlock(my_glass, 394 + j, 12 + i, 190);
			locateBlock(my_glass, 394 + j, 12 + i, 210);
			locateBlock(my_glass, 410, 12 + i, 194 + j);
			locateBlock(my_glass, 390, 12 + i, 194 + j);
		}
		for (int j = 0; j < 2; j++) {
			locateBlock(my_glass, 391, 12 + i, 193 + j);
			locateBlock(my_glass, 391, 12 + i, 206 + j);
			locateBlock(my_glass, 392, 12 + i, 192 + j);
			locateBlock(my_glass, 392, 12 + i, 207 + j);
			locateBlock(my_glass, 393, 12 + i, 191 + j);
			locateBlock(my_glass, 393, 12 + i, 208 + j);
			locateBlock(my_glass, 407, 12 + i, 191 + j);
			locateBlock(my_glass, 407, 12 + i, 208 + j);
			locateBlock(my_glass, 408, 12 + i, 192 + j);
			locateBlock(my_glass, 408, 12 + i, 207 + j);
			locateBlock(my_glass, 409, 12 + i, 193 + j);
			locateBlock(my_glass, 409, 12 + i, 206 + j);
		}
		locateBlock(my_glass, 394, 12 + i, 191);
		locateBlock(my_glass, 394, 12 + i, 209);
		locateBlock(my_glass, 406, 12 + i, 191);
		locateBlock(my_glass, 406, 12 + i, 209);
	}
	//중앙 기둥 중단
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 15; j++) {
			locateBlock(my_glass, 393 + j, 212 + i, 189);
			locateBlock(my_glass, 393 + j, 212 + i, 211);
			locateBlock(my_glass, 411, 212 + i, 193 + j);
			locateBlock(my_glass, 389, 212 + i, 193 + j);
		}
		for (int j = 0; j < 2; j++) {
			locateBlock(my_glass, 390, 212 + i, 192 + j);
			locateBlock(my_glass, 390, 212 + i, 207 + j);
			locateBlock(my_glass, 391, 212 + i, 191 + j);
			locateBlock(my_glass, 391, 212 + i, 208 + j);
			locateBlock(my_glass, 392, 212 + i, 190 + j);
			locateBlock(my_glass, 392, 212 + i, 209 + j);
			locateBlock(my_glass, 408, 212 + i, 190 + j);
			locateBlock(my_glass, 408, 212 + i, 209 + j);
			locateBlock(my_glass, 409, 212 + i, 191 + j);
			locateBlock(my_glass, 409, 212 + i, 208 + j);
			locateBlock(my_glass, 410, 212 + i, 192 + j);
			locateBlock(my_glass, 410, 212 + i, 207 + j);
		}
		locateBlock(my_glass, 393, 212 + i, 190);
		locateBlock(my_glass, 393, 212 + i, 210);
		locateBlock(my_glass, 407, 212 + i, 190);
		locateBlock(my_glass, 407, 212 + i, 210);
	}
	//중앙 기둥 상단
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 17; j++) {
			locateBlock(my_glass, 392 + j, 217 + i, 188);
			locateBlock(my_glass, 392 + j, 217 + i, 212);
			locateBlock(my_glass, 412, 217 + i, 192 + j);
			locateBlock(my_glass, 388, 217 + i, 192 + j);
		}
		for (int j = 0; j < 2; j++) {
			locateBlock(my_glass, 389, 217 + i, 191 + j);
			locateBlock(my_glass, 389, 217 + i, 208 + j);
			locateBlock(my_glass, 390, 217 + i, 190 + j);
			locateBlock(my_glass, 390, 217 + i, 209 + j);
			locateBlock(my_glass, 391, 217 + i, 189 + j);
			locateBlock(my_glass, 391, 217 + i, 210 + j);
			locateBlock(my_glass, 409, 217 + i, 189 + j);
			locateBlock(my_glass, 409, 217 + i, 210 + j);
			locateBlock(my_glass, 410, 217 + i, 190 + j);
			locateBlock(my_glass, 410, 217 + i, 209 + j);
			locateBlock(my_glass, 411, 217 + i, 191 + j);
			locateBlock(my_glass, 411, 217 + i, 208 + j);
		}
		locateBlock(my_glass, 392, 217 + i, 189);
		locateBlock(my_glass, 392, 217 + i, 211);
		locateBlock(my_glass, 408, 217 + i, 189);
		locateBlock(my_glass, 408, 217 + i, 211);
	}
	//기둥 지붕 하단
	for (int k = 0; k < 5; k++) {
		for (int i = 387 - k; i <= 413 + k; i++) {
			for (int j = 187 - k; j <= 213 + k; j++) {
				locateBlock(my_glow, i, 220 + k, j);
			}
		}
	}
	//기둥 지붕 상단
	for (int k = 3; k > -5; k--) {
		for (int i = 387 - k; i <= 413 + k; i++) {
			for (int j = 187 - k; j <= 213 + k; j++) {
				locateBricks(my_redstone, i, 228 - k, j);
			}
		}
	}
	//눈 받침
	for (int i = 0; i < 23; i++) {
		locateBlock(my_glass, 391, 233 + i, 209);
		locateBlock(my_glass, 409, 233 + i, 191);
	}

	for (int i = 0; i < 19; i++) {
		locateBlock(my_glass, 391, 233 + i, 208);
		locateBlock(my_glass, 408, 233 + i, 191);
		locateBlock(my_glass, 392, 233 + i, 209);
		locateBlock(my_glass, 409, 233 + i, 192);
	}

	for (int i = 0; i < 16; i++) {
		locateBlock(my_glass, 391, 233 + i, 207);
		locateBlock(my_glass, 407, 233 + i, 191);
		locateBlock(my_glass, 392, 233 + i, 208);
		locateBlock(my_glass, 408, 233 + i, 192);
		locateBlock(my_glass, 393, 233 + i, 209);
		locateBlock(my_glass, 409, 233 + i, 193);
	}

	for (int i = 0; i < 13; i++) {
		locateBlock(my_glass, 391, 233 + i, 206);
		locateBlock(my_glass, 409, 233 + i, 194);
		locateBlock(my_glass, 392, 233 + i, 207);
		locateBlock(my_glass, 408, 233 + i, 193);
		locateBlock(my_glass, 393, 233 + i, 208);
		locateBlock(my_glass, 407, 233 + i, 192);
		locateBlock(my_glass, 394, 233 + i, 209);
		locateBlock(my_glass, 406, 233 + i, 191);
	}

	for (int i = 0; i < 11; i++) {
		locateBlock(my_glass, 391, 233 + i, 205);
		locateBlock(my_glass, 409, 233 + i, 195);
		locateBlock(my_glass, 392, 233 + i, 206);
		locateBlock(my_glass, 408, 233 + i, 194);
		locateBlock(my_glass, 393, 233 + i, 207);
		locateBlock(my_glass, 407, 233 + i, 193);
		locateBlock(my_glass, 394, 233 + i, 208);
		locateBlock(my_glass, 406, 233 + i, 192);
		locateBlock(my_glass, 395, 233 + i, 209);
		locateBlock(my_glass, 405, 233 + i, 191);
	}

	for (int i = 0; i < 9; i++) {
		locateBlock(my_glass, 391, 233 + i, 204);
		locateBlock(my_glass, 409, 233 + i, 196);
		locateBlock(my_glass, 392, 233 + i, 205);
		locateBlock(my_glass, 408, 233 + i, 195);
		locateBlock(my_glass, 393, 233 + i, 206);
		locateBlock(my_glass, 407, 233 + i, 194);
		locateBlock(my_glass, 394, 233 + i, 207);
		locateBlock(my_glass, 406, 233 + i, 193);
		locateBlock(my_glass, 395, 233 + i, 208);
		locateBlock(my_glass, 405, 233 + i, 192);
		locateBlock(my_glass, 396, 233 + i, 209);
		locateBlock(my_glass, 404, 233 + i, 191);
	}

	for (int i = 0; i < 7; i++) {
		locateBlock(my_glass, 391, 233 + i, 203);
		locateBlock(my_glass, 409, 233 + i, 197);
		locateBlock(my_glass, 392, 233 + i, 204);
		locateBlock(my_glass, 408, 233 + i, 196);
		locateBlock(my_glass, 393, 233 + i, 205);
		locateBlock(my_glass, 407, 233 + i, 195);
		locateBlock(my_glass, 394, 233 + i, 206);
		locateBlock(my_glass, 406, 233 + i, 194);
		locateBlock(my_glass, 395, 233 + i, 207);
		locateBlock(my_glass, 405, 233 + i, 193);
		locateBlock(my_glass, 396, 233 + i, 208);
		locateBlock(my_glass, 404, 233 + i, 192);
		locateBlock(my_glass, 397, 233 + i, 209);
		locateBlock(my_glass, 403, 233 + i, 191);
	}

	for (int i = 0; i < 5; i++) {
		locateBlock(my_glass, 391, 233 + i, 202);
		locateBlock(my_glass, 409, 233 + i, 198);
		locateBlock(my_glass, 392, 233 + i, 203);
		locateBlock(my_glass, 408, 233 + i, 197);
		locateBlock(my_glass, 393, 233 + i, 204);
		locateBlock(my_glass, 407, 233 + i, 196);
		locateBlock(my_glass, 394, 233 + i, 205);
		locateBlock(my_glass, 406, 233 + i, 195);
		locateBlock(my_glass, 395, 233 + i, 206);
		locateBlock(my_glass, 405, 233 + i, 194);
		locateBlock(my_glass, 396, 233 + i, 207);
		locateBlock(my_glass, 404, 233 + i, 193);
		locateBlock(my_glass, 397, 233 + i, 208);
		locateBlock(my_glass, 403, 233 + i, 192);
		locateBlock(my_glass, 398, 233 + i, 209);
		locateBlock(my_glass, 402, 233 + i, 191);
	}

	for (int i = 0; i < 4; i++) {
		locateBlock(my_glass, 391, 233 + i, 201);
		locateBlock(my_glass, 409, 233 + i, 199);
		locateBlock(my_glass, 392, 233 + i, 202);
		locateBlock(my_glass, 408, 233 + i, 198);
		locateBlock(my_glass, 393, 233 + i, 203);
		locateBlock(my_glass, 407, 233 + i, 197);
		locateBlock(my_glass, 394, 233 + i, 204);
		locateBlock(my_glass, 406, 233 + i, 196);
		locateBlock(my_glass, 395, 233 + i, 205);
		locateBlock(my_glass, 405, 233 + i, 195);
		locateBlock(my_glass, 396, 233 + i, 206);
		locateBlock(my_glass, 404, 233 + i, 194);
		locateBlock(my_glass, 397, 233 + i, 207);
		locateBlock(my_glass, 403, 233 + i, 193);
		locateBlock(my_glass, 398, 233 + i, 208);
		locateBlock(my_glass, 402, 233 + i, 192);
		locateBlock(my_glass, 399, 233 + i, 209);
		locateBlock(my_glass, 402, 233 + i, 191);
	}

	for (int i = 0; i < 3; i++) {
		locateBlock(my_glass, 391, 233 + i, 200);
		locateBlock(my_glass, 409, 233 + i, 200);
		locateBlock(my_glass, 392, 233 + i, 201);
		locateBlock(my_glass, 408, 233 + i, 199);
		locateBlock(my_glass, 393, 233 + i, 202);
		locateBlock(my_glass, 407, 233 + i, 198);
		locateBlock(my_glass, 394, 233 + i, 203);
		locateBlock(my_glass, 406, 233 + i, 197);
		locateBlock(my_glass, 395, 233 + i, 204);
		locateBlock(my_glass, 405, 233 + i, 196);
		locateBlock(my_glass, 396, 233 + i, 205);
		locateBlock(my_glass, 404, 233 + i, 195);
		locateBlock(my_glass, 397, 233 + i, 206);
		locateBlock(my_glass, 403, 233 + i, 194);
		locateBlock(my_glass, 398, 233 + i, 207);
		locateBlock(my_glass, 402, 233 + i, 193);
		locateBlock(my_glass, 399, 233 + i, 208);
		locateBlock(my_glass, 402, 233 + i, 192);
		locateBlock(my_glass, 400, 233 + i, 209);
		locateBlock(my_glass, 401, 233 + i, 191);
	}

	for (int i = 0; i < 2; i++) {
		locateBlock(my_glass, 391, 233 + i, 199);
		locateBlock(my_glass, 409, 233 + i, 201);
		locateBlock(my_glass, 392, 233 + i, 200);
		locateBlock(my_glass, 408, 233 + i, 200);
		locateBlock(my_glass, 393, 233 + i, 201);
		locateBlock(my_glass, 407, 233 + i, 199);
		locateBlock(my_glass, 394, 233 + i, 202);
		locateBlock(my_glass, 406, 233 + i, 198);
		locateBlock(my_glass, 395, 233 + i, 203);
		locateBlock(my_glass, 405, 233 + i, 197);
		locateBlock(my_glass, 396, 233 + i, 204);
		locateBlock(my_glass, 404, 233 + i, 196);
		locateBlock(my_glass, 397, 233 + i, 205);
		locateBlock(my_glass, 403, 233 + i, 195);
		locateBlock(my_glass, 398, 233 + i, 206);
		locateBlock(my_glass, 402, 233 + i, 194);
		locateBlock(my_glass, 399, 233 + i, 207);
		locateBlock(my_glass, 402, 233 + i, 193);
		locateBlock(my_glass, 400, 233 + i, 208);
		locateBlock(my_glass, 401, 233 + i, 192);
		locateBlock(my_glass, 401, 233 + i, 209);
		locateBlock(my_glass, 400, 233 + i, 191);
	}

	for (int i = 0; i < 1; i++) {
		locateBlock(my_glass, 391, 233 + i, 198);
		locateBlock(my_glass, 409, 233 + i, 202);
		locateBlock(my_glass, 392, 233 + i, 199);
		locateBlock(my_glass, 408, 233 + i, 201);
		locateBlock(my_glass, 393, 233 + i, 200);
		locateBlock(my_glass, 407, 233 + i, 200);
		locateBlock(my_glass, 394, 233 + i, 201);
		locateBlock(my_glass, 406, 233 + i, 199);
		locateBlock(my_glass, 395, 233 + i, 202);
		locateBlock(my_glass, 405, 233 + i, 198);
		locateBlock(my_glass, 396, 233 + i, 203);
		locateBlock(my_glass, 404, 233 + i, 197);
		locateBlock(my_glass, 397, 233 + i, 204);
		locateBlock(my_glass, 403, 233 + i, 196);
		locateBlock(my_glass, 398, 233 + i, 205);
		locateBlock(my_glass, 402, 233 + i, 195);
		locateBlock(my_glass, 399, 233 + i, 206);
		locateBlock(my_glass, 402, 233 + i, 194);
		locateBlock(my_glass, 400, 233 + i, 207);
		locateBlock(my_glass, 401, 233 + i, 193);
		locateBlock(my_glass, 401, 233 + i, 208);
		locateBlock(my_glass, 400, 233 + i, 192);
		locateBlock(my_glass, 402, 233 + i, 209);
		locateBlock(my_glass, 399, 233 + i, 191);
	}
	//발광석 기둥
	for (int k = 0; k < 216; k++) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				locateBlock(my_glow, 399 + i, 4 + k, 199 + j);
			}
		}
	}
	//눈 중앙 발광석
	for (int k = 0; k < 3; k++) {
		for (int i = 0; i < 17; i++) {
			for (int j = 0; j < 17; j++) {
				if (i == j || i - j == 1 || j - i == 1) {
					locateBlock(my_glow, 392 + i, 248 + k, 208 - j);
				}
			}
		}
	}

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (i == j || i - j == 1 || j - i == 1) {
				locateBlock(my_glow, 393 + i, 251, 207 - j);
				locateBlock(my_glow, 393 + i, 247, 207 - j);
			}
		}
	}

	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 13; j++) {
			if (i == j || i - j == 1 || j - i == 1) {
				locateBlock(my_glow, 394 + i, 252, 206 - j);
				locateBlock(my_glow, 394 + i, 246, 206 - j);
			}
		}
	}

	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (i == j || i - j == 1 || j - i == 1) {
				locateBlock(my_glow, 395 + i, 253, 205 - j);
				locateBlock(my_glow, 395 + i, 245, 205 - j);
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == j || i - j == 1 || j - i == 1) {
				locateBlock(my_glow, 396 + i, 254, 204 - j);
				locateBlock(my_glow, 396 + i, 244, 204 - j);
			}
		}
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (i == j || i - j == 1 || j - i == 1) {
				locateBlock(my_glow, 397 + i, 255, 203 - j);
				locateBlock(my_glow, 397 + i, 243, 203 - j);
			}
		}
	}
	//눈 2단
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			if (i == j) {
				locateBricks(my_redstone, 396 + i, 249, 206 - j);
				locateBricks(my_redstone, 394 + i, 249, 204 - j);
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == j) {
				locateBricks(my_redstone, 397 + i, 250, 205 - j);
				locateBricks(my_redstone, 395 + i, 250, 203 - j);
				locateBricks(my_redstone, 397 + i, 248, 205 - j);
				locateBricks(my_redstone, 395 + i, 248, 203 - j);
			}
		}
	}

	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7; j++) {
			if (i == j) {
				locateBricks(my_redstone, 398 + i, 251, 204 - j);
				locateBricks(my_redstone, 396 + i, 251, 202 - j);
				locateBricks(my_redstone, 398 + i, 247, 204 - j);
				locateBricks(my_redstone, 396 + i, 247, 202 - j);
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) {
				locateBricks(my_redstone, 400 + i, 252, 202 - j);
				locateBricks(my_redstone, 398 + i, 252, 200 - j);
				locateBricks(my_redstone, 400 + i, 246, 202 - j);
				locateBricks(my_redstone, 398 + i, 246, 200 - j);
			}
		}
	}
	//눈 3단
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i == j) {
				locateBlock(my_glass, 398 + i, 249, 205 - j);
				locateBlock(my_glass, 395 + i, 249, 202 - j);
			}
		}
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (i == j) {
				locateBlock(my_glass, 399 + i, 250, 204 - j);
				locateBlock(my_glass, 396 + i, 250, 201 - j);
				locateBlock(my_glass, 399 + i, 248, 204 - j);
				locateBlock(my_glass, 396 + i, 248, 201 - j);
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			if (i == j) {
				locateBlock(my_glass, 401 + i, 251, 202 - j);
				locateBlock(my_glass, 398 + i, 251, 199 - j);
				locateBlock(my_glass, 401 + i, 247, 202 - j);
				locateBlock(my_glass, 398 + i, 247, 199 - j);
			}
		}
	}
	//눈 4단
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j) {
				locateBlock(my_glow, 400 + i, 249, 204 - j);
				locateBlock(my_glow, 396 + i, 249, 200 - j);
			}
		}
	}

	locateBlock(my_glow, 402, 250, 202);
	locateBlock(my_glow, 398, 250, 198);
	locateBlock(my_glow, 402, 248, 202);
	locateBlock(my_glow, 398, 248, 198);
	//눈 끝
	locateBricks(my_redstone, 402, 249, 203);
	locateBricks(my_redstone, 397, 249, 198);
	locateBricks(my_redstone, 403, 249, 202);
	locateBricks(my_redstone, 398, 249, 197);
	return 0;
}
