#include <stdio.h>

int main(void)
{
	double sum,i,a;
	sum = 0;
	a = 1;
	for (double i = 1;i <= 100;++i)
	{
		a = 1/i;
		sum = sum + a;
	}
	printf("sum = %f\n",sum);
	return 0;
}
