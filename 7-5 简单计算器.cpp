#include <stdio.h>
char a[1000];
int i = 0, s[10], j = 0;

int zhaoshu (int j) {
	for (i = j; i < 1000; i++) {
		if (a[i] < '0' || a[i] > '9') {
			return i;
		}
	}
}

void chushihua() {
	for (i = 0; i < 10; i++) {
		s[i] = 0;
	}
}

int main(void)
{
	while (scanf("%c",&a[i]) && a[i] != '=') {
		i++;
	}
	
	int b = zhaoshu (0);
	
	
	for (i = 0; i < b; i++) {
		s[j] = a[i] - '0';
		j++;
	}
	
	for (i = 0; i < j; i++) {
		s[i]*pow(10, j-1);
	}
	
	
	chushihua();
	
	
	
	
	
	
	return 0;
}
