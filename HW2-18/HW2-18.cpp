/*
18. 1부터 100까지 5의 배수의 합을 for loop을 써서 구하는 프로그램을 작성하시오.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int sum = 0, i;
	for (i = 1; i <= 100; i++) {
		if (i % 5 == 0) sum += i;
	}
	printf("%d\n", sum);
}