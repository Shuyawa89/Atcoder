def min_operations(N, A):
    A.sort()
    left = A[0]
    right = A[-1] + 1

    while right - left > 1:
        mid = (left + right) // 2
        if sum(max(0, x - mid) for x in A) > mid:
            left = mid
        else:
            right = mid

    return sum(max(0, x - right) for x in A)

n = int(input())
a = list(map(int, input().split()))[:n]
print(min_operations(n, a))