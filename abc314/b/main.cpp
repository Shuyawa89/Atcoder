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
    cin >> n;
    vi c(n);
    vector<vector<bool>> a(n, vector<bool>(n, false));
    rep(i, n)
    {
        cin >> c[i];
        rep(j,c[i]){
            int tmp=0;
            cin >> tmp;
            a[i][tmp] = true;
        }
    }
    cin >> x;
    //cout << x << ": xの値" << endl;

    int ansk = 0;
    int min = 999;
    vi ans;
    rep(i,n){
        if(a[i][x]){
            if(c[i] < min){
                min = c[i];
                ansk = 1;
                ans.clear();
                ans.push_back(i+1);
            }
            else if(c[i] == min){
                ans.push_back(i+1);
                ansk++;
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ansk << endl;
    rep(i,ans.size()){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
