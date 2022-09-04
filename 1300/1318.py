import sys
from datetime import datetime, timedelta
input = sys.stdin.readline

n = 1000
now = datetime.strptime("03-02", "%m-%d")
stmp = 1
ans = 1
cnt = 0

def is_prime_number(x):
    if x == 1:
        return False
    for i in range(2, x):
        if x % i == 0:
            return False 
    return True

while ans < n:
    if is_prime_number(int(now.strftime("%d"))):
        stmp *= 3
    else:
        stmp *= 2
    ans += stmp
    now = now + timedelta(days=1)
    cnt += 1

print(cnt+1)