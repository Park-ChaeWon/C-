#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
typedef struct Tree {
	int data;
	struct Tree* left;
	struct Tree* right;
}tree;
void input(tree** root) {
	tree* move = (*root); //��ġ �̵�
	tree* move2 = NULL; //�θ��� ��ġ
	int data; printf("�����Է� : "); scanf("%d", &data);
	while (move != NULL) {//�θ��� ��ġ�� ã�� ���� �ݺ���
		if (move->data == data) {
			printf("�ߺ��Ұ� \n");
			return;
		}
		move2 = move;
		if (move->data > data) move = move->left;
		else  move = move->right;
	}//end while
	tree* newnode = (tree*)malloc(sizeof(tree));
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	if (move2 != NULL) { //root�� ���� ���
		if (move2->data > data) move2->left = newnode;
		else move2->right = newnode;
	}
	else {//root �� ���� ���
		(*root) = newnode;
	}
}
void disp(tree* move) {
	//����
	if (move->left != NULL) disp(move->left);
	printf("%d ", move->data);
	if (move->right != NULL) disp(move->right);
}
/* ����
void disp(tree* move) {
printf("%d ", move->data);
if (move->left != NULL) disp(move->left);
if (move->right != NULL) disp(move->right);
}
*/
/* ����
void disp(tree* move) {
if (move->left != NULL) disp(move->left);
if (move->right != NULL) disp(move->right);
printf("%d ", move->data);
}
*/
void main() {
	/*
	Ʈ�� : ���� ����, ����, Ž��
	->N���� ��带 ����
	���� Ʈ��(BST) :2���� ��带 ����, ������ ���� �� ������ Ž��, ���� ���� //���� ���� ����, ū���� �����ʿ�
	�Ϲ� Ʈ�� : N���� ��带 ����, ������ ����
	*/
	tree* root = NULL;//������
	int select = 0;
	while (select != 3) {
		printf("1.����߰� 2.������ 3.����");
		printf("���� : "); scanf("%d", &select);
		switch (select) {
		case 1:
			input(&root);
			break;
		case 2:
			disp(root);
			break;
		case 3:
			printf("���� \n");
			break;
		default:
			break;
		}
	}
}