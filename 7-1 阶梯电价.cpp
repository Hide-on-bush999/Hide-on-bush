#include <stdio.h>

int main(void)
{
	int n;
	double cost;
	scanf("%d",&n);
	
	if (n <= 50) {
		cost = 0.53 * n;
	} else {
		cost = 50 * 0.53 + (n-50) * 0.58;
	}
	
	if (n < 0) {
		printf("Invalid Value!");
	} else {
		printf("cost = %.2lf", cost);
	}
	return 0;
}
