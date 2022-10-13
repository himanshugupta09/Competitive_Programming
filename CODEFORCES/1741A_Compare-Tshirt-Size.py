def solve():
    a,b  = map(str,input().split())
    
    a_back = a[-1]
    b_back = b[-1]
    
    if a_back == b_back:
        if len(a) == len(b):
            print("=")
        elif a_back == 'S':
            print(">") if len(a) < len(b) else print("<")
        else:
            print("<") if len(a) < len(b) else print(">")     
    else:
        print(">") if ord(a_back) < ord(b_back) else print("<")        

for _ in range(int(input())):
    solve()                                              
