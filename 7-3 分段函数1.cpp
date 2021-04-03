#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, y ,mid;
	
	scanf("%lf",&x);
	
	if (x < 0) {
		mid = x + 1;
		if (mid < 0) {
			mid = -mid;
		}
		y = mid;
	} else if (x >= 0 && x <= 5) {
		y = 2 * x + 1;
	} else {
		y = sin(x) + 5;
	}
	
	printf("x=%.2lf,y=%.2lf", x, y);
	
	
	return 0;
}
