#include "pch.h"
#include <iostream>

int main()
{
	/*
	<반복문>
	
	1. 루프 변수 초기화
	2. 조건식
	3. 루프문
	4. 루프 변수 변화
	*/

	int count;

	count = 1;//1. 루프 변수 초기화
	while (count <= 10) {//2. 조건식
		printf(" ... ");//3. 루프문
		count++;//4. 루프 변수 변화
	}

	//위의 while문을 for문으로 바꾸면?
	for (count = 1; count <= 10; count++) {
		//1. 루프 변수 초기화 ; 2. 조건식 ; 4. 루프 변수 변화
		printf(" ... ");//3. 루프문
	}

	//while문보다 for문이 제약이 더 많아. 즉, while문이 좀더 일반적이다.
	//for문은 ()안에서 새로운 변수를 선언할 수 있어.
	//do while 필요 없어 쓰지마!!
}