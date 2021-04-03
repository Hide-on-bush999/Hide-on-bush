#include <stdio.h>

int main(void)
{
	int n, z;
	
	scanf("%d", &n);
	
	z = n % 5;
	
	if (z <= 3 && z != 0) {
		printf("Fishing in day %d", n);
	} else {
		printf("Drying in day %d", n);
	}
	
	
	
	
	
	return 0;
}
