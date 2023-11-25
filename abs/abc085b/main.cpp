#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)

int main()
{
	int n; cin >> n;
	vector<int> input(n);
	rep(i,n) cin >> input[i];
	sort(input.begin(),input.end());
	input.erase(unique(input.begin(),input.end()),input.end());
	//rep(i,input.size()) cout << input[i] << '\n';
	cout << input.size() << endl;
    return 0;
}
