from math import ceil

q = int(input())

for _ in range(q):
    n = int(input())

    a = sum(map(int, input().split()))

    print(ceil(a / n))
