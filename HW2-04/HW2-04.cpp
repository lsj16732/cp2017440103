/*
4. 1부터 100사이의 숫자(정수) 중에서
3의 공배수(3,6,9,12,..)들의 총합을 출력하는 프로그램을 작성하시오.
(for문 사용)
*/

#include "pch.h"
#include <iostream>

int main()
{
	int i, sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0) sum += i;
	}
	printf("%d\n", sum);
}