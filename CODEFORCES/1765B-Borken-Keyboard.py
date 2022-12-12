def solve():
    n = int(input())
    s = input()
    
    if n%3 != 2 and False not in [s[i*3+1] == s[i*3+2] for i in range(n//3)]:
        print("YES")
    else:
        print("NO")                   
                                       
        
        
for _ in range(int(input())):
    solve()                       
                    
