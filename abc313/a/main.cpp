#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define mxin(a, b) (a = max(a, b))
#define mnin(a, b) (a = min(a, b))
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;
using vl = vector<ll>;
using vll= vector<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using si = set<int>;
using sl = set<ll>;

int main()
{
	int n;
    cin >> n;
    vi p(n);
    rep(i, n) cin >> p[i];

    if (n == 1)
    {
        cout << "0" << endl;
        return 0;
    }
    int p0 = p[0];
    p.erase(p.begin());
    int max = *max_element(p.begin(), p.end());


    if (p0 > max)
    {
        cout << "0" << endl;
    }
    else if (p0 == max)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << max - p0 + 1 << endl;
    }

    return 0;
}
