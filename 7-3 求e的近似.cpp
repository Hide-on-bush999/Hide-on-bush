#include <stdio.h>

int main(void)
{
 	int n;
	scanf("%d", &n);

	double sum = 1;
	double z = 1;
	
	for (double i = 1; i <= n; i++) {
		z = z/i;
		sum += z;
	}
	
	printf("%.8lf", sum);
	
	
	
	return 0;
}
