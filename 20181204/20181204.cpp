#include "pch.h"
#include <iostream>

//today's topic: structure
//"구성 요소" + 요소 간의 "관계"

//구조체 선언
typedef struct complex {
	//member variable
	double real;
	double imag;
} Complex;//구조체 선언은 반드시 세미콜론으로 끝내야 한다.

//typedef struct complex Complex; //자료형 "struct complex"를 앞으로 "Complex"라고 부르겠다.
//데이터 타입의 별명 선언
typedef int myintType;//자료형 "int"를 앞으로 "myintType"라고도 부르겠다.

//함수 : printComplex()
//입력 : 복소수
//출력 : 없음
//부수효과 : 없음
void printComplex(Complex* ptr) {//대부분의 경우, 구조체 포인터를 매개변수로 전달 받는다.
	printf("%f + j%f\n", ptr->real, ptr->imag);
}

//함수 : conjugate()
//입력 : 복소수(포인터)
//출력 : 없음
//부수효과 : 입력된 복소수의 켤레 복소수로 변환됨
void conjugate(Complex* ptr) {
	ptr->imag = (-1.f)*(ptr->imag);
}

//함수 : returnConjugate()
//입력 : 복소수 포인터
//출력 : 복소수 포인터
//부수효과 : 없음
Complex* returnConjugate(Complex* ptr) {
	Complex temp;
	Complex* tempPtr;
	tempPtr = (Complex *)malloc(sizeof(Complex));//동적 할당, Dynamic Allocation
	//majlloc(), free()
	tempPtr->real = ptr->real;
	tempPtr->imag = -1 * ptr->imag;
	return tempPtr;
	//temp.real = ptr->real;
	//temp.imag = ptr->imag;
	//return &temp;
}

Complex* returnSumComplex(Complex* a, Complex* b) {
	Complex* sum = (Complex *)malloc(sizeof(Complex));
	sum->real = a->real + b->real;
	sum->imag = a->imag + b->imag;
	return sum;
}

int main()
{
	//myintType count = 10;//int count = 10
	////구조체 변수 선언
	////struct complex a;
	//Complex a;
	//a.real = 10;//구조체 변수의 멤버 변수 접근 방법
	//a.imag = 20;//구조체 변수 이름.멤버변수이름
	//printComplex(&a);

	//구조체 포인터 변수 선언
	//Complex* ptr;
	//ptr = &a;
	//ptr->real = 100;
	//ptr->imag = 200;
	////구조체 포인터 변수의 멤버 변수 접근 방법
	////구조체 변수이름->멤버변수이름
	//printComplex(ptr);
	////conjugate(ptr);
	//printComplex(returnConjugate(ptr));


	Complex a, b;
	a.real = 10;
	a.imag = 20;
	b.real = 30;
	b.imag = 40;

	Complex* sum;
	sum = returnSumComplex(&a, &b);
	printComplex(sum);
}