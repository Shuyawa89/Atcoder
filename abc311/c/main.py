from collections import deque

def find_unique_cycle(graph, N):
    def bfs(start):
        visited = [False] * (N+1)
        queue = deque([(start, [start])])

        while queue:
            current_vertex, path = queue.popleft()

            for neighbor in graph[current_vertex]:
                if neighbor == start:
                    # 閉路が形成された場合、結果を返す
                    return path
                if not visited[neighbor]:
                    visited[neighbor] = True
                    queue.append((neighbor, path + [neighbor]))

        return None

    for i in range(1, N+1):
        cycle = bfs(i)
        if cycle:
            return cycle

    return None

# 入力の取得
N = int(input())
A = list(map(int, input().split()))

# グラフを隣接リストとして表現
graph = {i: [] for i in range(1, N+1)}
for i, vertex in enumerate(A, start=1):
    graph[i].append(vertex)

# 重複のない有向閉路を見つける
result = find_unique_cycle(graph, N)

# 結果の表示
if result:
    print(" ".join(map(str, result)))