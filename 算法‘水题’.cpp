#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d\n",&n);
	int nlz[n] = {};
	int zjz_1,zjz_2;
	for (int i = 0;i < n;i++)
	{
		scanf("%d",&zjz_1);
		nlz[i] = zjz_1;
	}
	
	for (int i = 0;i < n - 1;i++)
	{
		for(int j = 0;j<n - i - 1;j++)
		{
			if (nlz[j] < nlz[j+1])
			{
				zjz_2 = nlz[j];
				nlz[j] = nlz[j+1];
				nlz[j + 1] = zjz_2;
			} 
		}
	}
	
	int d = n/2;
	int zzz = 0;
	int zjsz[d] = {};
	for (int i = 0,j = 0;i < n;i += 2)
	{
		zjsz[j++] = nlz[i] - nlz[i + 1];
	}
	for (int i = 0;i < d;)
	{
		zzz += zjsz[i++];
	}
	printf("%d",zzz);
	
	return 0;
}
