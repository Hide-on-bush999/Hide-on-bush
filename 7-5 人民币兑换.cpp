#include <stdio.h>

int main(void)
{
	int n, f, t = 46, o = 53;
	scanf("%d", &n);
	
	if (n > 12)
		n = 12;

	for (int i = 1; i <= n; i++) {
		f = i;
		printf("%d %d %d\n", f, t, o);
		t -= 4;
		o += 3;
	}
	return 0;
}
