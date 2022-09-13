for _ in range(int(input())):
    n=int(input())
    s=input();
    i=n-1;
    ls=[]
    while(i>=0):
        if(s[i]!='0'):
            ls.append(chr((int)(s[i])+96));
            i=i-1;
        else:
            i=i-1;
            temp=s[i-1]+s[i];
            ls.append(chr((int)(temp)+96))
            i=i-2;
    ls.reverse()
    print("".join(ls))
   
    
