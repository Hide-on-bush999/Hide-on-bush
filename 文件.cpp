#include <stdio.h>
#include <stdlib.h>

#define MAX 1024

int main(void)
{
	FILE *fp;
	char a[MAX];
	if((fp = fopen("D:\\����ϵͳ.txt","a")) == NULL)
	{
		printf("���ļ�ʧ�ܣ�\n");
		exit(EXIT_FAILURE);
	}
	
	fputs("������\n",fp);
	fputs("����\n",fp);
	
	fclose(fp);
	
	if((fp = fopen("D:\\����ϵͳ.txt","r")) == NULL)
	{
		printf("���ļ�ʧ�ܣ�\n");
		exit(EXIT_FAILURE);
	}

	while(!feof(fp))
	{
		fgets(a,MAX,fp);
		printf("%s",a);
	}
	
	fclose(fp);
	return 0;
}
