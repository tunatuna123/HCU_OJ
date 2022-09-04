n=int(input())
lst = list(map(int,input().split()))
m=int(input())
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