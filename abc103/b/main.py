s = list(input())
t = list(input())
flag = False
for i in range(len(s)):
    if(s == t):
        flag = True
    tmp = s.pop(0)
    s.append(tmp)
print("Yes" if flag else "No")