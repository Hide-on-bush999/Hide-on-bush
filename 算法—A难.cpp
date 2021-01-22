#include <stdio.h>

int main(void)
{
	int high,up,down;
	scanf("%d %d %d",&high,&up,&down);
	
	int day = 1;
	for(int h = 0;h < 100000;day++)
	{
		h += up;
		if(h > high || h == high)
		{
			printf("%d",day);
			break;
		}
		h -= down;
	}
	return 0;
}
