#include <stdio.h>
#include <stdlib.h>

struct Book
{
	char shuming[128];
	char zuozhe[40];
	struct Book *next;
};

void shurubook(struct Book *book)
{
	printf("������������\n");
	scanf("%s",book->shuming); 
	printf("���������ߣ�\n");
	scanf("%s",book->zuozhe);
}

void tianjiabook(struct Book **library)
{
	struct Book *book,*zjz;
	book = (struct Book *)malloc(sizeof(struct Book));
	
	shurubook(book);
	
	if(*library == NULL)
	{
		*library = book;
		book->next = NULL;
	}
	else
	{
		zjz = *library;
		*library = book;
		book->next = zjz;
	}
}

void shuchubook(struct Book *library)
{
	struct Book *book;
	book = library;
	while(book != NULL)
	{
		printf("����Ϊ��%s\n",book->shuming);
		printf("����Ϊ��%s\n",book->zuozhe);
		book = book->next;
	}
}

int main(void)
{
	struct Book *library = NULL;
	
	char ch;
	while(1)
	{
		printf("�����Ƿ���Ҫ�����鼮����Y/N��\n");
		scanf("%s",&ch);
		if(ch == 'Y')
		tianjiabook(&library);
		else
		break;
	}
	
	printf("�����Ƿ���Ҫ����鼮����Y/N��\n");
	scanf("%s",&ch);
	if(ch == 'Y')
	shuchubook(library);
	return 0;
}
