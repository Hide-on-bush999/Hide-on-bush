#include <stdio.h>

int f(void);

int main()
{
	int a = 50;
	printf("%d\n",a);
	a = f();
	printf("%d\n",a);
	
	return 0;
}
int f(void)
{
	return 10;
}
