#include <stdio.h>

int n, m;
char a[102][102];

void dfs(int x, int y)
{
	//判断是否超出边界
	if(x < 1 || x > m || y < 1 || y > n)
		return;
	
	//判断该位置是否有油田
    if(a[x][y] != '@')
    	return;
	a[x][y] = '*';//判断完成后将@改为*以代表该位置被搜索过
    
    //分别搜索8个方向
    for(int i = -1; i <= 1; i++)
    {
    	for(int j = -1; j <= 1; j++)
	    {
	        dfs(x+i, y+j);//递归
	    }
	}
}

int main(void)
{
	while(scanf("%d %d", &m, &n),m)
	{
		int z = 0;//初始化油田的数量
		
		//输入油田
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
