#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d",&n);//输入人数 
	
	/*
	输入每个人接水所用的时间 
	*/ 
	
	int t[n] = {};
	int zjz;
	for (int i = 0;i < n;i++)
	{
		scanf("%d",&zjz);
		t[i] = zjz;
	}
	
	/*
	定义一个前置和数组 
	*/
	
	int t_1[n] = {};
	t_1[0] = t[0];
	for (int i = 1;i < n;i++)
	{
		t_1[i] = t_1[i - 1] + t[i];
	}

	int q;
	scanf("%d",&q);//输入询问次数
	
	
	/*
	输入区间上限和区间下限,并将每次输入后的时间存入到一个数组中 
	*/
	
	int l,r;
	int shijian[q] = {};
	for (int i = 0;i < q;i++)
	{
		scanf("%d %d",&l,&r);
		int cha = r - l + 1;
		for (int j = l - 1;j < r;j++)
		{
			shijian[i] += t_1[j];
		}
		if (l != 1)
		shijian[i] -= cha * t_1[l - 2];
	}
	
	int sj = 0;
	for (int i = 0;i < q;i++)
	{
		sj += shijian[i];
	}
	
	long long int zjz_1 = 1000000007;
	sj = sj % zjz_1;
	
	printf("%d",sj);
	return 0;
}
