
#include "pch.h"
#include <iostream>

int main()
{
	int a = 10;
	int* ptr;//포인터 변수 선언
	/*
	int*를 새로운 자료형으로 생각해!
	ptr: 포인터 변수
	int* 는 변수 안에 값이, int 변수를 가리키는, 메모리 주소가 저장된다는 뜻이다.
	*/
	/*
		C에서 포인터 의미
		1. 메모리 주소
		2. 메모리 주소를 시작으로 하는 값의 자료형
		해당 메모리 주소에서 시작해서 몇 칸까지가 그 변수인지 ~~
	*/
	ptr = &a;//"Address of" a

	/*
		&(Ampersand)
		&a = address of a(변수 a의 주소)

		하나의 변수에는 4개의 집이 들어있어.(100번지 101번지 102번지 103번지)
		그런데 C에서 &a는 가장 앞에 집의 주소를 뜻하는거야~(100번지)
	*/

	*ptr = 20;//"Data of" ptr
	printf("a=%d\n", a);
	//Quiz : 상태도 그려 !!!

	return 0;
}