#include <stdio.h>

int main(void)
{
	long long int a[10000];
	long long int b[10000];
	long long int zjz;
	
	for(long long int i = 0;i < 10000;i++)
	{
		scanf("%d",&zjz);
		a[i] = zjz;
		if(a[i] == 0)
		break;
	}
	
	for(long long int i = 0,j = 9999;i < 10000;)
	{
		b[i++] = a[j--];
	}
	
	long long int k = 0,n;
	while(k < 9999)
	{
		if(b[k] != 0)
		{
			n = k;
			break;
		}
		k++;
	}
	
	for(long long int i = n;i < 10000;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
}
