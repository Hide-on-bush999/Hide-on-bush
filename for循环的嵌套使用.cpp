#include <stdio.h>

int main(void)
{
	int a,b,c,d,e;
	b = 0;
	c = 1;
    e = 1000000000;
	for (a = 1;a <= 4;a++)
	{
		b += 1;
		c *= 3;
		printf("%d %d\n",b,c);
		for (d = 1;d <= 2;d++)
		{
			e /= 2;
			printf("%d\n",e);
		}
	}
	return 0;
}
