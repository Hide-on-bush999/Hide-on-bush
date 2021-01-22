#include <stdio.h>

void QuickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int i = low;
        int j = high;
        int k = arr[low];
        while (i < j)
        {
            while(i < j && arr[j] >= k)
            {
                j--;
            }
 
            if(i < j)
            {
                arr[i++] = arr[j];
            }
 
            while(i < j && arr[i] < k)
            {
                i++;
            }
 
            if(i < j)
            {
                arr[j--] = arr[i];
            }
        }
 
        arr[i] = k;
 
        QuickSort(arr, low, i - 1);
        QuickSort(arr, i + 1, high);
    }
}


int main(void)
{
	int a[5] = {1,1,2,5,4};
	QuickSort(a,0,4);
	for(int i = 0;i < 5;i++)
		printf("%d ",a[i]);
	
	return 0;
}
