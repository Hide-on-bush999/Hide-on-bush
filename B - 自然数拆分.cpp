#include<iostream>

using namespace std;
int a[1000], n;

void dfs(int num, int step) {
    if(step>2 && num == 0) {
    	for(int i = 1; i <= step-1; i++) {
    		//���i=1���������n=a[i]
        	if(i == 1)
        		cout << n << "=" << a[i];
        	else
        		cout << "+" << a[i];
      	}
      	//����س�����
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
	//����n
    cin >> n;

    //����
    dfs(n, 1);

    return 0;
}
