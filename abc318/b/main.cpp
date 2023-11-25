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
	vector<vector<bool>> a(100, vector<bool>(100, false));
    rep(i,n){
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1 >> b2;
        REP(j,a1,a2){
            REP(k,b1,b2){
                a[j][k] = true;
            }
        }
    }
    //trueの数を数える
    int ans = 0;
    rep(i,100){
        rep(j,100){
            if(a[i][j]){
                ans++;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
