from collections import Counter
def solve():
  n,m = map(int,input().split())
  a = input()
  b = input()
  mp1 = Counter(a)
  mp2 = Counter(b)
  
  max_b = float('inf')
  for char in mp2:
    if char in mp1:
      max_b = min(max_b, mp1[char] // mp2[char])
    else:
      max_b = 0
      break
    
  print(max_b)


for _ in range(int(input())):
  solve()
      
