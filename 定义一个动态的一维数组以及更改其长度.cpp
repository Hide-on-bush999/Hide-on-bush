#include <stdio.h>
#include <malloc.h>//����malloc������ 

int main(void)
{
	int n,m;
	int * a;
	
	printf("����������Ҫ�����һά�����Ԫ�ظ�����");
	scanf("%d",&n);
	a = (int *)malloc(sizeof(int) * n);//����һ����̬��һά���飬ǰ������ű�ʾ���������ͣ���������ű�ʾ�ֽڳ��� 
	printf("����������Ҫ�����һά����ĸ���Ԫ�أ�ÿ��Ԫ��֮���ûس����У�\n");
	for (int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n��������Ҫ���¶����һά�����Ԫ�ظ�����");
	scanf("%d",&m);
	realloc(a,sizeof(int) * m);//���Ķ�̬һά������ֽڳ��ȣ�����ǰ�ߵ�ΪҪ���ĵı����������ź�ߵ�Ϊ���ĺ���ֽڳ��� 
	printf("����������Ҫ���¶����һά����ĸ���Ԫ�أ�ÿ��Ԫ��֮���ûس����У�\n");
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
