/*
2. 10개의 정수를 입력 받아 그 총합을 출력하는 프로그램을 작성하시오.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int i = 0, a[10], sum = 0;
	printf("10개의 정수를 입력하시오.\n");
	while(i < 10)
	{
		printf("%d번째 정수 입력 : ", i+1);
		scanf_s("%d", &a[i]);
		sum += a[i++];
	}
	printf("10개 정수의 합 : %d", sum);
}