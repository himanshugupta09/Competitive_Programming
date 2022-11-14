def solve():
    mg,my,mr = map(int,input().split())
    og,oy,oar = map(int,input().split())
    pg,py,pr = map(int,input().split())
    
    g = mg+og+pg
    y = my+oy+py
    r = mr+oar+pr
    
    ls = [g,y,r]
    
    ls.append(mg+my+mr)
    ls.append(og+oy+oar)
    ls.append(pg+py+pr)
    
    
    for i in range(len(ls)):
        if ls[i]%2 == 0:
            ls[i] -= 1
    ls.append(0)        
    print(max(ls))        
    
    
    

for _ in range(int(input())):
    solve()
