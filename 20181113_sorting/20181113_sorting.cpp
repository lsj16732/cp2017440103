#include "pch.h"
#include <iostream>

//함수 : findMinindex()
//입력 : 배열(배열 이름, 배열 길이)
//출력 : 최소값의 인덱스
int findMinIndex(int* arr, int len, int start) {
	int min = arr[start];
	int minindex = start;
	for (int i = start+1; i < len; i++) {
		if (arr[i] < min) {
			min = arr[i];
			minindex = i;
		}
	}
	return minindex;
}

//배열에서 두 수의 위치 바꾸기
//매개변수 : 배열, 바꿀 인덱스 2개
void swapArr(int* arr, int index1, int index2) {
	int temp = arr[index1];//1번의 값을 임시저장
	arr[index1] = arr[index2];//1번 자리에 2번 값을
	arr[index2] = temp;//2번 자리에 임시 저장한 1번 값을
}

void printArr(int* arr, int len) {
	printf("arr: ");
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/*
	Selection Sorting
	1. 제일 작은 값을 찾는다.
	2. 맨 처음 값과 최솟값의 위치 swap
	3. 범위 하나씩 줄여가면서 반복
	4. 한 칸 남으면 끝
*/

//정렬
void sort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		int minindex = findMinIndex(arr, len, i);//정렬되지 않은 부분에서 최솟값 찾아
		swapArr(arr, minindex, i);//최솟값과 가장 처음값을 교환
		len--;//정렬되지 않은 부분 길이 감소
	}
}

int main()
{
	int arr[5] = { 30, 35, 27, 15, 40 };
	int min = findMinIndex(arr, 5, 0);
	printf("min : %d\n", arr[min]);

	//printArr(arr, 5);
	//swapArr(arr, 2, 3);
	//printArr(arr, 5);

	printArr(arr, 5);
	sort(arr, 5);
	printArr(arr, 5);


}