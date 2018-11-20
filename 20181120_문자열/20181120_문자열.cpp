#include "pch.h"
#include <iostream>
#include <string.h>

void printArr(char* arr, int len) {
	printf("arr: ");
	for (int i = 0; i < len; i++) {
		printf("%c ", arr[i]);
	}
	printf("\n");
}

int main()
{
	char c;//1비트 문자열
	c = 'A';
	printf("c=%d\n", c);//'A'를 표현하는 아스키 코드 출력
	printf("c=%c\n", c);//아스키 코드를 이용해서 A 문자 출력

	char a[] = { 'h', 'e', 'l', 'l', 'o'};
	printArr(a, 5);
	//문자의 길이를 매번 넘기지 않기 위해 문자 가장 끝은 0을 넣어서 문자열의 끝임을 구분하도록 한다.

	//string library

	//문자열, string
	char b[] = "hello";
	printf("%s \n", b);
	printf("the length of string is %d \n", strlen(b));
	//string 길이 반환

	char str1[50] = "hello";
	char *str2 = "world";
	strcat(str1, str2);
	printf("%s \n", str1);
}