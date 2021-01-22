#include <stdio.h>
#include <malloc.h>//引入malloc函数库 

int main(void)
{
	int n,m;
	int * a;
	
	printf("请输入您想要定义的一维数组的元素个数：");
	scanf("%d",&n);
	a = (int *)malloc(sizeof(int) * n);//定义一个动态的一维数组，前面的括号表示变量的类型，后面的括号表示字节长度 
	printf("请输入您想要定义的一维数组的各个元素，每个元素之间用回车换行：\n");
	for (int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n请输入想要重新定义的一维数组的元素个数：");
	scanf("%d",&m);
	realloc(a,sizeof(int) * m);//更改动态一维数组的字节长度，逗号前边的为要更改的变量名，逗号后边的为更改后的字节长度 
	printf("请输入您想要重新定义的一维数组的各个元素，每个元素之间用回车换行：\n");
	for (int i = 0;i < m;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0;i < m;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
