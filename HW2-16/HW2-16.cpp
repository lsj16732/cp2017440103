/*
16. 한 특정한 정수의 전체 자릿수의 개수를 결정하는 프로그램을 작성하시오.
사용자 입력 : 한 개의 정수
출력 : 자릿수의 개수
*/

#include "pch.h"
#include <iostream>

int main()
{
	int num, size = 0;
	printf("정수를 입력하시오. : ");
	scanf_s("%d", &num);
	while (1) {
		num /= 10;
		size++;
		if (num == 0) break;
	}
	printf("%d자리입니다.\n", size);
}