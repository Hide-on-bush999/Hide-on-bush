#include <stdio.h>

int main(void)
{
	char ch = 'A';
	int a = 3;
	char * p = &ch;
	int * q = &a;
	printf("%d %d\n",sizeof(a),sizeof(ch));
	printf("%d %d\n",sizeof(p),sizeof(q));
	printf("%d %d\n",sizeof(*p),sizeof(*q));
	return 0;
}
