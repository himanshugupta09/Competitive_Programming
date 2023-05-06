def solve():
    n = int(input())
    s = input()
    res = 0
    temp = 0
    for i in range(n):
        if s[i] == '1':
            #res = max(res,temp)
            temp = 0
        elif s[i] == '0':
            temp += 1 
            #print(s[i])
            res = max(res,temp)
    print(res)           
    
for _ in range(int(input())):
    solve()
