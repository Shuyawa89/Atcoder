#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))


int main()
{
	int a,b;
	cin >> a >> b;
	cout << ((a*b)%2 ? "Odd" : "Even") << endl;
    return 0;
}
