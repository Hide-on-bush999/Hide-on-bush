#include <stdio.h>

#define MAX 100005

int i, n, a[MAX], ans = -2147483648, dp[MAX];

int max(int a, int b) {
	if (a >= b) {
		return a;
	} else {
		return b;
	}
}

int main(void)
{
	scanf("%d", &n);
 	for (i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (i = 1; i <= n; i++)
	    dp[i] = max(dp[i-1] + a[i],a[i]);
	for (i = 1; i <= n; i++)
	    ans = max(ans,dp[i]);
	printf("%d\n", ans);
	return 0;
}
