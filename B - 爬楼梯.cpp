#include <stdio.h>

//1 2 3 5 8 13

int main(void)
{
	int n;
	scanf("%d", &n);
	
	long long int a[52];
	a[0] = 1;
	a[1] = 2;
	for (int i = 2; i < 52; i++) {
		a[i] = a[i-1] + a[i-2];
	}
	
	printf("%d", a[n-1]);
	
	return 0;
}
