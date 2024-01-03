def solve():
    mp = {}
    n = int(input())
    s = input()

    ans = [0] * n  # Initialize answer array with zeros
    nxt = [n] * 26  # Initialize nxt array with n

    # Handle the last character
    ans[n - 1] = 1
    nxt[ord(s[n - 1]) - ord('a')] = n - 1

    # Iterate from the second last character to the first
    for i in range(n - 2, -1, -1):
        ans[i] = ans[i + 1] + (nxt[ord(s[i]) - ord('a')] - i)
        nxt[ord(s[i]) - ord('a')] = i

    print(ans[0])  # Print the final answer


for _ in range(int(input())):
    solve()
