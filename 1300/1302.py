
n,f,s = map(int, input().split())
first_day = list(map(int,input().split()))
second_day = list(map(int,input().split()))
total = [x for x in range(1,n+1)]

overlap = 0
omission = 0

if f>s:
    for i in first_day:
        if i in second_day:
            overlap+=1
else:
    for i in second_day:
        if i in first_day:
            overlap+=1

for i in total:
        if i not in first_day and i not in second_day:
            omission+=1

print(omission, overlap)