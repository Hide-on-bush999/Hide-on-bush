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
	f(&a,&b);
	printf("a=%d b=%d",a,b);
	return 0;
}
