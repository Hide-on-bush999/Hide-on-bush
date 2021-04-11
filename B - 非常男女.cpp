#include <stdio.h>

int max(int i, int j) {
	if (i > j) {
		return i;
	} else {
		return j;
	}
}

int main(void)
{
	int n, i, a[100005], b[100005], j, ans, M[200005];
	
	//输入总人数
	scanf("%d",&n);
	
	//输入男生和女生
	for (i = 1; i <= n; i++) {
		scanf("%d",&a[i]);
		if (a[i] == 0) {
			a[i] = -1;
		}
		b[i] = b[i-1] + a[i];
	}

	ans = 0;
	
	for(i = 1; i <= n; i++){
		if(b[i] == 0){
			ans = max(ans, i);
			continue;
		}
		
		if(M[b[i]+n]  && ans < i-M[b[i]+n])
			ans = i - M[b[i]+n];

		if(M[b[i]+n] == 0)
			M[b[i]+n] = i;
	}
	
	printf("%d",ans);

	return 0;
}
