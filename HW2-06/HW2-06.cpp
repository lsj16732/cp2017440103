/*
6. 어떤 양의 정수(n)를 입력 받아
(만약 0이나 음의 정수를 입력하면,에러 메시지를 띄운 뒤, 다시 입력하도록 처리),
그 수의 2n을 구하는 프로그램을 작성하시오.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int n;
	while (1)
	{
		printf("양의 정수를 입력하시오. : ");
		scanf_s("%d", &n);
		if (n == 0 || n % 2 == 0) printf("정수 입력 에러\n");
		else break;
	}
	printf("%d\n", 2 * n);



}