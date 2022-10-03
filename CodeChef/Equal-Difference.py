for _ in range(int(input())):
    n = int(input())
    l = list(map(int,input().split()))
    mx = 0
    
    mp = {}
    for i in l:
        if i in mp:
            mp[i] += 1
            
            
        else:
            mp[i] = 1    
    
    mx = max(mp.values())    
    if n<3:
        print(0)
    elif mx == 1:
        print(n-2)
    else:
        print(n-mx)    
                        
