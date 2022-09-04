n,m = map(int, input().split())
lst = list(map(int, input().split()))
    count = 0
    for j in range(1,m+1):
        if lst[i]%j==0:
            count+=1
    print(count-1+(m//lst[i]))