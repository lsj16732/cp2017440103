/*
10. 소수(prime-number) 검사와 흡사하게 사용자가 입력한 수의 인수들을 모두 출력하는 프로그램을 작성하시오.
8 => 2 4
12 => 2 3 4 6
*/
#include "pch.h"
#include <iostream>

int main()
{
	int n, i;
	printf("정수 입력 : ");
	scanf_s("%d", &n);
	for (i = 2; i < n; i++) {
		if (n%i == 0) printf("%d\n", i);
	}
}