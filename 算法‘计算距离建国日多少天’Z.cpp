#include <stdio.h>

int main(void)
{
	int year,mon,day;//��������������� 
	int chay,cham,chad;//�������������� 
	int yd,md,d;//����ÿ��ÿ�¶�Ӧ�������� 
	int d1,d2,d3;
	
	scanf("%d-%d-%d",&year,&mon,&day);//���������� 
	
	chay = year - 1949;//������������ 
	cham = mon - 10;//������������ 
	chad = day - 1;//������������ 
	
	if (chay == 0)
	{
		md = cham * 31;
		if (cham == 2)
		md--;
		d = md + chad;
		printf("%d",d);
	}
	
	if (chay == 1)
	{
		if (cham >= 0)
		{
			yd = 365;
			md = cham * 31;
			if (cham == 2)
			md--;
			d = yd + md + chad;
			printf("%d",d);
		}
		if (cham < 0)
		{
			int m = cham + 10;
			md = (m - 1) * 30;
			if (m == 2)
			md++;
			if (m == 4)
			md += 2;
			if (m == 6)
			md += 3;
			if (m == 8)
			md += 4;
			if (m == 9)
			md += 5;
			if (m > 2)
			md--;
			d = 92 + md + chad;
			printf("%d",d);
		}
	}
	if (chay > 1)
	{
		d1 = 92;
		int y = chay - 1;
		d2 = y * 365;
		for (int i = 0;i < y;i++)
		{
			if (i % 4 == 2)
			d2++;
		}
		int m = mon - 1;
		d3 = m * 30 + chad;
		if (m == 1)
		d3++;
		if (m == 2)
		d3--;
		if (m == 5)
		d3++;
		if (m == 6)
		d3++;
		if (m ==7)
		d3 += 2;
		if (m == 8)
		d3 += 3;
		if (m == 9)
		d3 += 3;
		if (m == 10)
		d3 += 4;
		if (m == 11)
		d3 += 4;
		if (year % 4 == 0)
		d3++;
		d = d1 + d2 + d3;
		printf("%d",d);
	}
	return 0;
}
