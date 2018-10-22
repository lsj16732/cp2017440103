/*
14. 사용자로부터 숫자 하나를 입력받아,
7부터 입력받은 수까지의 모든 정수들의 합을 구하는 프로그램을 작성하시오.
입력받은 숫자가 7보다 작으면 에러 메시지를 출력한다.

*/

#include "pch.h"
#include <iostream>

int main()
{
	int n, sum = 0, i;
	printf("7이상의 수 입력:");
	scanf_s("%d", &n);
	if (n < 7) printf("에러\n");
	else {
		for (i = 7; i <= n; i++) sum += i;
		printf("%d\n", sum);
	}
}