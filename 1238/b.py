q = int(input())

for _ in range(q):
    n, r = list(map(int, input().split()))

    monsters = list(set(map(int, input().split())))
    
    a = sum(monsters)
    i = 1
    c = 0
    k = (n - i) * r

    while k <= a:
        if (n == i): break

        i += 2
        c += 1
        k += (n - i) * r
        
    print(i)
    
