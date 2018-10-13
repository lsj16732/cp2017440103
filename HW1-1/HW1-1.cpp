#include "pch.h"
#include <iostream>

//1. 두 수(정수)를 입력 받아, 그 중 큰 수를 출력하는 프로그램을 작성하시오.

int main()
{
	int a, b, max;

	printf("첫 번째 정수를 입력하시오. : ");
	scanf_s("%d", &a);
	printf("두 번째 정수를 입력하시오. : ");
	scanf_s("%d", &b);

	if (a == b) {
		fprintf(stderr, "두 정수가 같습니다.\n");
		exit(1);
	}
	else if (a > b) {
		max = a;
	}
	else {
		max = b;
	}

	printf("큰 수는 %d입니다.\n", max);

}
