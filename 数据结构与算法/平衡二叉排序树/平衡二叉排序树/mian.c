#include <stdio.h>
#include "Bvf.h"
int main()
{
	int i;
	int a[10] = { 3,2,1,4,5,6,7,10,9,8 };
	BiTree T = NULL;
	int taller;
	extern int nums1;
	extern int nums2;
	extern int nums3;
	extern int nums4;
	for (i = 0; i < 10; i++)
	{
		if (nums3 == 1)
		{
			break;
		}
		InsertAVL(&T, a[i],&taller);
		//InOrderTraverse(T);
		//printf("\n");
	}
	//InOrderTraverse(T);
	
	printf("\nnums1= %d ,nums2= %d ,nums3= %d ,nums4= %d ",nums1,nums2,nums3, nums4);
	return 0;
}