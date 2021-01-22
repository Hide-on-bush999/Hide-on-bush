#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int date;
	struct Node *next;
};

struct Node *head = NULL;
struct Node *end = NULL;

void linklist(int a)
{
	struct Node *p = (struct Node *)malloc(sizeof(struct Node));
	struct Node *q;
	
	p->date = a;
	p->next = NULL;
	
	if(head == NULL)
	{
		head = p;
	}
	else
	{
		end->next = p;
	}
	end = p;
}

void printflist(struct Node *p)
{
	while(p != NULL)
	{
		printf("%d ",p->date);
		p = p->next;
	}
}

int main(void)
{
	char ch;
	int date;
	
	while(1)
	{
		printf("�������Ƿ���Ҫ��������(y/n):");
		scanf("%s",&ch);
		if(ch == 'y')
		{
			printf("����������Ҫ��������֣�");
			scanf("%d",&date);
			linklist(date);
		}
		else
		break;
	}
	
	printflist(head);
	
	return 0;
}
