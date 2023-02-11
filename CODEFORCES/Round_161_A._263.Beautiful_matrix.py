x,y = 0,0
for i in range(5):
    ls = list(map(int,input().split()))
    if 1 in ls:
        y = ls.index(1)
        x = i

print(abs(2-x) + abs(2-y))        
