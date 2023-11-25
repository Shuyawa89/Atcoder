n = int(input())
an = input()

an = an.split()
an = [int(s) for s in an]
print(n)
print(an)

#n = 10
#an = [2184 2126 1721 1800 1024 2528 3360 1945 1280 1776]
count = 0
while True:
    flag = 0
    sum = 0
    for i in range(1,n):
        if(flag == True):
            break

        if (an[i] % 2) == 0:
            an[i] = an[i] // 2
            flag = True
        else:
            sum = sum + 1

    if(sum == n):
        break

    count = count + 1

print(count)
