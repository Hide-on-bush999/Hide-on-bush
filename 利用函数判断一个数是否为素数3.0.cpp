#include <stdio.h>

bool f(int a)
{
	int i;
	
	for (i = 2;i < a;i++)
	{
		if (a%i == 0)
		break;
	}
	if (a == i)
        return true;
    else
	    return false;
}

int g(int b)
{
	int c;
	for (c = 2;c <= b;c++)
	{
		if (f(c))
	    printf("%d\n",c);
	}
}

int main(void)
{
	int b,d;
	printf("请输入一个整数：");
	scanf("%d",&b);
	for (d = 2;d <= b;d++)
	g(d);
	
	return 0;
}
