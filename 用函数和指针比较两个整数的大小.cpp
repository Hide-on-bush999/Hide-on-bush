#include <stdio.h>

void f(int * p,int * q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

int main(void)
{
	int a,b;
	printf("�����������������м��ÿո������");
	scanf("%d %d",&a,&b);
	if (a < b)
	f(&a,&b);
	printf("max=%d min=%d",a,b);
	return 0;
}
