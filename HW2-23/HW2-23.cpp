/*
23.***** *
*** ***
* *****

를 출력하시오(반복문 써서!)

*/

#include "pch.h"
#include <iostream>

#define SUM 6

int main()
{
	int i, j;
	for (i = 5; i > 0; i -= 2) {
		for (j = 0; j < i; j++) {
			printf("*");
		}
		printf(" ");
		for (j = 0; j < SUM - i; j++) {
			printf("*");
		}
		printf("\n");
	}
}