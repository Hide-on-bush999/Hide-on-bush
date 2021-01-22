#include <stdio.h>

int main(void)
{
	int a[5] = {32,88,66,56,21};
	int n = 5;
	int t;
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n ;j++)
		{
			if (a[i] < a[j])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
/*
Ñ¡ÔñÅÅÐò·¨ 
*/ 
