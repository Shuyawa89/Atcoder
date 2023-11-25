s = input()
maxlength = 0
for start in range(len(s)):
    for end in range(start, len(s)):
        ss = s[start:end+1]
        if ss == ss[::-1]:
            maxlength = max(maxlength, end-start+1)
print(maxlength)