import heapq

def find_day(N, K, meds):
    meds.sort(reverse=True)  # 降順にソートする
    q = []  # 優先度キューを初期化する

    for i in range(1, meds[0][0] + 2):
        while meds and meds[-1][0] < i:  # その日に終わる薬をキューに追加する
            a, b = meds.pop()
            heapq.heappush(q, -b)
        total = 0
        while q:  # その日に必要な薬をキューから取り出す
            b = -heapq.heappop(q)
            remain = max(0, total + b - K)  # 残りの薬の量を計算する
            if remain > 0:
                heapq.heappush(q, -remain)  # 残りの薬を次の日に回す
            total += b - remain
            if total > K:
                break
        if total <= K:  # 薬の総量がK以下ならその日を返す
            return i
    return -1  # 薬の総量がK以下にならなければ-1を返す

N, K = map(int, input().split())
meds = [list(map(int, input().split())) for _ in range(N)]
print(find_day(N, K, meds))
