for _ in range(int(input())):
    s = input()
    
    a,d = 0,0
    
    for i in s:
        if i == '(':
            a += 1
        else:
            d = max(d,a)
            a -= 1
    
    for i in range(d):
        print('(',end = '')
    for i in  range(d):
        print(')',end = '')
    print()    
    
    
