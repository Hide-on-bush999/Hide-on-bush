#include <stdio.h>
#include <stdlib.h>

//写链表

//1.写界面-->菜单-->模块
void makemenu()
{
	printf("---------------------------\n");
	printf("      xxx图书管理系统\n");
	printf("\t0.退出系统\n");
	printf("\t1.登记书籍\n");
	printf("\t2.浏览书籍\n");
	printf("\t3.借阅书籍\n");
	printf("\t4.归还书籍\n");
	printf("\t5.书籍排序\n");
	printf("\t6.删除书籍\n");
	printf("\t7.查找书籍\n");
	printf("---------------------------\n");
	printf("请输入(0~7):");
}

//2.做交互
void keydown()
{
	int a;
	scanf("%d",&a);
	switch(a)
	{
	case 0:
		printf(" 【退出】 \n");
		printf("退出成功\n");
		system("pause");    //关掉整个程序
		exit(0);
		break;
	case 1:
		printf(" 【登记】 \n");
		break;
	case 2:
		printf(" 【浏览】 \n");
		break;
	case 3:
		printf(" 【借阅】 \n");
		break;
	case 4:
		printf(" 【归还】 \n");
		break;
	case 5:
		printf(" 【排序】 \n");
		break;
	case 6:
		printf(" 【删除】 \n");
		break;
	case 7:
		printf(" 【查找】 \n");
		break;
	default:
		printf(" 【error】 \n");
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
