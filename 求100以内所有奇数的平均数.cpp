#include <stdio.h>

int main(void)
{
	int a,sum;
	int sum22;
//	b = 0;

	printf("%d\n", sum22);
	for (int i = 0;i <= 100;++i)
	{
		if(i%2 == 1){
			a = a + i;
			sum22++;
		}
	}
	printf("%d %d\n",a,sum22);
	sum = a/sum22;
	printf("sum = %d\n",sum);
	return 0;
}
/*
求100以内所有奇数的平均数 
*/
