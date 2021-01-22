#include <stdio.h>

void kuaipai(int *a,int z,int y);

void kuaipai(int *a,int z,int y)
{
	int i = z,j = y;
	int m = (i + j) / 2;
	int zjz;
	while(i <= j)
	{
		while(a[i] <= a[m])
		{
			i++;
		}
		while(a[j] >= a[m])
		{
			j--;
		}
		if(i <= j)
		{
			zjz = a[i];
			a[i] = a[j];
			a[j] = zjz;
			i++;
			j--;
		}
	}
	if(j < z)
	{
		kuaipai(a,z,j);
	}
	if(i > y)
	{
		kuaipai(a,i,y);
	}
}

int main(void)
{
	int n;
	scanf("%d",&n);
	
	int a[n];
	int zjz;
	for(int i = 0;i < n;i++)
	{
		scanf("%d",&zjz);
		a[i] = zjz;
	}
	
	kuaipai(a,0,n - 1);
	
	for(int i = 0;i < n;i++)
	{
		printf("%d ",a[i]);
	} 
	return 0;
}
