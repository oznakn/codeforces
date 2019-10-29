q = int(input())

for _ in range(q):
    n = int(input())

    items = list(map(int, input().split()))

    items.sort()
    
    ans = 1

    for i in range(n - 1):
        if items[i] + 1 == items[i+1]:
            ans = 2
            break

    print(ans)
