#include <stdio.h>
#include <stdlib.h>

#define MAX 1024

int main(void)
{
	FILE *fp;
	char a[MAX];
	if((fp = fopen("D:\\管理系统.txt","a")) == NULL)
	{
		printf("打开文件失败！\n");
		exit(EXIT_FAILURE);
	}
	
	fputs("赵泽鑫\n",fp);
	fputs("周梦\n",fp);
	
	fclose(fp);
	
	if((fp = fopen("D:\\管理系统.txt","r")) == NULL)
	{
		printf("打开文件失败！\n");
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
