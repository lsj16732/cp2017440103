#include "pch.h"
#include <iostream>

//Linked List 연습
typedef struct node {
	int score;
	struct node* pNext;
} Node;

//연결리스트 구조체 선언
typedef struct linkedlist {
	Node* pHead;
	Node* pTail;
	int nNode;//노드의 갯수
} LinkedList;


//함수: printLL() 화면에 연결리스트의 score값을 출력
//입력: 연결리스트
//출력: 없음
//부수효과: 없음
void printLL(LinkedList *pList) {
	Node* temp = pList->pHead;
	printf("=====================\n");
	while (temp != NULL) {
		printf("score = %d\n", temp->score);
		temp = temp->pNext;
	}
	printf("노드의 수 = %d\n", pList->nNode);
	printf("=====================\n");
	printf("\n");
}

//함수 : createNode()
//입력 : 성적
//출력 : 노드 하나를 동적 할당으로 생성하여 반환한다. 이 때, score=입력, pNext=NULL로 한다.
//부수효과 : 없음
Node* createNode(int input) {
	Node* ptr;
	ptr = (Node*)malloc(sizeof(Node));
	ptr->score = input;
	ptr->pNext = NULL;
	return ptr;
}

//함수 : addHead()
//입력 : 연결리스트 구조체 포인터(LinkedList*), 새 노드 포인터
//출력 : 없음
//부수효과 : 연결리스트 헤드에 새 노드를 추가.
void addHead(LinkedList *pList, Node* pNewNode) {
	if (pList->pHead == NULL) {//리스트가 없는 경우
		pList->pHead = pNewNode;
		pList->pTail = pNewNode;
		(pList->nNode)++;
		return;
	}

	//리스트가 있는 경우
	pNewNode->pNext = pList->pHead;
	pList->pHead = pNewNode;
	(pList->nNode)++;//우선순서 헷갈리면 무조건 괄호 쓰세요~
}

//연결리스트 초기화 함수
void initLL(LinkedList* pList) {
	pList->pHead = NULL;
	pList->pTail = NULL;
	pList->nNode = 0;
}

//함수 averageLL()
//입력 : 연결리스트
//출력 : 노드 성적의 평균(double)
//부수효과 : 없음
void averageLL(Node *ptr) {
	int sum = 0;
	int count = 0;
	double average;

	while (ptr != NULL) {
		sum += ptr->score;
		count++;
		ptr = ptr->pNext;
	}

	average = (double)sum / count;//형변환
	//double로 캐스팅하지 않으면, int로 계산된 후에 double로 캐스팅되어서 값이 저장되므로
	//우리가 의도하는 값과 다른 결과를 얻게 된다.
	//피연산자 중 하나라도 double형이면 계산 결과가 double이 된다.
	//그러므로 sum을 double로 캐스팅하고 계산하면 된다.
	printf("평균은 %f 입니다.\n", average);

}

//함수 : returnTail()
//입력 : 연결리스트 (연결리스트의 헤드노드 포인터)
//출력 : 마지막 노드의 포인터
//부수효과 : 없음
Node* returnTail(Node* ptr) {
	if (ptr == NULL) return NULL;//연결리스트에 아무것도 없는 경우

	while (ptr->pNext != NULL) {
		if (ptr->pNext == NULL) return ptr;//마지막 노드 도달
		ptr = ptr->pNext;
	}
}

//함수 : addTail()
//입력 : 연결리스트, 추가하려는 노드 포인터
//출력 : 없음
//부수효과 : 추가하려는 노드가 연결리스트의 tail로 추가됨.
void addTail(Node** pHead, Node* pNode) {
	//문제 : pHead가 NULL인 경우
	//프로그래밍할 때 boundary condition을 잘 따져야 한다.
	if (*pHead == NULL) {
		*pHead = pNode;
		return;
	}
	Node* pTail = returnTail(*pHead);
	pTail->pNext = pNode;
}
//교훈 : 프로그래밍할 때에는 다 자잘한 함수로 제작하라. 요약화!!!!

int main()
{
	LinkedList* pList;
	pList = (LinkedList*)malloc(sizeof(LinkedList));
	initLL(pList);
	printLL(pList);
	addHead(pList, createNode(10));
	printLL(pList);
	addHead(pList, createNode(20));
	printLL(pList);

	return 0;
}
