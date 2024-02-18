from collections import Counter

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    a = list(dict.fromkeys(a))
    pnt, ans = 0, 0
    for i in range(len(a)):
        while a[i] - a[pnt] >= n:
            pnt += 1
        ans = max(ans, i - pnt + 1)
    print(ans)

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()

