cx,cy=1,1
r=3
x,y=3,4

if ((cx-x)**2+(cy-y)**2)**(1/2)>r:
    print('out')
elif ((cx-x)**2+(cy-y)**2)**(1/2)==r:
    print('on')
else:
    print('in')