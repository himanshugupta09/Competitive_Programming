def help(n):
    p=1
    while p*2 <= n:
        p *= 2
    return p    
    
    
    
for _ in range(int(input())):
    n = int(input())
    casp = help(n)
    hasp = casp//2
    a1 = n-casp+1
    a2 = casp - hasp
    print(max(a1,a2))
           
                     
     
    
   
   
   
    
     
