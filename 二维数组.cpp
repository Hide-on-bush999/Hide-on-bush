#include <stdio.h>

int main(void)
{
	int a[3][4] = {
	    {1,2,3,4},
	    {11,12,13,14},
	    {121,122,123,124},
	};
	int i,j;
	for (i = 0;i < 3;i++)
	{
		for (j = 0;j < 4;j++)
        printf("%-5d ",a[i][j]);
        printf("\n");
	}
	
	return 0;
}
/*
%-5d表示输出时空五个字节 
*/ 
