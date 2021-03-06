/*
25.다음과 같은 출력이 나오도록 프로그램을 작성하시오.
(1) *********** (2)54321012345
********* 432101234
******* 3210123
***** 21012
*** 101
* 0
*** 101
***** 21012
******* 3210123
********* 432101234
*********** 54321012345
*/

#include "pch.h"
#include <iostream>

#define MAX_STAR 11
#define MAX_LINE 11

int main()
{
	int line_star;//한 라인에 출력해야 하는 별의 수
	int line;//현재 라인 값
	int num;//한 줄의 처음 숫자
	for (line = 1; line <= MAX_LINE; line++) {
		int i;//loop 변수
		if (line <= MAX_LINE / 2)//line이 max의 절반이 지나지 않았으면
			line_star = MAX_STAR - (line - 1) * 2;
		else
			line_star = 1 + (line - 6) * 2;
		num = line_star / 2;
		for (i = 1; i <= line_star; i++) printf("*");
		for (i = num; i >= 0; i--) printf("%d", i);
		for (i = 1; i <= num; i++) printf("%d", i);
		printf("\n");
	}
}