#include <stdio.h>

int main(void)
{
	int i,sum;
	for (int i = 0;i <= 100;++i)
	{
		if(i%2 == 1)
		sum = sum + i;
	}
	printf("sum = %d\n",sum);
	return 0;
}
/*
求100以内的所有奇数之和。 
*/
