cx,cy=map(int,input().split())
r=int(input())
x,y=map(int,input().split())

if ((cx-x)**2+(cy-y)**2)**(1/2)>r:
    print('out')
elif ((cx-x)**2+(cy-y)**2)**(1/2)==r:
    print('on')
else:
    print('in')