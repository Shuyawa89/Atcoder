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
	ll n,p,q;
    cin >> n >> p >> q;
    vl a(n);
    rep(i,n) cin >> a[i];

    sort(a.begin(), a.end());
    ll value = a[0]+q;
    cout << (value > p? p : value) << endl;

    return 0;
}
