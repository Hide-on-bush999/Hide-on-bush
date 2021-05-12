#include <stdio.h>

//辗转相除法
int zxc (int a, int b) {
	int t;
	while (b != 0) {
		t = a % b;
		a = b;
		b = t;
	}
	return a;
}

int main(void)
{
	int p, i, j, m, n, t;

	scanf("%d", &p);
	
	for (i = 0; i < p; i++) {
		scanf("%d %d", &m, &n);
		
		//判断是否有非1的公约数
	    t = zxc(m, n);
	    if (t == 1)
	    	printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
