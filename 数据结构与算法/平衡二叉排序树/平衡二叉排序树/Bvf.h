#pragma once
#define LH 1
#define EH 0
#define RH -1
#define TRUE 1
#define FALSE 0
typedef struct _TNode
{
	int data;
	int bf; //Æ½ºâÒò×Ó
	struct _TNode *lchild, *rchild;
}BiNode,*BiTree;

void R_Rotate(BiTree *p);
void L_Rotate(BiTree *p);
void LeftBanlance(BiTree *T);
void RightBalance(BiTree *T);
int InsertAVL(BiTree *T, int e, int *taller);
void InOrderTraverse(BiTree T);