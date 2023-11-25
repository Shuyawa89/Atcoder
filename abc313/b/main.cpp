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
	int n,m;
    cin >> n >> m;
    vi a(m), b(m);
    rep(i, m) cin >> a[i] >> b[i];

    vector<bool> c(n, false);
    rep(i, m)
    {
        c[b[i]-1] = true;
    }
    int num_ture = count(c.begin(), c.end(), true);
    if (num_ture >= n-1)
    {
        auto it = find(c.begin(), c.end(), false);
        if(it != c.end()){
            int index = distance(c.begin(), it);
            cout << index + 1 << endl;
            return 0;
        }
    // "index" now holds the position of the first false in the vector.
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}
