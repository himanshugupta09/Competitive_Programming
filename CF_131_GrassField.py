for _ in range(int(input())):
    a,b = map(int,input().split())
    c,d = map(int,input().split())
    if sum([a,b,c,d]) == 0:
        print(0)
    elif sum([a,b,c,d]) == 4:
        print(2)
    else:
        print(1)        
