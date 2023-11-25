import sys
sys.setrecursionlimit(10**6)

def dfs(x, y, visited, board, h, w):
    if visited[x][y]:
        return
    
    visited[x][y] = True
    
    dx = [0, 0, 1, -1, 1, 1, -1, -1]
    dy = [1, -1, 0, 0, 1, -1, 1, -1]

    for i in range(8):
        nx, ny = x + dx[i], y + dy[i]

        if 0 <= nx < h and 0 <= ny < w and board[nx][ny] == '#' and not visited[nx][ny]:
            dfs(nx, ny, visited, board, h, w)

def count_sensor(board, h, w):
    visited = [[False] * w for _ in range(h)]
    count = 0

    for x in range(h):
        for y in range(w):
            if board[x][y] == '#' and not visited[x][y]:
                count += 1
                dfs(x, y, visited, board, h, w)

    return count

h, w = map(int, input().split())
board = [list(input()) for _ in range(h)]

print(count_sensor(board, h, w))
