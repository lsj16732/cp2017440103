/*
12. for문(while)의 무한 반복과 break 문을 이용하여
0이 입력될 때까지 입력 받은 정수 중 가장 큰 정수를 출력하는 프로그램을 작성하시오.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int n, max = 0;
	while (1) {
		printf("정수 입력 : ");
		scanf_s("%d", &n);
		if (n == 0) break;
		else if (n > max) max = n;
	}
	printf("%d\n", max);
}