import math as mt
for _ in range(int(input())):
    n = int(input())
    c = list(map(int,input().split()))
    cf = list(map(int,input().split()))
    
    mn = 0
    wm = 0
    res = 0
    
    for i in range(n):
        res += c[i]//2
        res += cf[i]//2
        if c[i]%2:
            mn+=1
        if cf[i]%2:
            wm+=1
            
    print(res + min(mn,wm))    
