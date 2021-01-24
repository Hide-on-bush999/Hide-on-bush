#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void keydowns_2();
void menu_2();
struct Students//学生信息结构体
{
	char name[100];
	char number[100];
	int age;
	char sex[100];
	int grade;
	struct Students *next;
};

struct Node//基础数据结构体
{
	struct Students data;
	struct Node *next;
};

struct Node *creatlist()//创建一个头指针
{
	struct Node *head = (struct Node *) malloc (sizeof(struct Node));
	head->next = NULL;
	return head;
}

struct Node *creatNode(struct Students data)
{
	struct Node *newnode = (struct Node *) malloc (sizeof(struct Node));
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}

void cr(struct Node *head,struct Students data)//插入一个数据到链表
{
	struct Node *newnode = creatNode(data);
	newnode->next = head->next;
	head->next = newnode;
}

void deleteNode(struct Node *head,char *name)//删除一个数据
{
	struct Node *p = head;
	struct Node *q = head->next;
	while(strcmp(q->data.name,name))
	{
		p = q;
		q = q->next;
	}
	p->next = q->next;
	free(q);
}

struct Node *find(struct Node *head,char *name)//查找一个数据
{
	struct Node *p = head->next;
	while(strcmp(p->data.name,name))
	{
		p = p->next;
	}
	return p;
}

int tongji_1(struct Node *head,int n)//统计在分数线以下的人数
{
	int x = 0;
	struct Node *p = head->next;
	while(p != NULL)
	{
		if(p->data.grade <= n)
		{
			x++;
		}
		p = p->next;
	}
	return x;
}

int tongji_2(struct Node *head,int n)//统计在分数线以上的人数
{
	int y = 0;
	struct Node *p = head->next;
	while(p != NULL)
	{
		if(p->data.grade > n)
		{
			y++;
		}
		p = p->next;
	}
	return y;
}

void printflist(struct Node *head)//打印数据
{
	struct Node *p = head->next;
	printf("\t姓名\t学号\t\t年龄\t性别\t成绩\n");
	while(p != NULL)
	{
		printf("\t%s\t%s\t%d\t%s\t%d\n",p->data.name,p->data.number,p->data.age,p->data.sex,p->data.grade);
		p = p->next;
	}
}

struct Node *list = creatlist();//创建一个头指针

void read(struct Node *head,const char *name)//读取文件
{
	FILE *fp;
	struct Students data;
	fp = fopen(name,"r");
	if(fp == NULL)
	{
		fp = fopen(name,"w+");
	}
	while(fscanf(fp,"\t%s\t%s\t%d\t%s\t%d\n",data.name,data.number,&data.age,data.sex,&data.grade) != EOF)
	{
		cr(head,data);
	}
	fclose(fp);
}

void write(struct Node *head,const char *name)//写出文件
{
	FILE *fp;
	fp = fopen(name,"w");
	struct Node *p = head->next;
	while(p)
	{
		fprintf(fp,"\t%s\t%s\t%d\t%s\t%d\n",p->data.name,p->data.number,p->data.age,p->data.sex,p->data.grade);
 		p = p->next;
 	}
	fclose(fp);
}

void menu_1()//登录页面
{
	printf("-------【学生管理系统】-------\n");
	printf("\t**************\n");
	printf("\t* 0.退出系统 *\n");
	printf("\t* 1.  登录   *\n");
	printf("\t**************\n");
	printf("请输入您想要实现的功能(0~1)：");
}

void keydowns_1()//登录交互
{
	int a,b;
	scanf("%d",&a);
	struct Students temp;
	struct Node *p;
	switch (a)
	{
	case 0:
		printf("【退出系统！】\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("请输入密码(默认为123)：");
		scanf("%d",&b);
		if(b == 123)
		{
			while(1)
			{
				menu_2();
				keydowns_2();
				system("pause");
				system("cls");
			}
		}
		else
		{
			printf("密码输入错误！\n");
			printf("密码默认为123！！！！\n");
		}
		system("pause");
		break;
	default:
		printf("【请重新输入】\n");
		break;
	}
}

void menu_2()//系统页面
{
	printf("-------【学生管理系统】-------\n");
	printf("\t**************\n");
	printf("\t* 0.退出系统 *\n");//OK
	printf("\t* 1.录入数据 *\n");//OK
	printf("\t* 2.修改数据 *\n");//OK
	printf("\t* 3.删除数据 *\n");//OK
	printf("\t* 4.浏览数据 *\n");//OK
	printf("\t* 5.查找数据 *\n");//OK
	printf("\t* 6.数据统计 *\n");//OK
	printf("\t**************\n");
	printf("请输入您想要实现的功能(0~6)：");
}

void keydowns_2()//系统交互
{
	int a;
	scanf("%d",&a);
	struct Students temp;
	struct Node *p;
	switch (a)
	{
	case 0:
		printf("【退出系统！】\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("【录入数据】\n");
		printf("请输入学生姓名，学号，年龄，成绩：\n");
		fflush(stdin);
		scanf("%s %s %d %s %d",temp.name,temp.number,&temp.age,temp.sex,&temp.grade);
		cr(list,temp);
		write(list,"D:\\管理系统.txt");
		break;
	case 2:
		printf("【修改数据】\n");
		printf("请输入要修改的学生的姓名：");
		scanf("%s",temp.name);
		p = find(list,temp.name);
		printf("请输入修改后的学生姓名，学号，年龄，成绩：\n");
		fflush(stdin);
		scanf("%s %s %d %s %d",p->data.name,p->data.number,&p->data.age,p->data.sex,&p->data.grade);
		FILE *fp;
		fp = fopen("D:\\管理系统.txt","a");
		fprintf(fp,"\t%s\t%s\t%d\t%s\t%d\n",p->data.name,p->data.number,p->data.age,p->data.sex,p->data.grade);
		fclose(fp);
		//write(list,"D:\\管理系统.txt");
		break;
	case 3:
		printf("【删除数据】\n");
		printf("请输入要删除的学生的姓名：");
		scanf("%s",temp.name);
		deleteNode(list,temp.name);
		write(list,"D:\\管理系统.txt");
		break;
	case 4:
		printf("【浏览数据】\n");
		printflist(list);
		break;
	case 5:
		printf("【查找数据】\n");
		printf("请输入您想要查找的学生的姓名：");
		scanf("%s",temp.name);
		p = find(list,temp.name);
		if(strcmp(p->data.name,temp.name))
		{
			printf("没有找到该同学！\n");
		}
		else
		{
			printf("\t姓名\t学号\t\t年龄\t性别\t成绩\n");
			printf("\t%s\t%s\t%d\t%s\t%d\n",p->data.name,p->data.number,p->data.age,p->data.sex,p->data.grade);
		}
		break;
	case 6:
		printf("【数据统计】\n");
		printf("请输入您想要设置的分数线：");
		int n;
		scanf("%d",&n);
		printf("在%d分及以下的人有：（%d）人\n在%d分以上的人有：（%d）人\n",n,tongji_1(list,n),n,tongji_2(list,n));
		break;
	default:
		printf("【请重新输入】\n");
		break;
	}
}

int main(void)//主函数
{
	read(list,"D:\\管理系统.txt");
	while(1)
	{
		menu_1();
		keydowns_1();
		system("pause");
		system("cls");
	}
	system("pause");
	return 0;
}
