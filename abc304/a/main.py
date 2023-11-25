N = int(input())

x = []
y = []

for i in range(N):
    line = input().split()
    x.append(str(line[0]))
    y.append(int(line[1]))


sorted_ages = sorted(y)
index = y.index(sorted_ages[0])
num= index

while True:
    print(x[index])
    index = (index + 1) % N
    if index == num:
        break

