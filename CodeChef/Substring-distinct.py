for _ in range(int(input())):
    s,k = map(str,input().split())
    
    
    if int(k) == 1:
        print(len(s))
    else:
        ans = 0
        j = int(k)
        for i in range(0,len(s)):
            if len(set(s[i:j])) == int(k):
                ans += 1
            j += 1
        print(ans)    
        
