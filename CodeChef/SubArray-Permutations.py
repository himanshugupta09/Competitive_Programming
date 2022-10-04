for _ in range(int(input())):
    n,k = map(int,input().split())
    
    if n <= 1:
        print(1)
    else:
        if k == 1:
            print(-1)
        else:
            i = 1
            while i<=k-1:
                print(i,end = ' ')
                i += 1
            i = n    
            while i >= k:
                print(i,end = ' ')
                i -= 1
            print() 
