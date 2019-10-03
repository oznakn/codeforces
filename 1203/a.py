q = int(input())

for _ in range(q):
    n = int(input())

    p = list(map(int, input().split()))

    ma = max(p)
    mi = min(p)

    c = True
    r = True

    for i in range(len(p) - 1):
        if p[i+1] == ma and p[i] == mi:
            c = True
        elif p[i+1] == mi and p[i] == ma:
            c = False
        elif p[i+1] - p[i] == 1:
            c = True
        elif p[i+1] - p[i] == -1:
            c = False
        else:
            r = False
            break
    
    if r:
        print('YES')
    else:
        print('NO')
