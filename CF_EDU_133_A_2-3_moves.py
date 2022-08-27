import  math

def solve(n):
    if n == 1:
        return 2
    elif n == 3 or n == 2:
        return 1
    else:
        return math.ceil(n/3)        
            
            
    




t = int(input())
while t != 0:
    n = int(input())
    op = solve(n)
    print(op)
    t -=1      
