N = int(input())
election_data = []

total_seats = 0  # 総議席数
a_seats = 0  # Aが確保している議席数
pulls_to_win = []  # (必要な引き抜き人数, 議席数)のリスト

for _ in range(N):
    X, Y, Z = map(int, input().split())
    total_seats += Z
    if X > Y:
        a_seats += Z
    else:
        pulls_to_win.append((Y - X + 1, Z))

# 必要な引き抜き人数 / 議席数 の昇順でソート
pulls_to_win.sort(key=lambda x: x[0] / x[1])

# Aが過半数の議席を確保するために必要な最小の引き抜き人数を計算
min_pulls = 0
for pulls, Z in pulls_to_win:
    if a_seats * 2 > total_seats:
        break
    min_pulls += pulls
    a_seats += Z

print(min_pulls)
