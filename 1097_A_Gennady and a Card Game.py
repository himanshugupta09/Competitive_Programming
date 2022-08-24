t = input()
a,b = t[0],t[1]
h = input()
h = h.replace(" ","")

if a in h or b in h:
    print("YES")
else:
    print("NO")    
