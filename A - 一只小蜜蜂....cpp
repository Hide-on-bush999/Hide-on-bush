#include <stdio.h>

int main(void)
{
	int n, x, y;
	scanf("%d", &n);
	
	long long int a[52];
	a[0] = 1;
	a[1] = 2;
	for (int i = 2; i < 52; i++) {
		a[i] = a[i-1] + a[i-2];
	}
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		int t = y - x;
		printf("%lld\n", a[t-1]);
	}
	
	
	
	
	
	
	return 0;
}
