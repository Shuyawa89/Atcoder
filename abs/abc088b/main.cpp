#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)

int main()
{
	int n;
	cin >> n;
	int alice=0,bob=0;
	vector<int> input(n);
	//各要素の入力
	rep(i,n)
		cin >> input[i];
	sort(input.begin(),input.end());
	//rep(i,n) cout << input[i] << endl;
	for(int i = n-1; i >= 0; i--){
		alice += input[i];
		i--;
		bob += input[i];
	}
	cout << alice - bob << endl;

    return 0;
}
