/*
	1. 두 정수 사이에 모든 정수들(두 정수 포함)를 순서대로 화면에 출력하는 함수
	mmlab 강의일정의 함수 작성 방법 참고!
*/
#include "pch.h"
#include <iostream>

/*
	함수 이름 정하는 규칙
	1. 함수 이름은 소문자로 시작
	2. 함수의 첫 단어는 동사
	3. 두 단어 이상을 조합할 경우 두번째 이후 단어의 첫 글자는 대문자
*/

/*
함수 작성 방법 4. 함수 선언 설계
	함수: printNumber()
	입력: 두 정수
	출력: 없음
	부수효과: 없음
*/
void printNumber(int a, int b) {
	int count = a;
	while (count <= b) printf("%d\n", count++);
}

int main()
{
	/*
		함수 작성 방법
		1. 문제를 이해
		2. 특정한 예로 문제를 푸는 알고리즘 설계
		3. C언어로 구현
	*/
	/*
		int a = 3, b = 50;
		int count = a;
		while (count <= b) printf("%d\n", count++);
	*/
	printNumber(20, 100);
	printf("end of program\n");
}