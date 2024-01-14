import math as m

def solve():
    a,b = map(int,input().split())
    if b%a == 0:
        print(b*(b//a))
        return
    else:
        g = m.gcd(a,b)
        print((a*b)//g)
        return




for _ in range(int(input())):
    solve()
