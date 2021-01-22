#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;//ȫ�ֶ���ͷָ��
struct Node *end = NULL;//ȫ�ֶ���βָ��

/*
����һ���ṹ�� 
*/ 
struct Node
{
	int a;
	struct Node *next;
};

/*
��������
*/
struct Node *nizhi(struct Node *sj)
{
	struct Node *p, *q, *r;
 
	p = head;
	q = r = NULL;
 
	while(p)
	{
		q = p->next;
		p->next = r;
		r = p;
		p = q;
	}
	return r;
}

/*
ͷ�巨�������� 
*/
void add_head(int a)
{
	struct Node *sj,*zjz;
	sj = (struct Node *)malloc(sizeof(struct Node));//����һ����̬���� 
	
	sj->a = a;
	sj->next = NULL;
	
	if(head == NULL)
	{
		head = sj;
		sj->next = NULL;
	}
	else
	{
		zjz = head;
		head = sj;
		sj = zjz;
	}
}

/*
β�巨�������� 
*/ 
void add_end(int a)
{
	struct Node *sj;
	sj = (struct Node *)malloc(sizeof(struct Node));
	
	sj->a = a;
	sj->next = NULL;
	
	if(head == NULL)
	head = sj;
	else
	end->next = sj;
	end = sj;
}

/*
��ֵ���ҽڵ� 
*/
struct Node *cha_zhi(struct Node *sj,int a)
{
	while(sj != NULL)
	{
		if(sj->a == a)
		return sj;
		sj = sj->next;
	}
	return NULL;
}

/*
����Ų��ҽڵ� 
*/
struct Node *cha_hao(struct Node *sj,int a)
{
	int k = 0;
	while(sj != NULL)
	{
		if(k == a)
		return sj;
		sj = sj->next;
		k++;
	}
	return NULL;
}

/*
����һ���ڵ��ֵ 
*/ 
struct Node *gai(struct Node *sj,int a,int b)
{
	struct Node *zjz = cha_zhi(head,a);
	zjz->a = b;
	return zjz;
}

/*
ɾ��һ���ڵ� 
*/
void shan(struct Node *sj,int a)
{
	struct Node *wei = cha_zhi(head,a);
	struct Node *shou = head;
	while(shou->next != wei)
	shou = shou->next;
	shou->next = wei->next;
	free(wei);
	
}

/*
����������� 
*/
void printf(struct Node *sj)
{
	printf("�����е�Ԫ������Ϊ��\n");
	while(sj != NULL)
	{
        printf("%d\n",sj->a);
        sj = sj->next;
    }
}

/*
������ı� 
*/
void biaochang(struct Node *sj)
{
	int len = 0;
	while(sj != NULL)
	{
		len++;
		sj = sj->next;
	}
	printf("��Ϊ��%d\n",len);
} 

int main(void)
{
	char ch;
	int a;
	
	/*
	ͷ�巨�������� 
	*/
	while(1)
	{
		printf("�������Ƿ���Ҫ��������(y/n):");
		scanf("%s",&ch);
		if(ch == 'y')
		{
			scanf("%d",&a);
			add_head(a);
		}
		else
		break;
	}
	
	biaochang(head);//������ı� 
	
	printf(head);//������� 
	
	head = nizhi(head);//�������� 
	
	printf(head);//������ú������ 
	return 0;
}
