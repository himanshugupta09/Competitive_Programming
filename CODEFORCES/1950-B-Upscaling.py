import math 
def solve():
    n = int(input())
    for i in range(2*n):
        x = math.ceil(i//2)
        for j in range(2*n):
            y = math.ceil(j//2)
            if (x+y)%2 == 0:
                print('#',end = '')
            else:
                print('.',end='')
        print()
    


for _ in range(int(input())):
    solve()
