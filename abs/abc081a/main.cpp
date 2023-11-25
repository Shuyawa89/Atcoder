#include <bits/stdc++.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define alin(v) for(auto &a : v) cin >> a;
#define all(v) (v).begin(), (v).end()
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))

int main()
{
	string s;
	cin >> s;
	int count = 0;
	rep(i,3){
		if(s[i]=='1') count++; 
	}
	cout << count << endl;
    return 0;
}
