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
    int N,K;
    cin >> N >> K;

    if(N == K)
        cout << 1 << endl;
    else
        cout << int((double)(N-1) / (double)(K-1) + 0.999999) << endl;
    return 0;
}

// 1 2 3 4 5 6 7 8 9   9個 5→2 4→3