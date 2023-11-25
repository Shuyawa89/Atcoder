def shift(g, N):
    t = g[0][:-1]
    l = [g[i][0] for i in range(1, N)]
    b = g[-1][1:]
    r = [g[i][-1] for i in range(N-1)]

    g[0] = [l[0]] + t
    for i in range(1, N-1):
        g[i][0], g[i][-1] = l[i], r[i-1]
    g[-1] = b + [r[-1]]
    return g

N = int(input())
grid = []
for _ in range(N):
    row = input()
    row_list = [int(x) for x in row]
    grid.append(row_list)

grid = shift(grid, N)

for row in grid:
    for num in row:
        print(num, end="")
    print()
