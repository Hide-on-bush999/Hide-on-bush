#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;//由小到大排序
	//return *(int*)a - *(int*)b;//由大到小排序
}

int main(void)
{
	int a[5] = {6,5,1,8,9};
	qsort(a,5,sizeof(int),cmp);
	for (int i = 0; i < 5; i++) {
		printf("%d ",a[i]);
	}
	return 0;
}
