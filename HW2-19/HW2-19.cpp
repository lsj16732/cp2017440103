/*
19. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자가 소수인지 아닌지를 검사하는 프로그램을 작성하시오.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int num, i, judge = 0;
	printf("정수를 입력하시오. : ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++) {
		if (num%i == 0) judge++;
	}
	if (judge == 2) printf("소수입니다.\n");
	else printf("소수가 아닙니다.\n");
}