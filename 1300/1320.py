import sys
input = sys.stdin.readline

def lcm(a, b):
    for i in range(max(a, b), (a * b) + 1):
        if i % a == 0 and i % b == 0:
            return i

a,b,c = 3,5,7

day = ['SAT','SUN',"MON",'TUE','WED','THU','FRI']
lim_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30]

day_pass = lcm(lcm(a,b), c) + 1
y,m,d = 2022, 1, 1

while day_pass > 0:
    if m == 1:
        if (y%4 == 0 and y%100 != 0) or (y%400 == 0):
            lim_month[1] = 29
        else:
            lim_month[1] = 28

    if(day_pass > lim_month[m-1]):
        day_pass = day_pass - lim_month[m-1]
        m += 1
        if m == 12:
            y += 1
            m=1
        continue
    else:
        break

print("%04d-%02d-%02d"%(y,m,day_pass), end=' ')
print(day[(lcm(lcm(a,b), c))%7])