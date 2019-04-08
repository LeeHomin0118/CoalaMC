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
}



/*
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
BlockID my_stone = createBlock(BLOCK_NETHERRACK);
BlockID my_dirt = createBlock(BLOCK_LAPIS_LAZULI);
BlockID my_air = createBlock(BLOCK_AIR);
BlockID my_glass = createBlock(BLOCK_STAINED_GLASS);
BlockID my_glow = createBlock(BLOCK_GLOWSTONE);
long time_to_number(void);
void gotoxy(int x, int y);
void dot_print(int hour);
void number_check(int k, int i);
void digit_print(int dim[], int line);
void number_delet(int k, int i);
void digit_delet(int dim[], int line);
int zero[20] = { 1, 1, 1, 1,
				1, 0, 0, 1,
				1, 0, 0, 1,
				1, 0, 0, 1,
				1, 1, 1, 1 };
int one[20] = { 0, 0, 0, 1,
				0, 0, 0, 1,
				0, 0, 0, 1,
				0, 0, 0, 1,
				0, 0, 0, 1 };
int two[20] = { 1, 1, 1, 1,
				0, 0, 0, 1,
				1, 1, 1, 1,
				1, 0, 0, 0,
				1, 1, 1, 1 };
int three[20] = { 1, 1, 1, 1,
				0, 0, 0, 1,
				1, 1, 1, 1,
				0, 0, 0, 1,
				1, 1, 1, 1 };
int four[20] = { 1, 0, 0, 1,
				1, 0, 0, 1,
				1, 1, 1, 1,
				0, 0, 0, 1,
				0, 0, 0, 1 };
int five[20] = { 1, 1, 1, 1,
				1, 0, 0, 0,
				1, 1, 1, 1,
				0, 0, 0, 1,
				1, 1, 1, 1 };
int six[20] = { 1, 1, 1, 1,
				1, 0, 0, 0,
				1, 1, 1, 1,
				1, 0, 0, 1,
				1, 1, 1, 1 };
int seven[20] = { 1, 1, 1, 1,
				1, 0, 0, 1,
				0, 0, 0, 1,
				0, 0, 0, 1,
				0, 0, 0, 1 };
int eight[20] = { 1, 1, 1, 1,
				1, 0, 0, 1,
				1, 1, 1, 1,
				1, 0, 0, 1,
				1, 1, 1, 1 };
int nine[20] = { 1, 1, 1, 1,
				1, 0, 0, 1,
				1, 1, 1, 1,
				0, 0, 0, 1,
				0, 0, 0, 1 };
int main() {
	/*
	int px, py, pz;
	getPlayerLocation(&px, &py, &pz);
	double dir = getPlayerDirection();
	double radian = dir * pi / 180.;
	int dx = -150 * sin(radian);
	int dz = 150 * cos(radian);
	px += dx;
	pz += dz;
	*/
