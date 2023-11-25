from itertools import permutations

# ユーザーから3×3のマトリックスを1次元にして標準入力として受け取る
rows = []
for i in range(3):
    rows += list(map(int, input().split()))

index = [0, 1, 2, 3, 4, 5, 6, 7, 8]

all_perms = list(permutations(index))

# 不満になるケースをカウント
unhappy_count = 0

for perm in all_perms:
    #9この要素のリストを宣言
    now = [999] * 9
    for i in perm:
        now[i] = rows[i]
        if(i==0):
            if(now[0]==now[1] or now[0]==now[2] or now[0]==now[4] or now[0]==now[6] or now[0]==now[8]):
                unhappy_count += 1
        elif(i==1):
            if(now[1]==now[0] or now[1]==now[2] or now[1]==now[4] or now[1]==now[7]):
                unhappy_count += 1
        elif(i==2):
            if(now[2]==now[0] or now[2]==now[1] or now[2]==now[4] or now[2]==now[5] or now[2]==now[6] or now[2]==now[8]):
                unhappy_count += 1
        elif(i==3):
            if(now[3]==now[0] or now[3]==now[4] or now[3]==now[5] or now[3]==now[6]):
                unhappy_count += 1
        elif(i==4):
            if(now[4]==now[0] or now[4]==now[1] or now[4]==now[2] or now[4]==now[3] or now[4]==now[5] or now[4]==now[6] or now[4]==now[7] or now[4]==now[8]):
                unhappy_count += 1
        elif(i==5):
            if(now[5]==now[2] or now[5]==now[3] or now[5]==now[4] or now[5]==now[8]):
                unhappy_count += 1
        elif(i==6):
            if(now[6]==now[0] or now[6]==now[2] or now[6]==now[3] or now[6]==now[4] or now[6]==now[7] or now[6]==now[8]):
                unhappy_count += 1
        elif(i==7):
            if(now[7]==now[1] or now[7]==now[4] or now[7]==now[6] or now[7]==now[8]):
                unhappy_count += 1
        elif(i==8):
            if(now[8]==now[0] or now[8]==now[2] or now[8]==now[4] or now[8]==now[5] or now[8]==now[6] or now[8]==now[7]):
                unhappy_count += 1

total_cases = len(all_perms)
print(unhappy_count)

# 不満にならない確率
happy_prob = 1 - unhappy_count / total_cases

print(happy_prob)
