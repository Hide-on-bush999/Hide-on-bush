#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int a[1000];
	int middle;
	int end;
	int trt;
	scanf(" target = %d",&trt);
	
	for (int i = 0;i < 4;i++)
	{
		for (int j = i+1;j < 5;j++)
		{
			end = a[i] + a[j];
			if (end == trt)
			{
				printf("[%d,%d]",i,j);
				break;
			}
		}
		if (end == trt)
			{
				break;
			}
	}
	
	
	
	
	for (int i = 0; i < numsSize; ++i) {
        for (int j = i + 1; j < numsSize; ++j) {
            if (nums[i] + nums[j] == target) {
                int* ret = malloc(sizeof(int) * 2);
                ret[0] = i, ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;

	return 0;
}
