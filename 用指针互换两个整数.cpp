#include <stdio.h>

int main(void)
{
	int a,b;
	int * p,* q,* t;
	printf("请输入两个整数，中间用空格隔开：");
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