int line;
int time_number_before = 0;
long time_number;
printf("디지털 시계 프로그램\n\n");
printf("아무키나 누르면 현재시간을 출력합니다.\n");
_getch();
system("cls");
while (!_kbhit) {
	gotoxy(35, 1);
	time_number = time_to_number();
	if (time_number != time_number_before) {
		time_number_before = time_number;
		if (time_number >= 120000)
			printf("오후");
		else
			printf("오전");
		gotoxy(1, 3);
		for (line = 0; line <= 4; line++) {
			number_delet(time_number_before, line);
			number_check(time_number, line);
			printf("\n");
		}
	}
	dot_print(time_number);
	printf("\n\n\n\n아무키나 누르면 종료합니다.\n");
}
return 0;
}
void gotoxy(int x, int y) {
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
//시분초 단위의 값을 하나의 정수로 변환하는 함수 time_to_number
long time_to_number(void) {
	struct tm current;
	errno_t d;
	__time64_t temp;
	int hour, min, sec;
	_time64(&temp);
	d = _localtime64_s(&current, &temp);
	hour = current.tm_hour * 10000;
	min = current.tm_min * 100;
	sec = current.tm_sec;
	return hour + min + sec;
}
//디지털 숫자의 출력
void digit_print(int dim[], int line) {
	for (int i = line * 4; i <= line * 4 + 3; i++)
		if (dim[i] == 1)
			printf("■");
		else
			printf("  ");
	printf("    ");
	for (int i = line * 4; i <= line * 4 + 3; i++)
		if (dim[i] == 1)
			locateBlock(my_stone, 200, 20 + line, 200 + line + i);
}
//디지털 숫자의 삭제
void digit_delet(int dim[], int line) {
	for (int i = line * 4; i <= line * 4 + 3; i++)
		if (dim[i] == 1)
			locateBlock(my_stone, 200, 20 + line, 200 + line + i);
}
//숫자에 대한 분리
void number_check(int k, int i) {
	if (!k >= 100000) {  //시간이 두자리수가 아닌 경우
		digit_print(zero, i);   //0을 출력
		number_check(k / 10, i);
		switch (k % 10) {
		case 0:
			digit_print(zero, i);
			break;
		case 1:
			digit_print(one, i);
			break;
		case 2:
			digit_print(two, i);
			break;
		case 3:
			digit_print(three, i);
			break;
		case 4:
			digit_print(four, i);
			break;
		case 5:
			digit_print(five, i);
			break;
		case 6:
			digit_print(six, i);
			break;
		case 7:
			digit_print(seven, i);
			break;
		case 8:
			digit_print(eight, i);
			break;
		case 9:
			digit_print(nine, i);
			break;
		}
	}
	else if (k >= 1) {
		number_check(k / 10, i);
		switch (k % 10) {
		case 0:
			digit_print(zero, i);
			break;
		case 1:
			digit_print(one, i);
			break;
		case 2:
			digit_print(two, i);
			break;
		case 3:
			digit_print(three, i);
			break;
		case 4:
			digit_print(four, i);
			break;
		case 5:
			digit_print(five, i);
			break;
		case 6:
			digit_print(six, i);
			break;
		case 7:
			digit_print(seven, i);
			break;
		case 8:
			digit_print(eight, i);
			break;
		case 9:
			digit_print(nine, i);
			break;
		}
	}
}
//이미 써진 숫자를 초기화해주는 함수
void number_delet(int k, int i) {
	if (!k >= 100000) {  //시간이 두자리수가 아닌 경우
		digit_delet(zero, i);   //0을 출력
		number_delet(k / 10, i);
		switch (k % 10) {
		case 0:
			digit_delet(zero, i);
			break;
		case 1:
			digit_delet(one, i);
			break;
		case 2:
			digit_delet(two, i);
			break;
		case 3:
			digit_delet(three, i);
			break;
		case 4:
			digit_delet(four, i);
			break;
		case 5:
			digit_delet(five, i);
			break;
		case 6:
			digit_delet(six, i);
			break;
		case 7:
			digit_delet(seven, i);
			break;
		case 8:
			digit_delet(eight, i);
			break;
		case 9:
			digit_delet(nine, i);
			break;
		}
	}
	else if (k >= 1) {
		number_delet(k / 10, i);
		switch (k % 10) {
		case 0:
			digit_delet(zero, i);
			break;
		case 1:
			digit_delet(one, i);
			break;
		case 2:
			digit_delet(two, i);
			break;
		case 3:
			digit_delet(three, i);
			break;
		case 4:
			digit_delet(four, i);
			break;
		case 5:
			digit_delet(five, i);
			break;
		case 6:
			digit_delet(six, i);
			break;
		case 7:
			digit_delet(seven, i);
			break;
		case 8:
			digit_delet(eight, i);
			break;
		case 9:
			digit_delet(nine, i);
			break;
		}
	}
}
//시분초 사이의 구분을 위한 도트 출력 함수 dot_print
void dot_print(int hour) {
	int i;
	for (i = 0; i < 2; i++) {
		gotoxy(22 + (i * 24), 4);
		printf("■");
		gotoxy(22 + (i * 24), 6);
		printf("■");
	}
}

*/