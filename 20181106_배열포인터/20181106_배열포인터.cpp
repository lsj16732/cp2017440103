#include "pch.h"
#include <iostream>

/*
printArray
입력 : 배열
출력 : 없음
부수효과 : 화면에 배열을 출력
*/
void printArray(int arr[], int length) {
	int index;
	for (index = 0; index < length; index++) {
		printf("array[%d] = %d\n", index, arr[index]);
	}
}

int main()
{
	int a[3] = { 10, 20, 30 };//배열의 선언 : 배열 이름 a, 배열 길이 3

	/*
		배열과 포인터는 엄청 관련이 있다!
	*/
	int* ptr;
	//배열의 이름만 사용하면 그 배열 첫 요소의 포인터값(주소값)이 된다.
	ptr = a;//무슨 의미? ptr = &a[0];
	printf("a[0]=%d\n", *ptr);
	printf("a[0]=%d\n", *a);
	printf("a[0]=%d\n", a[0]);
	printf("a[0]=%d\n", ptr[0]);//포인터 변수 이름을 배열 이름으로 사용할 수 있다.
	//전부 똑같은 결과야~
	printf("a[1]=%d\n", ptr[1]);
	printf("a[1]=%d\n", ptr[2]);

	printArray(a, 3);//지난 시간에 만든 함수 ~~

	return 0;
}