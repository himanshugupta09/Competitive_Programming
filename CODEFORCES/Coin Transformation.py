import math
def solve():
    n = int(input())
    if n <= 1:
        print(n)
        return
    
    res =  1
    while n > 3:
        n //= 4
        #base*=4
        res*=2
    print(res)

    

for _ in range(int(input())):
    solve()
