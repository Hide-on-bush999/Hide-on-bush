#include <stdio.h>
#include <string.h>//����strlen���� 

int main(void)
{
	int shu1[200] = {},shu2[200] = {};//��Ŵ�����1��2����������
	char zi1[200] = {},zi2[200] = {};// ���������û�������ַ�����ʽ�Ĵ�����1��2
	
	scanf("%s\n%s",&zi1,&zi2);//���������1��2
	
	/*
	��char���͵����鷴��ת��Ϊint����
	*/ 
	
	for(int i = 0,j = strlen(zi1) - 1;j >= 0;)     
	{
		shu1[i++] = zi1[j--] - '0';
	}
	for(int i = 0,j = strlen(zi2) - 1;j >= 0;)
	{
		shu2[i++] = zi2[j--] - '0';
	}
	
	//��������1��2���
	
	for(int i = 0;i < 200;i++)
	{
		shu1[i] =shu1[i] + shu2[i];
		if(shu1[i] >= 10)
		{
			shu1[i + 1]++;
			shu1[i] -= 10;
		}
	}
	
	//�ҳ������еڼ�λΪ��һ�������� 
	
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
	
	//��������� 
	
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





