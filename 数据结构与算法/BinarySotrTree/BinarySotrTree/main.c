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
	printf("\n");
	//Status SearchBT(BiTree T, int key, BiTree f, BiTree *p);
	//Status InsertBt(BiTree *T, int key);
	int flag = DeleteBt(&T, 2);
	//int flag = DeleteBt(&T, 3);
	if (flag == 1)
	{
		printf("É¾³ý³É¹¦\n"); 
	}
	else
	{
		printf("É¾³ýÊ§°Ü\n");
	}
	
	InOrderTraverse(T);

	return 0;
}