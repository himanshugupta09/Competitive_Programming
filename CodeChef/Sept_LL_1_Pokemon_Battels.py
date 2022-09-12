
def pokemon_go():
    _  = int(input())
    
    gr = list(map(int,input().split()))
    wt = list(map(int,input().split()))
    
    
    c = [(gr[i],wt[i]) for i in range(len(gr))]
    
    c.sort()
    
    ans,mx = 0,0
    
    for i in reversed(range(len(gr))):
        if c[i][1] > mx:
            ans += 1
        mx = max(mx,c[i][1])
    print(ans)    
    
    
    


for _ in range(int(input())):
    pokemon_go()



