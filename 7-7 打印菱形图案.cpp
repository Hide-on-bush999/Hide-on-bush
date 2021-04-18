#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int a = n-1, b = 2;
	
	//输出菱形的上半部分
	for (int i = 0; i < n/2; i++) {
		//输出空格
		for (int j = 0; j < a; j++)
			printf(" ");

		//输出菱形
		for (int j = 0; j < n-a; j++)
			printf("* ");
			
		printf("\n");
		
		a--;
		a--;
	}
	
	//输出菱形的中部
	for (int i = 0; i < n; i++)
		printf("* ");
		
	printf("\n");
	
	//输出菱形的下半部分
	for (int i = n/2+1; i < n; i++) {
		//输出空格
		for (int j = 0; j < b; j++)
			printf(" ");

		//输出菱形
		for (int j = 0; j < n-b; j++)
			printf("* ");

		printf("\n");
		
		b++;
		b++;
	}
	return 0;
}
