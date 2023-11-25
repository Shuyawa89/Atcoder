#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, x, n) for (int i = x; i < n; i++)
using vi = vector<int>;
using vvi = vector<vi>;
using ll = long long;
using vl = vector<ll>;
using vll= vector<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vb = vector<bool>;
using si = set<int>;
using sl = set<ll>;

void dfs(int x, int y, vector<vector<bool>> &visited, vector<string> &board, int h, int w) {
    if (visited[x][y]) return;
    
    visited[x][y] = true;
    
    int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
    int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};

    rep(i, 8) {
        int nx = x + dx[i], ny = y + dy[i];

        if (0 <= nx && nx < h && 0 <= ny && ny < w && board[nx][ny] == '#' && !visited[nx][ny]) {
            dfs(nx, ny, visited, board, h, w);
        }
    }
}

int count_sensor(vector<string> &board, int h, int w) {
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    int count = 0;

    rep(x, h) {
        rep(y, w) {
            if (board[x][y] == '#' && !visited[x][y]) {
                count++;
                dfs(x, y, visited, board, h, w);
            }
        }
    }

    return count;
}

int main()
{
	int h, w;
    cin >> h >> w;
    vector<string> board(h);
    rep(i, h) {
        cin >> board[i];
    }

    cout << count_sensor(board, h, w) << endl;

    return 0;
}
