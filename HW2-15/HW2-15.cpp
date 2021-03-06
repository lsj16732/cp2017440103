/*
15. 1~100 사이의 숫자 하나를 정한 뒤(랜덤으로 생성해도 됨),
10번 이내로 그 숫자를 맞추는 게임을 작성하시오.
(10번 이내로 못 맞추었을 경우는 약간 머리가 딸리는 사람이므로 Game Over 처리를 신랄하게 해 주기 바람)

예) 답이 49일 경우:

숫자를 입력하시오: 36
입력하신 숫자보다 큽니다.

숫자를 입력하시오: 51
입력하신 숫자보다 작습니다.

숫자를 입력하시오: 49
정답입니다!
*/

#include "pch.h"
#include <iostream>
#include <time.h>

#define MAX_RANDOM 100//난수 최대
#define MAX_ERROR 10//에러 최대

int main()
{
	int random, error = 0, num;
	srand(time(NULL));//난수 초기화
	random = rand() % MAX_RANDOM + 1;//1~MAX 범위의 난수 생성
	while (1) {
		printf("숫자를 입력하시오. : ");
		scanf_s("%d", &num);
		if (random == num) {
			printf("정답입니다!\n");
			break;
		}
		else {
			error++;
			if (error == MAX_ERROR) {
				printf("Game Over\n");
				break;
			}
			else if (random > num)
				printf("입력하신 숫자보다 큽니다.\n");
			else
				printf("입력하신 숫자보다 작습니다.\n");
		}
	}
}