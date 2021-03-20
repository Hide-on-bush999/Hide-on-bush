#include <stdio.h>

int main(void)
{
	int n,middle;
	int a[101],b[101];
	while(1)
	{
		int e = 1;
		scanf("%d",&n);
		if (n == 0)
		{
			break;
		}
		for (int i = 0; i < n; i++)
		{
			scanf("%d %d",&a[i],&b[i]);
		}
		for (int i = 0;i < n - 1;i++)
		{
			for(int j = 0;j < n - i - 1;j++)
			{
				if (b[j] > b[j+1])
				{
					middle = b[j];
					b[j] = b[j+1];
					b[j + 1] = middle;
					middle = a[j];
					a[j] = a[j+1];
					a[j + 1] = middle;
				}
			}
		}
		for (int i = 1,j = 0; i < n;)
		{
			if (b[j] <= a[i])
			{
				e++;
			}
			else
			{
				middle = b[j];
				b[j] = b[j+1];
				b[j + 1] = middle;
			}
			i++;
			j++;
		}
		printf("%d\n",e);
	}
	return 0;
}
