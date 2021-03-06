/*
13. month와 day를 입력 받아, 1월 1일부터의 총 day수를 출력하는 프로그램을 작성하시오.
(switch문 사용) //1월 20일은 20일 출력, 2월 5일은 36일 출력. 단 2월은 28일로 계산.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int month, day, total = 0, i;
	printf("month 입력 : ");
	scanf_s("%d", &month);
	printf("day 입력 : ");
	scanf_s("%d", &day);
	for (i = 1; i < month; i++) {
		switch(i) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			total += 31;
			break;
		case 4: case 6: case 9: case 11:
			total += 30;
			break;
		case 2:
			total += 28;
			break;
		}
	}
	total += day;
	printf("%d일\n", total);

}