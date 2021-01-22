#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	
	int t;
	int a[n];
	for (int i = 0;i < n;i++)
	{
		scanf("%d",&t);
		a[i] = t;
	}
	
	int z,x;
	for (int i = 0;i < n;i++)
	{
		z = a[i];
		x = z % 2;
		if (x == 0)
		printf("suantou\n");
		else
		printf("huaye\n");
	}
	return 0;
}
