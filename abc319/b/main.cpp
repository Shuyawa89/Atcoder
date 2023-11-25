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
	int n,jn;
    cin >> n;
    vi div;
    // 1から10までの約数リスト
    for(int i = 1; i <= 9; ++i) {
        if(n%i == 0){
            div.push_back(i);
        }
    }
    jn = div.size();

    rep(i,n+1){
        rep(j,jn){
            if(n%div[j] == 0 && i%(n/div[j])==0){
                cout << div[j];
                break;
            }
            if(j == jn-1){
                cout << '-';
            }
        }
    }

    cout << endl;
    return 0;
}
