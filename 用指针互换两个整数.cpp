#include <stdio.h>

int main(void)
{
	int a,b;
	int * p,* q,* t;
	printf("�����������������м��ÿո������");
	scanf ("%d %d",&a,&b);
	p = &a;
	q = &b;
	if (a < b)
	{
		t = p;
		p = q;
		q = t;
	}
	printf("max=%d min=%d",*p,*q);
	return 0;
} 
