#include <stdio.h>
#include <string.h>

int main(void)
{
	int shu_1[201] = {},shu_2[201] = {};//�������Ĵ����� 
	char zi_1[201] = {},zi_2[201] = {};//�������Ĵ����� 
	
	
	scanf("%s\n%s",&zi_1,&zi_2);//���û���������� 
	
	
	/*
	��������ַ������͵Ĵ���������ת����int���� 
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
	������int���͵Ĵ�������� 
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
	Ѱ�ҵ�һ�����������ڵ�λ�� 
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
	���������
	*/
	for (i = m;i >= 0;i--)
	{
		printf("%d",shu_1[i]);
	}
	
	return 0;
}
