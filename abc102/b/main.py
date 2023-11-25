n = input()
a = list(map(int,input().split()))

min_a = abs(min(a))
max_a = abs(max(a))

print(max_a - min_a)