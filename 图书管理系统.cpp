#include <stdio.h>
#include <stdlib.h>

//д����

//1.д����-->�˵�-->ģ��
void makemenu()
{
	printf("---------------------------\n");
	printf("      xxxͼ�����ϵͳ\n");
	printf("\t0.�˳�ϵͳ\n");
	printf("\t1.�Ǽ��鼮\n");
	printf("\t2.����鼮\n");
	printf("\t3.�����鼮\n");
	printf("\t4.�黹�鼮\n");
	printf("\t5.�鼮����\n");
	printf("\t6.ɾ���鼮\n");
	printf("\t7.�����鼮\n");
	printf("---------------------------\n");
	printf("������(0~7):");
}

//2.������
void keydown()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case 0:
		printf(" ���˳��� \n");
		printf("�˳��ɹ�\n");
		system("pause");    //�ص���������
		exit(0);
		break;
	case 1:
		printf(" ���Ǽǡ� \n");
		break;
	case 2:
		printf(" ������� \n");
		break;
	case 3:
		printf(" �����ġ� \n");
		break;
	case 4:
		printf(" ���黹�� \n");
		break;
	case 5:
		printf(" ������ \n");
		break;
	case 6:
		printf(" ��ɾ���� \n");
		break;
	case 7:
		printf(" �����ҡ� \n");
		break;
	default:
		printf(" ��error�� \n");
		break;
	}
}

int main(void)
{
	while(1)
	{
		makemenu();
		keydown();
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}
