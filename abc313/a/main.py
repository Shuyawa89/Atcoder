n = int(input())
p = list(map(int, input().split()))

p1 = p.pop(0)
max = max(p)

if p1 > max:
    print('0')
elif p1 == max:
    print('1')
else:
    print(max - p1 + 1)


# if p1 == p[-1]:
#     print(p1)
# else:
#     print(p[-1]-p1)