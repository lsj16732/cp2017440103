#include "pch.h"
#include <iostream>

//4. 점수(정수)를 입력 받아서 등급(A, B, C, D, E)을 출력하는 프로그램을 작성하시오.
//(A : 100 - 80, B : 79 - 60, C : 59 - 40, D : 39 - 20, E : 19 - 0)

int main()
{
	int score;
	char grade;
	printf("점수를 입력하시오. : ");
	scanf_s("%d", &score);

	if (score > 100 || score < 0) {
		fprintf(stderr, "점수 범위를 벗어났습니다.\n");
		exit(1);
	}
	else if (score > 79) {
		grade = 'A';
	}
	else if (score > 59) {
		grade = 'B';
	}
	else if (score > 39) {
		grade = 'C';
	}
	else if (score > 19) {
		grade = 'E';
	}
	else {
		grade = 'F';
	}

	printf("등급은 %c입니다.\n", grade);
}
