
n,f,s = 22,9,9
first_day = [1,3,6,8,11,14,16,19,21]
second_day = [3,5,8,10,11,14,16,18,21]
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
