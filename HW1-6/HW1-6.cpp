
#include "pch.h"
#include <iostream>

/*6. 어떤 두 자리 수의 자릿수의 순서를 서로 바꾸는 프로그램을 작성하시오.
사용자 입력 : 한 개의 두 자리 정수
출력 : 자릿수의 순서가 반대로 된 정수*/

int main()
{
	int input, inverse;
	printf("두 자리 정수를 입력하시오. : ");
	scanf_s("%d", &input);

	inverse = ((input%10) * 10) + (int)(input/10);
	printf("출력 : %d\n", inverse);

}
