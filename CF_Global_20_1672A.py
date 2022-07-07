for _ in range(int(input())):
    n  = int(input())
    logs = list(map(int,input().split()))
    logs = [(i-1) for i in logs]   
    if sum(logs)%2 == 0:
        print("maomao90 ")
    else:
        print("errorgorn ")        
        
    
