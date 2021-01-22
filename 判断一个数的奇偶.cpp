#include <stdio.h>

int main()
{
	int a,b;
	
	printf("请输入一个数。\n");
	scanf("%d",&a);
	b = a%2;
	if (b == 1)
	printf("奇数\n");
	else
	printf("偶数\n");
	return 0;
}
/*
判断一个数的奇偶。 
*/ 
