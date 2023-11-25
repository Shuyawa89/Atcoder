N = int(input())
s = []
for i in range(N):
    s.append(input())
    if len(s[i]) == 1:
        s[i] = s[i] + '$'

_set = set()

for string in s:

    if string not in _set:
        _set.add(min(string, string[::-1]))

# print(_set)
print(len(_set))
