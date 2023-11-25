#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)

int main()
{
	int n,y; cin >> n >> y;

	for(int i=0;i <= n;i++){
		for(int j=0;j <= n-i;j++){
			int k = n - i - j;
			if(i*10000+j*5000+k*1000 == y){
				printf("%d %d %d\n",i,j,k);
				return 0;
			}
		}
	}
	printf("-1 -1 -1\n");
    return 0;
}
