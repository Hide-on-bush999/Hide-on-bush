#include <stdio.h>

int f(int a)
{
	int i,j;
	for (i = 2;i <= a;i++)
	{
		for(j = 2;j < i;j++)
		{
			if (i%j == 0)
		    break;
		}
		if (i == j)
		printf("%d\n",i);
	}
}

int main(void)
{
	int c;
	printf("������һ������:");
	scanf("%d",&c);
	f(c);
	return 0;
}
