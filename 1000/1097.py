h,w = map(int,input().split())
board = [[0]*101 for i in range(101)]
n = int(input())
for i in range(n):
    l,d,x,y = map(int, input().split())
    if d == 0:
        for i in range(l):
            board[x][y+i] = 1
    else:
        for i in range(l):
            board[x+i][y] = 1

for i in range(1,h+1):
    for j in range(1,w+1):
        print(board[i][j], end=' ')
    print("")