/*
20. 100 이하의 소수를 모두 출력하는 프로그램을 작성하시오.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int num, i, count = 0;
	for (num = 1; num <= 100; num++) {
		for (i = 1; i <= num; i++) {
			if (num%i == 0) count++;
		}
		if (count == 2) printf("%d\n", num);
		count = 0;
	}
}