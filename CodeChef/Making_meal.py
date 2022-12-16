def solve():
    
    n = int(input())
    ans = 0
    res  = ''
    for i in range(n):
        s = input()
        res += s
    ne = res.count('e')//2
    nc = res.count('c')//2
    no = res.count('o')
    nd = res.count('d')
    nf = res.count('f')
    nh = res.count('h')
    
    ans = min([ne,nc,nd,nh,nf])
        
   
        
    print(ans)      
        
for _ in range(int(input())):
    solve()
