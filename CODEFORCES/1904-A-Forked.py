def main():
    t = int(input())
    for _ in range(t):
        a, b = map(int, input().split())
        x1, y1 = map(int,input().split())
        x2, y2 = map(int, input().split())
        st1, st2 = set(), set()
        
        dx, dy = [-1, 1, -1, 1], [-1, -1, 1, 1]

        for j in range(4):
            st1.add((x1 + dx[j] * a, y1 + dy[j] * b))
            st2.add((x2 + dx[j] * a, y2 + dy[j] * b))
            st1.add((x1 + dx[j] * b, y1 + dy[j] * a))
            st2.add((x2 + dx[j] * b, y2 + dy[j] * a))

        ans = len(st1.intersection(st2))
        print(ans)

if __name__ == "__main__":
    main()
