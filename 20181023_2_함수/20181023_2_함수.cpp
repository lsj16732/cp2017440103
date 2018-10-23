#include "pch.h"
#include <iostream>

int gVar = 100; //전역변수(global variable) 선언

/*
Today's Topic : 함수(function)

컴퓨터의 기본 기능(메모리접근, 연산, 순서제어)과 관한 C문법은 이미 다 배움!
하지만 이 3가지로만 문제를 풀기에는 너무 복잡해진다.
printf와 같은 기능을 실행하는 데에도 엄청나게 긴 코드가 필요한데,
이를 그대로 복붙해서 쓸 수 없으니 요약화된 함수인 printf를 가져와서 사용
이와 같은 메커니즘을 ...

	!!! 요약화(추상화, Abtraction) !!!
	1. 절차적 요약화 : 함수
	2. 선언적 요약화 : 구조체

자바의 클라스(객체) 개념은 함수와 구조체를 하나로 감싼 것!
*/

/*
함수 sum(). 함수는 뒤에 ()를 붙혀서 함수임을 표시해준다.
입력: 두 정수
출력: 두 정수의 합
부수효과: 없음
*/

////////////////함수 정의 = 함수 선언 + 함수 본체////////////////////
int sum(int a, int b) {//함수 선언
	/*
		<함수 선언>
	1. 함수 이름 : sum()
	2. 매개변수의 갯수 : 2개
	2. 매개변수의 자료형 : int, int
	4. 반환값의 자료형(=반환형) : int
	-> 이 4개의 정보는 함수를 호출하기 위해 필요한 정보이다!
	*/

	//함수 본체//
	int c;
	c = a + b;
	return c;
	////////////
}
//////////////////////////////////////////////////////////////////////

/*
	//유효범위//

	모든 식별자(symbol)은 유효 범위가 있다.
	모든 변수의 유효 범위는 변수가 선언된 함수 내부이다.
	즉, main()에서 선언된 x, y, z는 sum()함수 내에서 사용할 수 없다!!
	전역 변수(global variable) : 변수의 유효 범위가 소스 코드 전체인 변수이다.
	아예 소스코드 가장 위에서 선언하면 된다.
	하지만, 코드 작성할 때 전역변수 절대 쓰지 마!! 코드 이해하기 굉장히 어려워진다.
*/

/*
	//상태도//
	
	변수를 위한 메모리 공간이 언제, 어떻게 사용되는지 표시한다.
	변수의 자료형, 변수 이름, 변수의 값을 나타내는 그림이다. 포인터 할 때 유용.

	 int
   |------|
x: |  10  |
   |------|
*/

/*
	//매개변수 전달 매커니즘//

	상태도를 이용해서 표현한다.
	z = sum(x, y); 이 문장이 실행되면 무슨 일이 일어날까?
	1. 메모리 어딘가 추가적으로 매개 변수를 위한 공간을 확보한다.
	2. 그리고 원래 있던 x, y의 값을 새로운 공간에 복사한다.
	3. 함수 선언문에서 지정해준 매개 변수의 이름을 새로운 공간에 복사한다.
	4. 함수 내부에서 선언되는 지역 변수를 위한 공간이 추가적으로 생성된다.
	5. 함수 내부의 연산은 main()에서 선언한 변수의 메모리 공간에 접근하는 것이 아닌,
	새로 만들어진 변수 공간에 접근하는 것이다.
	6. 반환값(c)이 어딘가에 복사가 된다. (구름과 같아...)
	7. 함수가 끝나게 되면 새롭게 만들었던 메모리 공간들(a, b, c)이 소멸되게 된다.
	(소멸이라는 뜻은, 메모리 공간을 이제 다른 용도로 사용할 것이라는 뜻.)
	8. 복사된 반환값이 z에 대입이 된다. 따라서 z 공간의 값이 반환값이 된다.

	sum() 내부에서 a = 100을 한다고 해서 main()의 x값에는 영향을 미치지 않는다. 둘은 달라!

*/

/*
	//변수의 존재 기간 (life time)//

	상태도를 이용해서 이를 표현할 수 있음.
	변수가 언제 생성되고 언제 소멸되는지를 표현해~

	매개변수는 함수가 실행되면 생성되고 함수가 끝나면 소멸돼
		-> 이러한 변수를, automatic variable

	static : 함수가 만들어지고 종료되어도 생성되거나 없어지지 않고,
	처음 코드가 실행될 때부터 공간을 확보해서 계속 사용!
	지역변수지만 메모리 공간이 함수 끝나도 사라지지 않아.
*/

/*
	디버거: 코드를 한줄한줄 실행시킬 수 있어.
	종류 1. step into (F11): 함수 내부로 들어가.
	종류 2. step over (F10): 함수를 알아서 건너 뛰어.
	변수의 현재 값을 각 줄별로 확인할 수 있다.
	메모리가 어떤 상태인지도 볼 수 있다.

*/

//함수가 리턴값이 없을 수 있다.
//함수 : goodPrint()
//입력 : 없음
//출력 : 없음
//부수효과 : 화면에 good 출력
void goodPrint() {
	printf("good\n");
}

int main()
{
	int x = 10, y = 20, z;
	z = sum(x, y);//함수 호출
	printf("z = %d\n", z);
	goodPrint();
}

//다음 시간 퀴즈는 외우는 퀴즈가 많이 나올 예정!
//함수 정의같은거 외우고 있어요~