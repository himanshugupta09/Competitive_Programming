for  _ in range(int(input())):
  n,k = map(int,input().split())
  lst = list(map(int,input().split()))
  idx = n-(k%n)
  for i in range(idx,n):
    print(lst[i],end = " ")
  for i in range(idx):
    print(lst[i],end = " ")
  print()  
