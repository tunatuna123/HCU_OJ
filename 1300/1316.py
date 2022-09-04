import sys
input = sys.stdin.readline

n = int(input())
lst = list(map(int,input().split()))
min_n,max_n = map(int,input().split())
sum_val = sum(lst[min_n-1:max_n])

end = 0
cnt = 0
summary = 0

for start in range(n):
    while summary < sum_val and end < n:
        summary += lst[end]
        end += 1
    if summary == sum_val:
        cnt += 1
    summary -= lst[start]

print(cnt)