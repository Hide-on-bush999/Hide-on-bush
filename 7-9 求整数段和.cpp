#include <stdio.h>

int main(void)
{
	int a, b, sum = 0, z;
	scanf("%d %d", &a, &b);
	
	for (int i = 0; i <= b-a; i++) {
		z = a + i;
		sum += z;

		printf("%5d", z);
		
		if (i%5 == 4 && i != b-a)
			printf("\n");
		
	}
	
	printf("\n");
	
	printf("Sum = %d", sum);
	return 0;
}
