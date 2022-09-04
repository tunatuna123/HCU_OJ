n = 20
lst = [4,2,3,1,10,3,1,3,4,5,9,7,4,1,3,8,2,5,1,9]
min_n,max_n = 3,7
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