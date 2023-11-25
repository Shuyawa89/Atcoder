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
	int a,b;
    cin >> a >> b;
    if (a==1&&b==2)
        cout << "Yes" << endl;
    else if(a==2&&(b==1||b==3))
        cout << "Yes" << endl;
    else if(a==3&&b==2)
        cout << "Yes" << endl;
    else if(a==4&&b==5)
        cout << "Yes" << endl;
    else if(a==5&&(b==4||b==6))
        cout << "Yes" << endl;
    else if(a==6&&b==5)
        cout << "Yes" << endl;
    else if(a==7&&b==8)
        cout << "Yes" << endl;
    else if(a==8&&(b==7||b==9))
        cout << "Yes" << endl;
    else if(a==9&&b==8)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
