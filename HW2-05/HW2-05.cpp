/*
5. 1부터 100사이의 숫자(정수) 중에서
3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.
(do-while문 사용)
*/

#include "pch.h"
#include <iostream>

int main()
{
	int i = 1, sum = 0;
	do
	{
		if (i % 3 == 0) sum += i;
		i++;
	} while (i <= 100);
	printf("%d\n", sum);
}