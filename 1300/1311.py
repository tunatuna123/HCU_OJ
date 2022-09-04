m,d = 'AB','OO'
ans = set([])
pr=set([])
for i in m:
    for j in d:
        ans.add("".join(sorted(i+j)))
for i in ans:
    if i[0]==i[1] or "O" in i:
        pr.add(i[0])
    else:
        pr.add(i)
for i in sorted(pr):
    print(i, end=' ')