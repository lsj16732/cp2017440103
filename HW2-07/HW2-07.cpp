/*
7. 0이 입력될 때까지 계속 정수를 입력 받고, 입력된 모든 숫자들의 총합을 출력하시오.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int n = 1, sum = 0;
	while (n != 0)
	{
		printf("정수를 입력하시오. : ");
		scanf_s("%d", &n);
		sum += n;
	}
	printf("%d\n", sum);
}