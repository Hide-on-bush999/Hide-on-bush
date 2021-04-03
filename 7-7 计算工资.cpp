#include <stdio.h>

int main(void)
{
	int year, time, m;
	scanf("%d %d", &year, &time);
	
	if (year < 5) {
		m = 30;
	} else {
		m = 50;
	}
	
	double z;
	
	if (time < 40) {
		z = time * m;
	} else {
		z = 40 * m + (time - 40) * m * 1.5;
	}
	
	printf("%.2lf", z);
	
	return 0;
}
