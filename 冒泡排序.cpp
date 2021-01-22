#include <stdio.h>

int main(void)
{
	int i,j;
	int a;
	int n = 7;
	int A[n] = {6,8,2,4,7,9,33}; //定义一个数组 
	for (i = 0;i < n - 1;i++)
	{
		for(j = 0;j<n - i - 1;j++)
		{
			if (A[j] < A[j+1])
			{
				a = A[j];
				A[j] = A[j+1];
				A[j + 1] = a;
			} 
		}
	}
	for (i = 0;i < n;i++)
	{
		printf("%d ",A[i]);
	}
	return 0;
}
/*
冒泡排序法 
*/ 
