#include "pch.h"
#include <iostream>

void swap(int* ptr1, int* ptr2) {//포인터 변수(주소값)를 받는다.
	int temp = *ptr1;//temp에 ptr1값 임시저장
	*ptr1 = *ptr2;//ptr1에 ptr2값 저장
	*ptr2 = temp;//ptr2에 임시 저장해둔 ptr1값 저장
}

int main()
{
	int a = 100, b = 200;
	//swap : 변수 a, b의 값을 바꾼다.
	/*
	int temp;
	temp = a;
	a = b;
	b = temp;
	*/
	printf("before swap a=%d b=%d\n", a, b);
	swap(&a, &b);//변수 a의 주소와 b의 주소를 던져줘 -> 함수에서 변수 a,b에 접근
	printf("after swap a=%d b=%d\n", a, b);
	
	return 0;
}