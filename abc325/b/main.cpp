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
    vi w(n),x(n);
    rep(i,n){
        cin >> w[i] >> x[i];
    }

    int maxnum = 0;
    rep(i,24){
        int sum = 0;
        rep(j,n){
            int now = (i+x[j])%24;
            if(9<=now && now<18){
                sum += w[j];
            }
        }
        mxin(maxnum,sum);
    }
    cout << maxnum << endl;
    return 0;
}
