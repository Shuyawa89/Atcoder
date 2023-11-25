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

bool isM(int num)
{
    return 1 <= num && num <= 12;
}

int main()
{
	int YM;
    cin >> YM;
    string ans;
    int AB = YM /100,CD = YM%100;


    if(isM(AB) && isM(CD))
        ans = "AMBIGUOUS";
    else if(isM(AB))
        ans = "MMYY";
    else if(isM(CD))
        ans = "YYMM";
    else
        ans = "NA";

    cout << ans << endl;

    return 0;
}
