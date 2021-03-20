#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;
}

int main(void)
{
	int n,z,i,j;
	int sum_2 = 0;
	int sum = 0;
	int sum_1 = 0;
	int a[1005];
	scanf("%d",&n);
	for(i = 0;i < n;i++)
	{
		scanf("%d",&z);//输入人数
		
		//输入每个人所用的时间
		for(j = 0;j < z;j++)
		{
			scanf("%d",&a[j]);
		}
		
		qsort(a,n,sizeof(int),cmp);//升序排序数组
		
		sum = 0;
		sum_1 = 0;
		sum_2 = 0;
		
		while(z >= 4)
		{
			sum_1 = 2 * a[0] + a[z-2] + a[z-1];
			sum_2 = a[0] + 2 * a[1] + a[z-1];
			if(sum_1 < sum_2)
			{
				sum = sum_1;
			}
			else
			{
				sum = sum_2;
			}
			z -= 2;
		}
		if(z == 3)
		{
			sum += a[0] + a[1] + a[2];
		}
		else if(z == 2)
		{
			sum += a[1];
		}
		else if(z == 1)
		{
			sum += a[0];
		}
		else if(z == 0)
		{
			sum += 0;
		}
		printf("%d\n",sum);
	}
	return 0;
}
