#include <stdio.h>
#include <stdlib.h>

struct Node *head = NULL;//全局定义头指针
struct Node *end = NULL;//全局定义尾指针

/*
定义一个结构体 
*/ 
struct Node
{
	int a;
	struct Node *next;
};

/*
逆置链表
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
头插法创建链表 
*/
void add_head(int a)
{
	struct Node *sj,*zjz;
	sj = (struct Node *)malloc(sizeof(struct Node));//定义一个动态变量 
	
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
尾插法输入链表 
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
按值查找节点 
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
按序号查找节点 
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
更改一个节点的值 
*/ 
struct Node *gai(struct Node *sj,int a,int b)
{
	struct Node *zjz = cha_zhi(head,a);
	zjz->a = b;
	return zjz;
}

/*
删除一个节点 
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
遍历输出链表 
*/
void printf(struct Node *sj)
{
	printf("链表中的元素依次为：\n");
	while(sj != NULL)
	{
        printf("%d\n",sj->a);
        sj = sj->next;
    }
}

/*
求链表的表长 
*/
void biaochang(struct Node *sj)
{
	int len = 0;
	while(sj != NULL)
	{
		len++;
		sj = sj->next;
	}
	printf("表长为：%d\n",len);
} 

int main(void)
{
	char ch;
	int a;
	
	/*
	头插法输入链表 
	*/
	while(1)
	{
		printf("请问您是否需要输入数据(y/n):");
		scanf("%s",&ch);
		if(ch == 'y')
		{
			scanf("%d",&a);
			add_head(a);
		}
		else
		break;
	}
	
	biaochang(head);//求链表的表长 
	
	printf(head);//输出链表 
	
	head = nizhi(head);//逆置链表 
	
	printf(head);//输出逆置后的链表 
	return 0;
}
