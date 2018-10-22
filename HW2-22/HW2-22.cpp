/*
22. 사용자가 0을 입력할 때까지 여러 숫자를 입력받아,
입력받은 숫자의 최대값을 출력하는 프로그램을 작성하시오.

사용자 입력
3
2
4
8
0

결과: 8
*/

#include "pch.h"
#include <iostream>

int main()
{
	int num, max, isFirst = 1;
	while (1) {
		printf("정수 입력:");
		scanf_s("%d", &num);
		if (isFirst) {
			max = num;
			isFirst = 0;
		}
		if (num == 0) {
			printf("%d\n", max);
			break;
		}
		if (num > max) max = num;
	}
}