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
	int W, H, N, A, B;
    cin >> W >> H >> N;
    vi p(N), q(N);
    rep(i, N) cin >> p[i] >> q[i];
    cin >> A;
    vi a(A+2);
    a[0] = 0, a[A+1] = W;
    REP(i, 1, A+1) cin >> a[i];
    cin >> B;
    vi b(B+2);
    b[0] = 0, b[B+1] = H;
    REP(i, 1, B+1) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vvi cnt(a.size(), vi(b.size(), 0));

    rep(i, N) {
        int xi = upper_bound(a.begin(), a.end(), p[i]) - a.begin() - 1;
        int yi = upper_bound(b.begin(), b.end(), q[i]) - b.begin() - 1;
        cnt[xi][yi]++;
    }

    int minStrawberry = INT_MAX;
    int maxStrawberry = INT_MIN;

    rep(i, a.size() - 1) {
        rep(j, b.size() - 1) {
            mnin(minStrawberry, cnt[i][j]);
            mxin(maxStrawberry, cnt[i][j]);
        }
    }

    cout << minStrawberry << ' ' << maxStrawberry << endl;

    return 0;
}
