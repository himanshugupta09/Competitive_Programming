# cook your dish here
# cook your dish here
n,m=map(int,input().split())
a={}
ans=0
for i in range(m):
    p,t=map(int,input().split())
    if a.get(p) is None:
        a[p]=t
        ans+=t
    else:
        a[p]+=t
        ans+=a[p]
    print(ans) 
