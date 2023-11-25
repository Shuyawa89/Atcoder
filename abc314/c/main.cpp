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
    string s;
    cin >> s;
    int ci;

    vvi c(m);
    rep(i,n){
        cin >> ci;
        c[ci-1].push_back(i);
    }
    rep(i,m){
        char tmp;

        //cのtrueIndexの値を右シフトする
        tmp = s[c[i].back()];
        for(int j=c[i].size()-1; j>0; j--){
            s[c[i][j]] = s[c[i][j-1]];
        }
        s[c[i][0]] = tmp;

    }
    cout << s << endl;
    return 0;
}
