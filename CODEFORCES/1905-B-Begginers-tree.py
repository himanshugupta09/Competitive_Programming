nmax = 10**6 + 5
inf = 10**9 + 5
n, k, m, q = 0, 0, 0, 0
freq = [0] * nmax

def solve():
    global n, freq
    n = int(input())
    for i in range(1, n):
        a, b = map(int, input().split())
        freq[a] += 1
        freq[b] += 1
    cnt = 0
    for i in range(1, n+1):
        cnt += (freq[i] == 1)
        freq[i] = 0
    print((cnt + 1) // 2)

for _ in range(int(input())):
    solve()
