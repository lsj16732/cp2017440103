/*
8. 1부터 9사이의 숫자 하나를 입력 받아 그 숫자의 구구단을 출력하는 프로그램을 작성하시오.
(5이면 5단을 출력)
*/

#include "pch.h"
#include <iostream>

int main()
{
	int a, i;
	printf("1부터 9사이의 숫자 하나를 입력하세요. : ");
	scanf_s("%d", &a);
	for (i = 1; i <= 10; i++) printf("%d * %d = %d\n", a, i, a*i);
}