#include <stdio.h>
#include <stdlib.h>
#include "BinarySortTree.h"
//#include <stdlib.h>

void InOrderTraverse(BiTree T)
{
	if (T != NULL)
	{
		InOrderTraverse(T->left);
		printf("%d\t", T->val);
		InOrderTraverse(T->right);
	}
}

Status SearchBT(BiTree T, int key, BiTree f, BiTree *p)
{
	if (!T)
	{
		*p = f;
		return FALSE;
	}
	else
	{
		if (T->val == key)
		{
			*p = T;
			return TRUE;
		}
		else if (T->val > key)
		{
			return SearchBT(T->left, key, T, p);
		}
		else
			return SearchBT(T->right, key, T, p);
	}
}



Status InsertBt(BiTree *T, int key)
{
	BiTree s = (BiTree)malloc(sizeof(BiNode));
	BiTree p = NULL;
	if (!SearchBT(*T, key, NULL, &p))
	{
		//BiTree s = (BiTree)malloc(sizeof(BiNode));
		s->val = key;
		s->left = NULL;
		s->right = NULL;
		if (!p)
		{
			*T = s;
		}
		else if (p->val > key)
		{
			p->left = s;
		}
		else
			p->right = s;
		return TRUE;
	}
	else
	{
		printf("节点已经存在！\n");
		return FALSE;
	}
}