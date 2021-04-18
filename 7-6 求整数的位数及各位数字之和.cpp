#include <stdio.h>

int main(void)
{
	char a[1000005];
	int i, sum = 0;
	
	for (i = 0; i < 1000005; i++) {
		scanf("%c", &a[i]);
		if (a[i] == '\n')
			break;
	}
	
	for (int j = 0; j < i; j++) {
		sum += a[j] - '0';
	}
	
	printf("%d %d", i, sum);
	return 0;
}
