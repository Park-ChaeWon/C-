#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
typedef struct Tree {
	int data;
	struct Tree* left;
	struct Tree* right;
}tree;
void input(tree** root) {
	tree* move = (*root); //위치 이동
	tree* move2 = NULL; //부모의 위치
	int data; printf("숫자입력 : "); scanf("%d", &data);
	while (move != NULL) {//부모의 위치를 찾기 위한 반복문
		if (move->data == data) {
			printf("중복불가 \n");
			return;
		}
		move2 = move;
		if (move->data > data) move = move->left;
		else  move = move->right;
	}//end while
	tree* newnode = (tree*)malloc(sizeof(tree));
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	if (move2 != NULL) { //root가 있을 경우
		if (move2->data > data) move2->left = newnode;
		else move2->right = newnode;
	}
	else {//root 가 없을 경우
		(*root) = newnode;
	}
}
void disp(tree* move) {
	//중위
	if (move->left != NULL) disp(move->left);
	printf("%d ", move->data);
	if (move->right != NULL) disp(move->right);
}
/* 전위
void disp(tree* move) {
printf("%d ", move->data);
if (move->left != NULL) disp(move->left);
if (move->right != NULL) disp(move->right);
}
*/
/* 후위
void disp(tree* move) {
if (move->left != NULL) disp(move->left);
if (move->right != NULL) disp(move->right);
printf("%d ", move->data);
}
*/
void main() {
	/*
	트리 : 수의 계산식, 정렬, 탐색
	->N개의 노드를 연결
	이진 트리(BST) :2개의 노드를 연결, 데이터 적을 때 빠르게 탐색, 수의 계산식 //작은 값은 왼쪽, 큰값은 오른쪽에
	일반 트리 : N개의 노드를 연결, 데이터 저장
	*/
	tree* root = NULL;//시작점
	int select = 0;
	while (select != 3) {
		printf("1.노드추가 2.노드출력 3.종료");
		printf("선택 : "); scanf("%d", &select);
		switch (select) {
		case 1:
			input(&root);
			break;
		case 2:
			disp(root);
			break;
		case 3:
			printf("종료 \n");
			break;
		default:
			break;
		}
	}
}