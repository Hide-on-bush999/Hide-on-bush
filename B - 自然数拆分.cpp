#include<iostream>

using namespace std;
int a[1000], n;

void dfs(int num, int step) {
    if(step>2 && num == 0) {
    	for(int i = 1; i <= step-1; i++) {
    		//如果i=1，则先输出n=a[i]
        	if(i == 1)
        		cout << n << "=" << a[i];
        	else
        		cout << "+" << a[i];
      	}
      	//输出回车换行
      	cout << endl;
    }

    for(int i = 1; i <= num; i++) {
    	if(step>=2 && i<a[step-1])
			continue;
			
    	a[step] = i;
    	dfs(num-i, step+1);
    }
}

int main(void){
	//输入n
    cin >> n;

    //深搜
    dfs(n, 1);

    return 0;
}
