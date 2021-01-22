#include <stdio.h>

int Bin_Search(long long int *a,long long int n,long long int b)
{
	long long int first = 0,last = n-1,mid;
	while(first <= last)
	{
		mid = (first + last) / 2;
		if(a[mid] > b)
		{
			last = mid-1;
		}
		else if(a[mid] < b)
		{
			first = mid+1;
		}	
		else
		{
			return 1;
		}
	}
	return 0;
}

void QuickSort(long long int *arr,int low,long long int high)
{
    if (low < high)
    {
        int i = low;
        long long int j = high;
        long long int k = arr[low];
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
	long long int n;
	scanf("%d",&n);
	
	long long int m;
	scanf("%d",&m);
	
	long long int a[n];
	long long int zjz;
	for(long long int i = 0;i < n;i++)
	{
		scanf("%d",&zjz);
		a[i] = zjz;
	}
	
	long long int b[m];
	for(long long int i = 0;i < m;i++)
	{
		scanf("%d",&zjz);
		b[i] = zjz;
	}
	
	QuickSort(a,0,n-1);

	int flag = 0;
	long long int i = 0;
	while(i < m)
	{
		flag = Bin_Search(a,n,b[i]);
		if(flag)
		printf("YES\n");
		else
		printf("NO\n");
		i++;
	}
	return 0;
}
