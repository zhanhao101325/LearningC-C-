#include "Bvf.h"
#include <stdio.h>
#include <stdlib.h>
int nums1 = 0;
int nums2 = 0;
int nums3 = 0;
int nums4 = 0;
void R_Rotate(BiTree *p)
{
	BiTree L;
	L = (*p)->lchild;
	(*p)->lchild = L->rchild;
	L->rchild = (*p);
	*p = L;
}

void L_Rotate(BiTree *p)
{
	BiTree L;
	L = (*p)->rchild;
	(*p)->rchild = L->lchild;
	L->lchild = (*p);
	*p = L;
}


void LeftBanlance(BiTree *T)
{
	BiTree L, Lr;
	L = (*T)->lchild;

	switch (L->bf)
	{
	case LH:
	{
		(*T)->bf = L->bf = EH;
		R_Rotate(T);
		break;
	}
	case RH:
	{
		Lr = L->lchild;
		switch (Lr->bf)
		{
		case LH:
		{
			(*T)->bf = RH;
			L->bf = EH;
			nums1++;
			break;
		}
		case EH:
		{
			(*T)->bf = L->bf + EH;
			break;
		}
		case RH:
		{
			(*T)->bf = EH;
			L->bf = LH;
			nums2++;
			break;
		}
		Lr->bf = EH;
		L_Rotate(&(*T)->lchild);
		R_Rotate(T);
		}

	}
	}
}

void RightBalance(BiTree *T)
{
	BiTree R, Rl;
	R = (*T)->rchild;
	switch (R->bf)
	{
	case RH:
		(*T)->bf = R->bf = EH;
		L_Rotate(T);
		break;
	case LH:
		Rl = R->lchild;
		switch (Rl->bf)
		{
		case RH:
			(*T)->bf = LH;
			R->bf = EH;
			nums3++;
			break;
		case EH:
			(*T)->bf = R->bf = EH;
			break;
		case LH:
			(*T)->bf = EH;
			R->bf = RH;
			nums4++;
			break;
		}
		Rl->bf = EH;
		R_Rotate(&(*T)->rchild);
		L_Rotate(T);
	}
	
}

int InsertAVL(BiTree *T,int e,int *taller)
{
	if (! *T)
	{
		*T = (BiTree)malloc(sizeof(BiNode));
		(*T)->lchild = (*T)->rchild = NULL;
		(*T)->data = e;
		(*T)->bf = EH;
		*taller = TRUE;
	}
	else
	{
		if (e == (*T)->data)
		{
			*taller = FALSE;
			return FALSE;
		}
		if (e < (*T)->data)
		{
			if (!InsertAVL(&(*T)->lchild, e, taller))
			{
				return FALSE;
			}
			if (*taller)
			{
				switch ((*T)->bf)
				{
				case LH:
					{
						LeftBanlance(T);
						*taller = FALSE;
						break;
					}
				case EH:
					{
						(*T)->bf = LH;
						*taller = TRUE;
						break;
					}
				case RH:
					{
						(*T)->bf = EH;
						*taller = FALSE;
						break;
					}
				}
			}
		}
		else
		{
			if (!InsertAVL(&(*T)->rchild, e, taller))
			{
				return FALSE;
			}
			if (*taller)
			{
				switch ((*T)->bf)
				{
				case LH:
				{
					(*T)->bf = EH;
					*taller = FALSE;
					break;
				}
				case EH:
				{
					(*T)->bf = RH;
					*taller = TRUE;
					break;
				}
				case RH:
				{
					RightBalance(T);
					*taller = FALSE;
					break;
				}
				}
			}
		}
	}
	return TRUE;
}

void InOrderTraverse(BiTree T)
{
	if (T != NULL)
	{
		InOrderTraverse(T->lchild);
		printf("%d\t", T->data);
		InOrderTraverse(T->rchild);
	}
}