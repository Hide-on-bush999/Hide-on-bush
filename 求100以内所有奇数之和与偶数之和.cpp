#include <stdio.h>

int main(void)
{
	int i,a = 0,b = 0;
	for (i = 1;i <= 100;++i)
	{
		if (i%2 == 0)
		{
			a = a + i;
		}
		if (i%2 == 1)
		{
			b = b + i;
		}
	}
	printf("a = %d\nb = %d\n",a,b);
	return 0;
}
/*
求100以内的奇数之和与偶数之和 
*/
