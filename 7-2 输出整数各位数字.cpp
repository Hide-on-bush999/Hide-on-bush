#include <stdio.h>

int main(void)
{
	char a[10000];
	long int i, j;
	
	for (i = 0; i < 10000; i++) {
		scanf("%c", &a[i]);
		if (a[i] == '\n') {
			break;
		}
	}
	
	for (j = 0; j < i; j++) {
		printf("%c ", a[j]);
	}
	
	
	return 0;
}
