import math

def distance(x1, y1, x2, y2):
    return math.sqrt((x1 - x2)**2 + (y1 - y2)**2)

def main():
    t = int(input())
    
    for _ in range(t):
        px, py = map(int, input().split())
        ax, ay = map(int, input().split())
        bx, by = map(int, input().split())
        
        pa = distance(px, py, ax, ay)
        pb = distance(px, py, bx, by)
        oa = distance(0, 0, ax, ay)
        ob = distance(0, 0, bx, by)
        ab = distance(ax, ay, bx, by)
        
        ans = float('inf')
        ans = min(ans, max(pa, oa))
        ans = min(ans, max(pb, ob))
        ans = min(ans, max(ab / 2, pa, ob))
        ans = min(ans, max(ab / 2, pb, oa))
        
        print("{:.10f}".format(ans))

if __name__ == "__main__":
    main()
