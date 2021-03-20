#include <stdio.h>

int n, m;
char a[102][102];

void dfs(int x, int y)
{
	//�ж��Ƿ񳬳��߽�
	if(x < 1 || x > m || y < 1 || y > n)
		return;
	
	//�жϸ�λ���Ƿ�������
    if(a[x][y] != '@')
    	return;
	a[x][y] = '*';//�ж���ɺ�@��Ϊ*�Դ����λ�ñ�������
    
    //�ֱ�����8������
    for(int i = -1; i <= 1; i++)
    {
    	for(int j = -1; j <= 1; j++)
	    {
	        dfs(x+i, y+j);//�ݹ�
	    }
	}
}

int main(void)
{
	while(scanf("%d %d", &m, &n),m)
	{
		int z = 0;//��ʼ�����������
		
		//��������
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				scanf("%c", &a[i][j]);
			}
		}
		
		for(int i = 1; i <= m; i++)
		{
			for(int j = 1; j <= n; j++)
        	{
            	if(a[i][j] == '@')
            	{
               	 	dfs(i, j);
                	z++;
            	}
        	}
		}
        printf("%d\n",z);
	}
	return 0;
}
