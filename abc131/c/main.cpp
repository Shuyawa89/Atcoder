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
	ll a,b,c,d;
    cin >> a >> b >> c >> d;
    int count = 0;
    int div = c*d;
    REP(i,a,b){
        if(i%c != 0 && i%d != 0) count++;
    }
    cout << count << endl;
    return 0;
}
