# DFS関数の定義
def dfs(cur, cur_cost, adj, visited):
    global max_path  # グローバル変数を使用
    max_path = max(max_path, cur_cost)  # 経路の最大値を更新

    visited[cur] = True  # 現在のノードを訪問済みにする

    for neighbor, cost in adj[cur]:
        if not visited[neighbor]:  # 未訪問の隣接ノードに対して
            dfs(neighbor, cur_cost + cost, adj, visited)  # DFSを再帰的に実行

    visited[cur] = False  # 現在のノードの訪問状態を戻す

# main関数
if __name__ == '__main__':
    N, M = map(int, input().split())  # ノード数Nと辺の数M
    adj = [[] for _ in range(N)]  # 隣接リスト
    max_path = 0  # 経路の最大値

    # 辺の情報を読み取り、隣接リストを作成
    for _ in range(M):
        A, B, C = map(int, input().split())
        adj[A-1].append((B-1, C))
        adj[B-1].append((A-1, C))  # 無向グラフなので、双方向に追加

    visited = [False] * N  # 訪問状態を保存するリスト

    # 各ノードからDFSをスタート
    for start in range(N):
        dfs(start, 0, adj, visited)

    print(max_path)  # 経路の最大値を出力
