/*
24.사용자에게 라인 수를 입력받아서 그 줄 수 만큼 별표 삼각형을 만드시오.
사용자 입력: 4
*
***
*****
*******
*/

#include "pch.h"
#include <iostream>

int main()
{
	int line, tmp_line, star = 1, i;
	printf("라인 수 입력:");
	scanf_s("%d", &line);
	for (tmp_line = 0; tmp_line < line; tmp_line++) {
		for (i = 0; i < star; i++) {
			printf("*");
		}
		printf("\n");
		star += 2;
	}
}