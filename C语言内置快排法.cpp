#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
	return *(int*)a - *(int*)b;//��С��������
	//return *(int*)a - *(int*)b;//�ɴ�С����
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
