#include <stdio.h>

int main(void)
{
	int i,n,f1,f2,f3;
	f1 = 3;
	f2 = 3;
	printf("请输入一个数:");
	scanf("%d",&n);
	
	if (n == 1)
	printf("f3 = 3");
	else if(n == 2)
	printf("f3 = 3");
	else
	{
		for (i = 3;i <= n;i++)
		{
			f3 = f1 + f2;
			f1 = f2;
			f2 = f3;
		}
		printf("%d",f3);
	}
	
	return 0;
}
/*
斐波拉契数列 
*/
