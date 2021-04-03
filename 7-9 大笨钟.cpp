#include <stdio.h>

int main(void)
{
	char a[10];
	scanf("%c%c:%c%c",&a[0], &a[1], &a[2], &a[3]);
	
	int b[10];
	b[0] = a[0] - '0';
	b[1] = a[1] - '0';
	b[2] = a[2] - '0';
	b[3] = a[3] - '0';
	
	int h, m;
	
	h = b[0]*10 + b[1];
	m = b[2]*10 + b[3];
	
	//char p[] = "Dang";
	
	if (h > 12) {
		h -= 12;
		if (m > 0) {
			h++;
		}
		for (int i = 0; i < h; i++) {
			printf("Dang");
		}
	} else {
		printf("Only %c%c:%c%c.  Too early to Dang.", a[0], a[1], a[2], a[3]);
	}
	
	
	
	
	
	return 0;
}
