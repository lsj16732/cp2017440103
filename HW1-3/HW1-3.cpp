#include "pch.h"
#include <iostream>

//3. 세 수(정수형)를 입력 받아 가장 큰 수를 출력하는 프로그램을 작성하시오.

int main()
{
	int a[3];
	int max = 0;
	
	printf("첫 번째 정수를 입력하시오. : ");
	scanf_s("%d", &a[0]);
	printf("두 번째 정수를 입력하시오. : ");
	scanf_s("%d", &a[1]);
	printf("세 번째 정수를 입력하시오. : ");
	scanf_s("%d", &a[2]);

	int i;
	for (i = 0; i < 3; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	printf("가장 큰 수는 %d 입니다.", max);
}
