n=5
lst = [4,5,2,3,1]
m=3
juice=[]
raw=[]
pie=[]
for i in lst:
    if i<m:
        juice.append(i)
    elif i==m:
        raw.append(i)
    else:
        pie.append(i)
ans = juice+raw+pie
for i in range(n):
    print(ans[i], end=' ')