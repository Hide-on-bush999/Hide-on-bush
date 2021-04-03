#include <stdio.h>

int main(void)
{
	int x, y, z;
	scanf("%d %d %d",&x, &y, &z);
	
	if (x + y <= z || x + z <= y || y + z <= x) {
		printf("NO");
	} else {
		printf("YES");
	}
	return 0;
}
