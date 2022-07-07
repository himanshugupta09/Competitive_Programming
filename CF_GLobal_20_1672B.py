import re
from typing import Pattern
for _ in range(int(input())):
    s = input()
    ok = False 
    if s[-1] == 'B':
        ok  =  True
    else:
        ok = False   
    sm = 0
    for i in s:
        if i == 'A':
            sm+=1
        else:
            sm-=1
        if sm<0:
            ok = False
    if ok:
        print("YES")
    else:
        print("NO")                    
