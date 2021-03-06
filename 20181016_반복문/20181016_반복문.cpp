#include "pch.h"
#include <iostream>

/*
Today's topic
1. 반복문(loop, repetition)
2. 순서도(flow chart): 마름모 + 네모
	: 코드를 빨리 이해하기 위해서 사용한다. 따라서 순서도 그릴 때에는 자연어로 하는게 읽기 좋아!
*/

/*
Tip. 커서를 괄호에 두고 Ctro+]를 누르면 연결된 괄호로 이동한다.
Tip. Ctrl+k , Ctrl+f: format 맞추도록 조정. 소스코드 선택 영역을 예쁘게 한다.
Tip. Ctrl+K, Ctrl+C: 소스코드를 주석처리 한다. (Comment out)
Tip. Ctrl+K, Ctrl+U: Undo Comment Out
*/

int main()
{
	//=====이 위는 당분간 무시

	/*
	<반복문의 형식>
	1. 루프 변수 초기화
	2. 조건식
	3. 반복 문장
	4. 루프 변수 변화
	*/

	//예제 1. 1부터 10까지 출력
	////int count = 1;
	////while (count <= 10) {
	////	printf("count = %d\n", count);
	////	count = count + 1;
	////}

	////위의 반복문을 최대한 간단하게 만들어보자.
	//int count = 1;
	//while (count <= 10)
	//	printf("count = %d\n", count++);

	//printf("예제 2. 1부터 100까지 3의 배수만 화면에 출력\n");
	////단, 위의 예제 1에서 나머지는 유지하고 반복 문장만 바꿔서!
	//count = 1;
	//while (count <= 100) {
	//	if (count % 3 == 0)
	//		printf("count = %d\n", count);
	//	count++;
	//}

	//printf("예제 3. 1부터 100까지 3의 배수를 제외한 정수만 화면에 출력\n");
	//count = 1;
	//while (count <= 100) {
	//	if (count % 3 != 0)
	//		printf("count = %d\n", count);
	//	count++;
	//}

	/*
	break: 반복문에서 탈출한다.
	continue: 조건식으로 다시 돌아간다.
	*/
	//printf("예제 4. 키보드에서 정수를 입력받아 3의 배수 여부를 알려주는 프로그램\n");
	//printf("위의 작업을 반복적으로 수행하고 사용자가 100을 입력하면 종료한다.\n");
	//printf("1000보다 큰 수는 확인하지 않는다. 따라서 다시 입력하도록 한다.\n");
	//int input;
	//while (1) {//조건식이 1(True)이므로 계속해서 반복된다.
	//	printf("정수를 입력하세요. : ");
	//	scanf_s("%d", &input);
	//	if (input == 100)
	//		break;//반복문에서 탈출한다.
	//	if (input > 1000) {
	//		printf("입력한 정수가 1000보다 큽니다. 다시 입력하세요.\n");
	//		continue;//조건식으로 다시 돌아간다.
	//	}
	//	if (input % 3 == 0)
	//		printf("입력한 정수 %d는 3의 배수입니다.\n", input);
	//	else
	//		printf("입력한 정수 %d는 3의 배수가 아닙니다.\n", input);
	//}

	//수업시간에 퀴즈 봤던 문제: n이 소수인지 아닌지 확인하는 코드.
	//int i = 2, isPrime = 1, n = 9;
	//while (i < n) {
	//	if (n%i == 0) {
	//		isPrime = 0;
	//		break;
	//	}
	//	i++;
	//}
	//if (isPrime)
	//	printf("n은 소수\n");
	//else
	//	printf("n은 소수가 아님.\n");

	//반복문의 여러 패턴에 대해 공부해보자.
	//1에서 100까지의 정수의 합을 구하시오.
	//int sum = 0, i = 1;
	//while (i <= 100) {
	//	//sum = sum + i;
	//	//i++
	//	//sum = sum + i++;
	//	sum += i++;
	//}
	//printf("the sum is %d\n", sum);

	/*
	structured programming (구조적 프로그래밍)
	프로그램 작성과 분석이 용이하기 위해 제안된 프로그램 작성 방법
	기본적인 블록의 체계로 프로그램 작성
	블록을 들어가는 입구는 하나, 블록을 나가는 출구는 여러 개

	이것에 반하는 문법이 goto인데, 절대로 goto 쓰지마! 다른 사람이 이해할 수 없어..
	*/

	//두 정수의 최대공약수 구하기
	//최대 공약수: 약수 중 공통된 것의 가장 큰 수. 두 정수에서 나눴을 때 나누어 떨어지면서 가장 큰 수.
	//유클리드 호제법 알고리즘 이용.
	//숙제. 다음시간 퀴즈.

	int num1, num2;
	int big, small, rest;

	printf("두 수를 입력하시오.\n");
	printf("첫 번째 수 입력:");
	scanf_s("%d", &num1);
	printf("두 번째 수 입력:");
	scanf_s("%d", &num2);

	if (num1 < num2) {
		big = num2;
		small = num1;
	}
	else {
		big = num1;
		small = num2;
	}

	while (1) {
		rest = big % small;
		if (rest == 0) break;
		big = small;
		small = rest;
	}

	printf("최대공약수 : %d\n", small);


	printf("\n프로그램 종료!!!!!\n");
	//=====이 아래도 당분간 무시
}

//다음 시간까지 반복문 다 풀어서 제출해야해!