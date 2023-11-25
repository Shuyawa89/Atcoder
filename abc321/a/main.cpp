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
	string s;
    cin >> s;
    bool flag = true;

    int d = s[0]- '0';

    REP(i,1,s.size()){
        if(s[i]-'0' >= d){
            flag = false;
            break;
        }
        d = s[i]-'0';
    }
    cout << (flag ? "Yes" : "No") << endl;
    return 0;
}
