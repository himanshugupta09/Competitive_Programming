import math


def solve():
    n,k = map(int,input().split())
    a = list(map(int,input().split()))
    G = 0
    for i in a:
        G = math.gcd(G,i)
        
    g = 0
    res = 0
    for i in a:
        g = math.gcd(g,i)
        
        if g == G:
            res += 1
            g = 0
        if res  == k:
            break
    
    if  res == k:
        print("YES")
    else:
        print("NO")

for _ in range(int(input())):
    solve()
