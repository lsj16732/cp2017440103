#include "pch.h"
#include <iostream>

#define MAX_SIZE 100

//정렬된 배열에서 자리에 맞게 값을 넣는다.
void insertElement(int* arr, int *length, int element) {
	arr[*length] = element;
	int temp;
	for (int i = *length-1; i >= 0; i--) {
		if (arr[i+1] < arr[i]) {
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
		else {
			break;
		}
	}
	(*length)++;
}

void insertSort(int *arr, int length) {
	int tempArr[MAX_SIZE] = { 0 };
	int tempLength = 0;
	for (int i = 0; i < length; i++) {
		insertElement(tempArr, &tempLength, arr[i]);
	}
	for (int i = 0; i < length; i++) {
		arr[i] = tempArr[i];
	}
}

void printArr(int* arr, int len) {
	printf("arr: ");
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[MAX_SIZE] = { 2, 1, 5, 4, 9 };
	int length = 5;
	printArr(arr, length);
	//insertElement(arr, &length, 3);
	insertSort(arr, length);
	printArr(arr, length);
}