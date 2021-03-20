#include <stdio.h>

int main(void)
{
	int a;
	double b;
	char c;
	scanf("a=%d,b=%lf:c=%c",&a,&b,&c);
	if (a < 0){
		printf("a=%-10d,b=%20.3lf,c=%c",a,b,c);
	}
	else{
		printf("a=+%-9d,b=%20.3lf,c=%c",a,b,c);
	}
	return 0;
}
