#include <stdio.h>

int book[1000005];

int main(void)
{
    int i, n, m, z;
    
    //把1到1000000之中所有符合要求的数全部存到book数组里面
    for (i = 1; i <= 1000000; i++) {
        int j = i;
        while (j) {
            if (j%10 == 4 || j%100 == 62) {
                book[i] = 1;
                break;
            }
            j /= 10;
        }
    }
    
    while (scanf("%d %d", &n, &m) && n + m != 0) {
        z = 0;
        
        //遍历n到m这个区间，遇到符合要求的数就z++
        for (i = n; i <= m; i++) {
            if(book[i]) {
                z++;
            }
        }
        printf("%d\n", m-n-z+1);
    }
    return 0;
}
