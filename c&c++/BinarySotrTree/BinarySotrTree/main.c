#include "BinarySortTree.h"
#define N 5
int main()
{
	BiTree T = NULL;
	InsertBt(&T, 5);
	InsertBt(&T, 1);
	InsertBt(&T, 6);
	InsertBt(&T, 2);
	InsertBt(&T, 8);
	InOrderTraverse(T);
	//Status SearchBT(BiTree T, int key, BiTree f, BiTree *p);
	//Status InsertBt(BiTree *T, int key);

	


	return 0;
}