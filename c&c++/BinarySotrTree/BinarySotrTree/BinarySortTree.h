#pragma once 
#include <stdio.h>
#include <stdlib.h>
typedef int Status;
#define FALSE 0
#define TRUE 1

typedef struct _TreeNode
{
	int val;
	struct _TreeNode *right;
	struct _TreeNode *left;
}BiNode, *BiTree;

void InOrderTraverse(BiTree T);
Status SearchBT(BiTree T, int key, BiTree f, BiTree *p);
Status InsertBt(BiTree *T, int key);
Status DeleteBt(BiTree *T);


