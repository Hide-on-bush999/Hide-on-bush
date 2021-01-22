#include <stdio.h>

void f(int * p,int n)
{
	int i;
	for (i = 0;i < n;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}

int main(void)
{
	int a[6] = {1,5,8,6,4,3};
	int b[4] = {11,54,32,55};
	int c[5] = {12,13,16,19,20};
	f(a,6);
	f(b,4);
	f(c,5);
	return 0;
}
