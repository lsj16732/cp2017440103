/*
21. 사용자로부터 한 숫자를 입력받아, 입력받은 숫자 이하의 소수들의 합을 구하는 프로그램을 작성하시오.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int num, temp, i, count = 0, sum = 0;
	printf("정수를 입력하시오:");
	scanf_s("%d", &num);
	for (temp = 1; temp <= num; temp++) {
		for (i = 1; i <= temp; i++) {
			if (temp % i == 0) count++;
		}
		if (count == 2) sum += temp;
		count = 0;
	}
	printf("%d\n", sum);
}