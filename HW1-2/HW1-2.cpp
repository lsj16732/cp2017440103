#include "pch.h"
#include <iostream>

//2. 하나의 정수를 입력 받아
//이 수가 짝수(even number)인지 홀수(odd number)인지를 출력하는 프로그램을 작성하시오.

int main()
{
	int a;
	printf("정수를 입력하시오. : ");
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("이 수는 짝수입니다.\n");
	}
	else {
		printf("이 수는 홀수입니다.\n");
	}
}
