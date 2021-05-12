#include <stdio.h>

int book[1000005];

int main(void)
{
    int i, n, m, z;
    
    //��1��1000000֮�����з���Ҫ�����ȫ���浽book��������
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
        
        //����n��m������䣬��������Ҫ�������z++
        for (i = n; i <= m; i++) {
            if(book[i]) {
                z++;
            }
        }
        printf("%d\n", m-n-z+1);
    }
    return 0;
}
