#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void keydowns_2();
void menu_2();
struct Students//ѧ����Ϣ�ṹ��
{
	char name[100];
	char number[100];
	int age;
	char sex[100];
	int grade;
	struct Students *next;
};

struct Node//�������ݽṹ��
{
	struct Students data;
	struct Node *next;
};

struct Node *creatlist()//����һ��ͷָ��
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

void cr(struct Node *head,struct Students data)//����һ�����ݵ�����
{
	struct Node *newnode = creatNode(data);
	newnode->next = head->next;
	head->next = newnode;
}

void deleteNode(struct Node *head,char *name)//ɾ��һ������
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

struct Node *find(struct Node *head,char *name)//����һ������
{
	struct Node *p = head->next;
	while(strcmp(p->data.name,name))
	{
		p = p->next;
	}
	return p;
}

int tongji_1(struct Node *head,int n)//ͳ���ڷ��������µ�����
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

int tongji_2(struct Node *head,int n)//ͳ���ڷ��������ϵ�����
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

void printflist(struct Node *head)//��ӡ����
{
	struct Node *p = head->next;
	printf("\t����\tѧ��\t\t����\t�Ա�\t�ɼ�\n");
	while(p != NULL)
	{
		printf("\t%s\t%s\t%d\t%s\t%d\n",p->data.name,p->data.number,p->data.age,p->data.sex,p->data.grade);
		p = p->next;
	}
}

struct Node *list = creatlist();//����һ��ͷָ��

void read(struct Node *head,const char *name)//��ȡ�ļ�
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

void write(struct Node *head,const char *name)//д���ļ�
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

void menu_1()//��¼ҳ��
{
	printf("-------��ѧ������ϵͳ��-------\n");
	printf("\t**************\n");
	printf("\t* 0.�˳�ϵͳ *\n");
	printf("\t* 1.  ��¼   *\n");
	printf("\t**************\n");
	printf("����������Ҫʵ�ֵĹ���(0~1)��");
}

void keydowns_1()//��¼����
{
	int a,b;
	scanf("%d",&a);
	struct Students temp;
	struct Node *p;
	switch (a)
	{
	case 0:
		printf("���˳�ϵͳ����\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("����������(Ĭ��Ϊ123)��");
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
			printf("�����������\n");
			printf("����Ĭ��Ϊ123��������\n");
		}
		system("pause");
		break;
	default:
		printf("�����������롿\n");
		break;
	}
}

void menu_2()//ϵͳҳ��
{
	printf("-------��ѧ������ϵͳ��-------\n");
	printf("\t**************\n");
	printf("\t* 0.�˳�ϵͳ *\n");//OK
	printf("\t* 1.¼������ *\n");//OK
	printf("\t* 2.�޸����� *\n");//OK
	printf("\t* 3.ɾ������ *\n");//OK
	printf("\t* 4.������� *\n");//OK
	printf("\t* 5.�������� *\n");//OK
	printf("\t* 6.����ͳ�� *\n");//OK
	printf("\t**************\n");
	printf("����������Ҫʵ�ֵĹ���(0~6)��");
}

void keydowns_2()//ϵͳ����
{
	int a;
	scanf("%d",&a);
	struct Students temp;
	struct Node *p;
	switch (a)
	{
	case 0:
		printf("���˳�ϵͳ����\n");
		system("pause");
		exit(0);
		break;
	case 1:
		printf("��¼�����ݡ�\n");
		printf("������ѧ��������ѧ�ţ����䣬�ɼ���\n");
		fflush(stdin);
		scanf("%s %s %d %s %d",temp.name,temp.number,&temp.age,temp.sex,&temp.grade);
		cr(list,temp);
		write(list,"D:\\����ϵͳ.txt");
		break;
	case 2:
		printf("���޸����ݡ�\n");
		printf("������Ҫ�޸ĵ�ѧ����������");
		scanf("%s",temp.name);
		p = find(list,temp.name);
		printf("�������޸ĺ��ѧ��������ѧ�ţ����䣬�ɼ���\n");
		fflush(stdin);
		scanf("%s %s %d %s %d",p->data.name,p->data.number,&p->data.age,p->data.sex,&p->data.grade);
		FILE *fp;
		fp = fopen("D:\\����ϵͳ.txt","a");
		fprintf(fp,"\t%s\t%s\t%d\t%s\t%d\n",p->data.name,p->data.number,p->data.age,p->data.sex,p->data.grade);
		fclose(fp);
		//write(list,"D:\\����ϵͳ.txt");
		break;
	case 3:
		printf("��ɾ�����ݡ�\n");
		printf("������Ҫɾ����ѧ����������");
		scanf("%s",temp.name);
		deleteNode(list,temp.name);
		write(list,"D:\\����ϵͳ.txt");
		break;
	case 4:
		printf("��������ݡ�\n");
		printflist(list);
		break;
	case 5:
		printf("���������ݡ�\n");
		printf("����������Ҫ���ҵ�ѧ����������");
		scanf("%s",temp.name);
		p = find(list,temp.name);
		if(strcmp(p->data.name,temp.name))
		{
			printf("û���ҵ���ͬѧ��\n");
		}
		else
		{
			printf("\t����\tѧ��\t\t����\t�Ա�\t�ɼ�\n");
			printf("\t%s\t%s\t%d\t%s\t%d\n",p->data.name,p->data.number,p->data.age,p->data.sex,p->data.grade);
		}
		break;
	case 6:
		printf("������ͳ�ơ�\n");
		printf("����������Ҫ���õķ����ߣ�");
		int n;
		scanf("%d",&n);
		printf("��%d�ּ����µ����У���%d����\n��%d�����ϵ����У���%d����\n",n,tongji_1(list,n),n,tongji_2(list,n));
		break;
	default:
		printf("�����������롿\n");
		break;
	}
}

int main(void)//������
{
	read(list,"D:\\����ϵͳ.txt");
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
