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
	int n,d;
    string str;
    char c;
    cin >> n >> d;
    vector<vector<bool>> s(n,vector<bool>(d,false));
    rep(i,n){
        cin >> str;
        rep(j,d){
            c = str[j];
            if(c == 'o'){
                s[i][j] = true;
            }
        }
    }

    int cmax = 0,max = 0;
    bool can=true;
    rep(i,d){
        rep(j,n){
            if(!(s[j][i])){    //d日目にj番目の人がxか
                can = false;
                cmax = 0;
                break;
            }
        }
        if(can){
            cmax++;
        }
        if(cmax > max){
            max = cmax;
        }
        can = true;
    }
    cout << max << endl;

    return 0;
}
