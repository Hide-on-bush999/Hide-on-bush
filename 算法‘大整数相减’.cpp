#include <stdio.h>
#include <string.h>

int main(void)
{
	int shu_1[201] = {},shu_2[201] = {};//存放输出的大整数 
	char zi_1[201] = {},zi_2[201] = {};//存放输入的大整数 
	
	
	scanf("%s\n%s",&zi_1,&zi_2);//让用户输入大整数 
	
	
	/*
	将输入的字符串类型的大整数反序转换成int类型 
	*/
	for (int i = 0,j = strlen(zi_1) - 1;j >= 0;)
	{
		shu_1[i++] = zi_1[j--] - '0';
	}
	for (int i = 0,j = strlen(zi_2) - 1;j >= 0;)
	{
		shu_2[i++] = zi_2[j--] - '0';
	}
	
	
	/*
	将两个int类型的大整数相减 
	*/ 
	int k = 0;	
	while (k <= 200)
	{
		shu_1[k] -= shu_2[k];
		if (shu_1[k] < 0)
		{
			shu_1[k] += 10;
			shu_1[k+1]--;
		}
		k++;
	}
	
	
	/*
	寻找第一个非零项所在的位置 
	*/
	int m = 0;
	int i = 0;
	for (i = 200;i >= 0;i--)
	{
		if (shu_1[i] != 0)
		{
			m = i;
			break;
		}
	}
	
	
	/*
	输出大整数
	*/
	for (i = m;i >= 0;i--)
	{
		printf("%d",shu_1[i]);
	}
	
	return 0;
}
