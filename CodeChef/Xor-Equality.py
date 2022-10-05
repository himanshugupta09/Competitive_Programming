for _ in range(int(input())):
    a = 2
    mod = (10**9)+7
    
    n = int(input())
    b = n-1
    if n == 1:
        print(1)
    else:
        res = 1
        
        while b > 0:
            if (b)&1:
                res = ((res*a)%mod)
            a = (a*a)%mod
            b >>= 1
        print(res)    
                
                        
