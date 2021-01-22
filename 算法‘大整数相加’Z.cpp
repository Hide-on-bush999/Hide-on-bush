#include <stdio.h>
#include <string.h>//调用strlen函数 

int main(void)
{
	int shu1[200] = {},shu2[200] = {};//存放大整数1，2的整形数组
	char zi1[200] = {},zi2[200] = {};// 用来接收用户输入的字符串形式的大整数1，2
	
	scanf("%s\n%s",&zi1,&zi2);//输入大整数1，2
	
	/*
	将char类型的数组反序转换为int类型
	*/ 
	
	for(int i = 0,j = strlen(zi1) - 1;j >= 0;)     
	{
		shu1[i++] = zi1[j--] - '0';
	}
	for(int i = 0,j = strlen(zi2) - 1;j >= 0;)
	{
		shu2[i++] = zi2[j--] - '0';
	}
	
	//将大整数1，2相加
	
	for(int i = 0;i < 200;i++)
	{
		shu1[i] =shu1[i] + shu2[i];
		if(shu1[i] >= 10)
		{
			shu1[i + 1]++;
			shu1[i] -= 10;
		}
	}
	
	//找出数组中第几位为第一个非零项 
	
	int k = 0;
	while (k <= 200)
	{
		shu1[k] += shu2[k];
		
		if (shu1[k] >= 10)
		{
			shu1[k+1]++;
			shu1[k] -= 10;
		} 
		k++;
	}
	
	//输出大整数 
	
	if(k == -1)
	printf("0");
	else
	{
		for(int i = k;i >= 0;i--)
		{
			printf("%d",shu1[i]);
		}
	}
	return 0;
}





