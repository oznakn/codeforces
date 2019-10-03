q = int(input())

for _ in range(q):
    n = int(input())

    a = list(map(int, input().split()))

    a.sort()
    a.reverse()

    r = True
   
    b = []

    while len(a) > 0:
        x = a.pop(0)

        if len(a) == 0:
            r = False
            break

        b.append(x)
        
        if a[0] == x:
            a.pop(0)
            continue

        if len(a) == 0:
            r = False
            break

        c = x

        while c > 0:
            if len(a) == 0:
                r = False
                break

            c -= a.pop(0)
        
        if r == False or c < 0:
            r = False
            break
    
    if len(b) == 0 or len(b) % 2 == 1:
        r = False
    else:
        res = b[0] * b[-1]

        i = 1

        while i < len(b)/2:
            if res != (b[i] * b[len(b) - 1 - i]):
                r = False
                break
            i += 1

    if r:
        print('YES')
    else:
        print('NO')

