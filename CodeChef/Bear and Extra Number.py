# cook your dish here
for _ in range(int(input())):
    n=int(input())
    li=list(map(int,input().split()))
    li.sort()
    x=li[1]-li[0]
    for i in range(n-1):
        if (li[i]==li[i+1]):
            print(li[i])
            break
    else:
        if x!=1:
            print(li[0])
        else:
            print(li[-1])
            
