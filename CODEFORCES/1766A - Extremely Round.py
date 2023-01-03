def checker(n):
    x = str(n)
    cn = 0
    for i in x:
        if i != '0':
            cn += 1
    return cn == 1        

dp = []

for i in range(1,1000000):
    if checker(i):
        dp.append(i)
        

def solve():
    n = int(input())
    ans = 0
    
    for i in dp:
        if i <= n:
            ans += 1
    print(ans)        
            
        
        
                    
                                       
        
        
for _ in range(int(input())):
    solve()                       
                 
