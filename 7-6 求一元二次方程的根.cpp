#include <stdio.h>
#include <math.h>


int main(void)
{
	double a, b, c, d, e, x1, x2, mid;
	scanf("%lf %lf %lf",&a, &b, &c);

	if (a == 0 && b == 0 && c == 0)
		printf("Zero Equation");
	else if (a == 0 && b == 0 && c != 0)
		printf("Not An Equation");
	else {
		mid = (b * b) - (4 * a * c);
		if (mid == 0)
			printf("%.2lf",(-b) / (2*a));
		else if (a == 0)
			printf("%.2lf",(-c) / b);
		else if (mid > 0) {
			mid = sqrt(mid);

			x1 = (-b + mid) / (2*a);
			x2 = (-b - mid) / (2*a);

			if (x1 < x2)
				printf("%.2lf\n%.2lf", x2, x1);
			else
				printf("%.2lf\n%.2lf", x1, x2);
		} else {
			d = -b / (2*a);
			e = sqrt(-mid) / (2*a);
			printf("%.2lf+%.2lfi\n%.2lf-%.2lfi", d, e, d, e);
		}
	}
	return 0;
}
