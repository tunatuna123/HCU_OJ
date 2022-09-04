import sys
input = sys.stdin.readline

n = int(input())
lst = list(map(int,input().split()))
min_n,max_n = map(int,input().split())

sum_val = sum(lst[min_n-1:max_n])
prefix_sum = [0]
cnt = 0

for i in range(n):
    prefix_sum.append(prefix_sum[i]+lst[i])

for i in range(n):
    for j in range(i+1, n+1):
        if sum_val == prefix_sum[j]-prefix_sum[i]:
            cnt += 1

print(cnt)