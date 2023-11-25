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

void shift(vvi& a, int N) {
    int tL, tR, bL, bR;
    tL = a[0][0];
    tR = a[0][N-1];
    bL = a[N-1][0];
    bR = a[N-1][N-1];

    for (int i = 0; i < N/2; ++i) {
        for (int j = i; j < N - 1 - i; ++j) {
            a[0][j] = a[0][j + 1];
            a[j][N - 1] = a[j + 1][N - 1];
            a[N - 1][N - 1 - j] = a[N - 1][N - 2 - j];
            a[N - 1 - j][0] = a[N - 2 - j][0];
        }
    }

    a[0][N - 1] = tL;
    a[N - 1][N - 1] = tR;
    a[N - 1][0] = bL;
    a[0][0] = bR;
}

int main()
{
	int N;
    cin >> N;
    vvi a(N, vi(N));

    rep(i, N) {
        rep(j, N) {
            cin >> a[i][j];
        }
    }
    shift(a,N);
    rep(i, N) {
        rep(j, N) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
