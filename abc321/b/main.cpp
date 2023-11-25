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
	int n,x;
    cin >> n >> x;
    vi a(n-1);
    rep(i,n-1){
        cin >> a[i];
    }
    int ans = -1;

    sort(a.begin(),a.end());

    int sum = 0;
    for(int i = 1;i<n-2;++i){
        sum += a[i];
    }

    int need = x-sum;
    //needの有効範囲チェック
    if(need >= 0 && need <= 100){
        if(need <= a[0])
            ans = 0;
        else if(need > a[n-2])
            ans = -1;
        else if(need == a[n-2])
            ans = a[n-2];
        else
            ans = need;
    }


    cout << ans << endl;
    return 0;
}
