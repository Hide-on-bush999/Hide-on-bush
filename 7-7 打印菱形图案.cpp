#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int a = n-1, b = 2;
	
	//������ε��ϰ벿��
	for (int i = 0; i < n/2; i++) {
		//����ո�
		for (int j = 0; j < a; j++)
			printf(" ");

		//�������
		for (int j = 0; j < n-a; j++)
			printf("* ");
			
		printf("\n");
		
		a--;
		a--;
	}
	
	//������ε��в�
	for (int i = 0; i < n; i++)
		printf("* ");
		
	printf("\n");
	
	//������ε��°벿��
	for (int i = n/2+1; i < n; i++) {
		//����ո�
		for (int j = 0; j < b; j++)
			printf(" ");

		//�������
		for (int j = 0; j < n-b; j++)
			printf("* ");

		printf("\n");
		
		b++;
		b++;
	}
	return 0;
}
