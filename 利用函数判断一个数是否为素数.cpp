#include <stdio.h>

bool z(int val)
{
    int i;
    for (i=2;i<val;i++)
	{
	    if (val%i == 0)
	    break;
	}
	if (val == i)
	return true;
 	else
	return false;
}
    
int main(void)
{
	int a;
	printf("请输入一个数:");
	scanf("%d",&a);
	if(z(a))
	printf("YES!\n");
	else
	printf("NO!\n");
	return 0;
}
