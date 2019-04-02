#define _CRT_SECURE_NO_WARNINGS   // scanf의 보안 오류를 무시하기 위한 선언
#include <stdio.h>

typedef unsigned long long HuffmanCode;
#define CASE_HUFFMAN_CODE(_c, _h, _s)    case _c: h = 0b ## _h; s = _s;

int main()
{
	char sentence[32];
	scanf("%[^\n]", sentence);           // 한줄 문자열을 입력받는다.

	HuffmanCode code = 0;                // 64bit 코드
	int pos = 64;                        // 코드 생성 위치

	for (int i = 0; sentence[i] != 0; i++) {
		const char c = sentence[i];      // i번째 문자

		HuffmanCode  h;                  // i번째 문자에 해당되는 HUFFMAN CODE
		int s;                    // i번째 문자에 해당되는 HUFFMAN CODE의 크기

		switch (c) {
			CASE_HUFFMAN_CODE(',', 0101011, 7); break;
			CASE_HUFFMAN_CODE('.', 010100, 6); break;
			CASE_HUFFMAN_CODE(' ', 101, 3); break;
			CASE_HUFFMAN_CODE('a', 1001, 4); break;
			CASE_HUFFMAN_CODE('b', 1000010, 7); break;
			CASE_HUFFMAN_CODE('c', 0001, 4); break;
			CASE_HUFFMAN_CODE('d', 0100, 4); break;
			CASE_HUFFMAN_CODE('e', 1110, 4); break;
			CASE_HUFFMAN_CODE('f', 11011, 5); break;
			CASE_HUFFMAN_CODE('g', 000000, 6); break;
			CASE_HUFFMAN_CODE('h', 11010, 5); break;
			CASE_HUFFMAN_CODE('i', 0110, 4); break;
			CASE_HUFFMAN_CODE('j', 00000111, 8); break;
			CASE_HUFFMAN_CODE('k', 01010100, 8); break;
			CASE_HUFFMAN_CODE('l', 00001, 5); break;
			CASE_HUFFMAN_CODE('m', 11110, 5); break;
			CASE_HUFFMAN_CODE('n', 0111, 4); break;
			CASE_HUFFMAN_CODE('o', 1100, 4); break;
			CASE_HUFFMAN_CODE('p', 01011, 5); break;
			CASE_HUFFMAN_CODE('q', 01010101, 8); break;
			CASE_HUFFMAN_CODE('r', 11111, 5); break;
			CASE_HUFFMAN_CODE('s', 0011, 4); break;
			CASE_HUFFMAN_CODE('t', 0010, 4); break;
			CASE_HUFFMAN_CODE('u', 10001, 5); break;
			CASE_HUFFMAN_CODE('v', 10000111, 8); break;
			CASE_HUFFMAN_CODE('w', 0000010, 7); break;
			CASE_HUFFMAN_CODE('x', 00000110, 8); break;
			CASE_HUFFMAN_CODE('y', 100000, 6); break;
			CASE_HUFFMAN_CODE('z', 10000110, 8); break;
		}

		pos -= s;
		if (pos < 0) {
			// 더 이상 코드에 포함시킬 수 없다.
			break;
		}

		h <<= pos;
		code |= h;
	}

	printf("%s --> %llx\n", sentence, code);
}
