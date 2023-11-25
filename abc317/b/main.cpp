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
    vi a(n);
    rep(i,n){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    int start = a[0];
    int ans = a[a.size()-1];

    for(int i = 0;i<n;i++){
        if(a[i] == start+i){
            continue;
        }
        else{
            ans = a[i] - 1;
            break;
        }
    }
    // for(int i = a[0];i<n+a[a.size()-1];i++){
    //     if (i == a[0]){
    //         continue;
    //     }
    //     else{
    //         ans = i;
    //         break;
    //     }
    // }
    cout << ans << endl;
    return 0;
}
