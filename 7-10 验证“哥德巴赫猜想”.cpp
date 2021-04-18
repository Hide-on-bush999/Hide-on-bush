#include <stdio.h>

int sushu(int val) {
    int a;
    for (a = 2; a < val; a++) {
	    if (val%a == 0)
	    break;
	}
	if (val == a)
		return 1;
 	else
		return 0;
}

int main(void)
{
	int n, b;
	
	scanf("%d", &n);
	
	for (int i = 2; i < n; i++) {
		b = n - i;
		if (sushu(i) && sushu(b)) {
			printf("%d = %d + %d", n, i, b);
			break;
		}
	}
	return 0;
}
