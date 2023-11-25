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
	ll n,d,p;
    cin >> n >> d >> p;
    vi f(n+(n%d),0);
    rep(i,n){
        cin >> f[i];
    }
    //fをソートする
    sort(f.begin(),f.end());

    ll ans = 0;
    //cout <<"最大値" << f[f.size()-1] << endl;
    int i = f.size()-1;
    while(i >=0){
        ll count = 0;
        rep(j,d){
            count += f[i-j];
        }

        ans += (count > p) ? p : count;
        i -= d;

    }
    // for(int i = f[f.size()-1];i<=0;i--){
    //     cout << "inloop" << endl;
    //     ll count = 0;
    //     rep(j,n){
    //         count += f[i-j];
    //     }
    //     cout << i << "日から" << d <<  "    count: "<< count << endl;
    //     if(count > p*n)
    //         ans += d;
    //     else
    //         ans += count;
    //     i -= d;
    // }
    cout << ans << endl;
    return 0;
}
