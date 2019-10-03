import math

dp = dict()

def find(x):
    x1 = x

    if x1 in dp:
        return dp[x1]

    r = set()
    v = dict()

    if x % 2 == 0:
        r.add(2)

        c = 0
        while x % 2 == 0:
            x = x // 2
            c += 1
        v[2] = c

    i = 3

    while x != 1:
        if x % i == 0:
            r.add(i)
            
            c = 0
            while x % i == 0:
                x = x // i
                c += 1
            v[i] = c

        i += 2

    dp[x1] = (r, v)

    return (r, v)
        
n = int(input())

a = list(map(int, input().split()))

r, v = find(a[0])

if n != 1:
    for i in range(1, len(a)):
        r1, v1 = find(a[i])

        r = r.intersection(r1)

        for j in r:
            v[j] = min(v[j], v1[j])

result = 1

for j in r:
    result *= v[j]+1

print(result)
