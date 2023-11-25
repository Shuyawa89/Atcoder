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
	int n,ans=999;
    cin >> n;

    vector<char> s(n);
    rep(i,n){
        cin >> s[i];
    }
    
    bool a=false,b=false,c=false;
    rep(i,n){
        if(s[i] == 'A'){
            a = true;
        }
        if(s[i] == 'B'){
            b = true;
        }
        if(s[i] == 'C'){
            c = true;
        }
        if(a && b && c){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
