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


vvi adj;
vector<bool> res;

void dfs(int v){
    res[v] = true;
    for(int u : adj[v]){
        if(res[u] == false)
            dfs(u);
    }
}
//2点の座標から距離を求める関数(ユークリッド距離)
double distance(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
int main()
{
	ll N,D;
    cin >> N >> D;
    vi X(N), Y(N);
    rep(i, N) cin >> X[i] >> Y[i];

    adj.resize(N);
    res.resize(N, false);

    rep(i, N){
        bool flag = false;
        rep(j,N){
            if(i != j && distance(X[i], Y[i], X[j], Y[j]) <= D){
                adj[i].push_back(j);
            }
        }
    }
    dfs(0);

    rep(i, N){
        cout << (res[i]? "Yes" : "No") << endl;
    }
    return 0;
}
