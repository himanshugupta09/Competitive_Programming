for _ in  range(int(input())):
    n = int(input())
    
    
    if n > 1099:
        print("YES")
    else:
        if n >=  111*(n%11):
            print("YES")
        else:
            print("NO")        
