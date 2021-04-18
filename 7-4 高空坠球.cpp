#include <stdio.h>

int main(void)
{
	double h, n;

	scanf("%lf %lf", &h, &n);

	double sum = h, hn = h/2, s = 0;
	
	if (n == 0)
		printf("%.1lf %.1lf", s, s);
	else {
		for (int i = 1; i < n; i++) {
			sum += 2*hn;
			hn = hn / 2;
	}

	printf("%.1lf %.1lf", sum, hn);
	}
	return 0;
}
