#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define mxin(a, b) (a = max(a, b))
using ll = long long;
using vl = vector<ll>;
using vvl= vector<vl>;
using pll = pair<ll, ll>;

ll max_path = 0;

void dfs(int cur, ll cur_cost, vector<vector<pll>> &adj, vector<bool> &visited) {
    visited[cur] = true;
    mxin(max_path, cur_cost);
    for (pll next : adj[cur]) {
        if (!visited[next.first]) {
            dfs(next.first, cur_cost + next.second, adj, visited);
        }
    }
    visited[cur] = false;
}


int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<pll>> adj(N);
    rep(i, M) {
        ll A, B, C;
        cin >> A >> B >> C;
        adj[A-1].emplace_back(B-1, C);
        adj[B-1].emplace_back(A-1, C);
    }

    vector<bool> visited(N, false);
    rep(i, N) {
        dfs(i, 0, adj, visited);
    }

    cout << max_path << endl;

    return 0;
}
