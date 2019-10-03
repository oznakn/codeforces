n = int(input())

a = list(map(int, input().split()))

b = []

for x, y in enumerate(a):
    b.append((y, x))

b.sort()
b.reverse()

c = 0
r = []

for i, (x, y) in enumerate(b):
    c += i*x + 1
    r.append(str(y+1))

print(c)
print(' '.join(r))
