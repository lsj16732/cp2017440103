
#include "pch.h"
#include <iostream>

void test(int a) {
	a = 100;
}
/*
	매개변수를 위한 공간 a 생성
	공간 a에 값 10을 복사한다.
	새로 만든 공간 a에 100을 넣는다.
	함수가 끝나면 이 공간이 사라진다.
	따라서 main()의 a는 값이 변화하지 않아!!
*/

/*
	포인터를 매개변수로 해서 함수 안에 던지는 방법
*/
void testPointer(int* ptr) {
	*ptr = 100;
}
/*
	매개변수를 위한 공간 int* ptr 생성
	매개변수 값을 복사. 그 값이 &a(=address of a)!!
	이 포인터 주소 값을 이용해서 main()의 a에 접근할 수 있어.
*/

int main()
{
	int a = 10;
	test(a);
	printf("a = %d\n", a);//a는 100으로 바뀌지 않아!! 10이야!!
	//*&a = a

	//포인터를 매개변수값으로 전달
	testPointer(&a);//a의 포인터를 전달했으므로 a값 변경 가능
	printf("a = %d\n", a);//a가 100으로 바뀐다.

	return 0;
}