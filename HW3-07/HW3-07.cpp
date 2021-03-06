/*
	7. 정수 배열의 합을 반환하는 함수
*/

#include "pch.h"
#include <iostream>

/*
	함수 이름: addArray()
	입력 : 배열
	출력 : 배열 각 요소들의 합
	부수효과 : 없음
*/

int addArray(int arr[], int length) {
	int sum = 0;
	int index = 0;
	
	while (index < length) {
		sum += arr[index++];
	}

	return sum;
}

int main()
{
	int arr[4] = { 10, 20, 30, 40 };
	int length = 4;
	
	/*
	int sum = 0;
	int index = 0;

	while (index < length) sum += arr[index++];

	printf("sum : %d\n", sum);
	*/

	printf("sum : %d\n", addArray(arr, length));
	printf("==프로그램 종료==\n");
}