N = int(input())
S = input()
T = input()

def niteru(s,t):
    flag = False
    if s == t:
        flag = True
    elif (s == '1' and t == 'l') or (s == 'l' and t == '1'):
        flag = True
    elif (s == '0' and t == 'o') or (s == 'o' and t == '0'):
        flag = True
    return flag

output = "Yes"

for i in range(N):
    #print("{}文字目".format(i))
    if not niteru(S[i],T[i]):
        output = "No"
        break

print(output)