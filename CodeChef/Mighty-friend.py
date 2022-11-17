def mf():
    n,k = map(int,input().split())
    l = list(map(int,input().split()))
    ma = l[0:n:2]
    ta = l[1:n:2]
    
    while k != 0:
        mn = min(ta)
        mx = max(ma)
        
        id1 = ma.index(max(ma))
        id2 = ta.index(min(ta))
        
        ma[id1] = mn
        ta[id2] = mx
        k -= 1
    
    if sum(ta)>sum(ma):
        print("YES")
    else:
        print("NO")
    
    
    
for _ in range(int(input())):
    mf()
