#include <stdio.h>

int main(void)
{
	int val;
	printf("��������Ҫ�򿪵İ��Ŷݼ�֮��Ĳ�����");
	scanf("%d",&val); 
	
	switch (val)
	{
	case 1:
		printf("���Ŷݼ�֮�� ��һ�ؿ��� ����\n��������\n");
		break;
	case 2:
		{
			printf("���Ŷݼ�֮�� ��һ�ؿ��� ����\n");
			printf("�ڶ������� ����\n");
		}
		break;
	case 3:
		{
			printf("���Ŷݼ�֮�� ��һ�ؿ��� ����\n");
			printf("�ڶ������� ����\n");
			printf("���������� ����\n");
		}
		break;
	case 4:
		{
			printf("���Ŷݼ�֮�� ��һ�ؿ��� ����\n");
			printf("�ڶ������� ����\n");
			printf("���������� ����\n");
			printf("���������� ����\n");
		}
		break;
	case 5:
		{
			printf("���Ŷݼ�֮�� ��һ�ؿ��� ����\n");
			printf("�ڶ������� ����\n");
			printf("���������� ����\n");
			printf("���������� ����\n");
			printf("�����ض��� ����\n");
			printf("��������\n");
		}
		break;
	case 6:
		{
			printf("���Ŷݼ�֮�� ��һ�ؿ��� ����\n");
			printf("�ڶ������� ����\n");
			printf("���������� ����\n");
			printf("���������� ����\n");
			printf("�����ض��� ����\n");
			printf("�����ؾ��� ����\n");
			printf("����ȸ��\n");
		}
		break;
	case 7:
		{
			printf("���Ŷݼ�֮�� ��һ�ؿ��� ����\n");
			printf("�ڶ������� ����\n");
			printf("���������� ����\n");
			printf("���������� ����\n");
			printf("�����ض��� ����\n");
			printf("�����ؾ��� ����\n");
			printf("�����ؾ��� ����\n");
			printf("�绢��\n");
		}
		break;
	default:
		{
			printf("���Ŷݼ�֮�� ��һ�ؿ��� ����\n");
			printf("�ڶ������� ����\n");
			printf("���������� ����\n");
			printf("���������� ����\n");
			printf("�����ض��� ����\n");
			printf("�����ؾ��� ����\n");
			printf("�����ؾ��� ����\n");
			printf("�ڰ������� ����\n");
			printf("�� ҹ����\n");
		}
		break;
	}
	return 0;
}
