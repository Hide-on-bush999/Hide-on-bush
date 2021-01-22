#include <stdio.h>

long long int jc(int n);

long long int jc(int n)
{
	long long int z;
	if(n > 0)
	z = n * jc(n - 1);
	else
	z = 1; 
	return z;
}

int main(void)
{
	int n;
	scanf("%d",&n);
	
	long long int z;
	z = jc(n);
	
	printf("%d",z);
	return 0;
}
