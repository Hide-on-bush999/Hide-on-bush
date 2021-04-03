#include <stdio.h>

int main(void)
{
	char a[1000];
	int i = 0, j = 0;
	
	while (scanf("%c",&a[i]) && a[i] != '\n') {
		i++;
	}
	
	if (a[0] == '-') {
		printf("fu ");
		for (j = 1; j < i; j++) {
			if (j == i-1) {
				if (a[j] == '0')
					printf("ling");
				else if (a[j] == '1')
					printf("yi");
				else if (a[j] == '2')
					printf("er");
				else if (a[j] == '3')
					printf("san");
				else if (a[j] == '4')
					printf("si");
				else if (a[j] == '5')
					printf("wu");
				else if (a[j] == '6')
					printf("liu");
				else if (a[j] == '7')
					printf("qi");
				else if (a[j] == '8')
					printf("ba");
				else
					printf("jiu");
			} else {
				if (a[j] == '0')
					printf("ling ");
				else if (a[j] == '1')
					printf("yi ");
				else if (a[j] == '2')
					printf("er ");
				else if (a[j] == '3')
					printf("san ");
				else if (a[j] == '4')
					printf("si ");
				else if (a[j] == '5')
					printf("wu ");
				else if (a[j] == '6')
					printf("liu ");
				else if (a[j] == '7')
					printf("qi ");
				else if (a[j] == '8')
					printf("ba ");
				else
					printf("jiu ");
			}
		}
	} else {
		for (j = 0; j < i; j++) {
			if (j == i-1) {
				if (a[j] == '0')
					printf("ling");
				else if (a[j] == '1')
					printf("yi");
				else if (a[j] == '2')
					printf("er");
				else if (a[j] == '3')
					printf("san");
				else if (a[j] == '4')
					printf("si");
				else if (a[j] == '5')
					printf("wu");
				else if (a[j] == '6')
					printf("liu");
				else if (a[j] == '7')
					printf("qi");
				else if (a[j] == '8')
					printf("ba");
				else
					printf("jiu");
			} else {
				if (a[j] == '0')
					printf("ling ");
				else if (a[j] == '1')
					printf("yi ");
				else if (a[j] == '2')
					printf("er ");
				else if (a[j] == '3')
					printf("san ");
				else if (a[j] == '4')
					printf("si ");
				else if (a[j] == '5')
					printf("wu ");
				else if (a[j] == '6')
					printf("liu ");
				else if (a[j] == '7')
					printf("qi ");
				else if (a[j] == '8')
					printf("ba ");
				else
					printf("jiu ");
			}
		}
	}
	return 0;
}
