x1, y1, x2, y2 = list(map(int, input().split()))
x3, y3, x4, y4 = list(map(int, input().split()))
x5, y5, x6, y6 = list(map(int, input().split()))

total = (x2-x1) * (y2-y1)

a1 = min(x4, x2) - max(x3, x1)
b1 = min(y4, y2) - max(y3, y1)

a2 = min(x6, x2) - max(x5, x1)
b2 = min(y6, y2) - max(y5, y1)

x8 = min(x6, x4)
x7 = max(x5, x3)
y8 = min(y6, y4)
y7 = max(y5, y3)

a3 = 0
b3 = 0

if x8 - x7 > 0 and y8 - y7 > 0:
    a3 = min(x8, x2) - max(x7, x1)
    b3 = min(y8, y2) - max(y7, y1)

if a1 > 0 and b1 > 0:
    total -= a1 * b1

if a2 > 0 and b2 > 0:
    total -= a2 * b2

if a3 > 0 and b3 > 0:
    total += a3 * b3

if total > 0:
    print('YES')
else:
    print('NO')
