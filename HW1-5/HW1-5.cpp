#include "pch.h"
#include <iostream>
#include <string.h>

/*5. 메뉴를 출력하고, 사용자로부터 입력을 받아 선택된 메뉴를 출력하는 프로그램을 작성하시오.
choose one of the following.
apple
orange
banana
peach

enter your choice here : (사용자 입력)orange

--------------
Your choice is “orange”.*/

int main()
{
	char choice;

	printf("choose one of the following\n");
	printf("apple\n");
	printf("orange\n");
	printf("banana\n");
	printf("peach\n");
	printf("\n");

	printf("enter your choice here : ");
	scanf_s("%c", &choice);

	printf("\n");
	printf("----------\n");
	printf("your choice is ");

	switch (choice) {
	case 'a':
		printf("apple\n");
		break;
	case 'o' :
		printf("orange\n");
		break;
	case 'b' :
		printf("banana\n");
		break;
	case 'p' :
		printf("peach\n");
		break;
	default :
		printf("메뉴판에 없는 과일입니다.\n");
		break;
	}
	
}
