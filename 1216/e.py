import sys
sys.setrecursionlimit(1000000000)

s = [0]

for i in range(1, (10**5)//4):
    if i < 10:
        k = 1
    elif i < 100:
        k = 2
    elif i < 1000:
        k = 3
    elif i < 10000:
        k = 4
    elif i < 100000:
        k = 5
    elif i < 1000000:
        k = 6
    elif i < 10000000:
        k = 7
    elif i < 100000000:
        k = 8
    elif i < 1000000000:
        k = 9
    elif i < 10000000000:
        k = 10

    s.append(s[-1] + k) 

for i in range(1, len(s)):
    s[i] += s[i-1]

def find(x, start, end):
    if end >= start:
        mid = start + ((end - start) // 2)
        
        if s[mid] == x:
            return (mid, s[mid])
        elif s[mid] < x:
            return find(x, mid+1, end)
        else:
            return find(x, start, mid-1)
    else:
        return (start, s[start])

q = int(input())
dp = dict()

for _ in range(q):
    u = int(input())
    
    if u in dp:
        print(dp[u])
        continue

    found = next((i, x) for i, x in enumerate(s) if x >= u)
    # found = find(u, 0, len(s))
    
    c = u - s[found[0]-1]
    result = ''
    
    for i in range(1, found[0] + 3):
        if i < 10:
            k = 1
        elif i < 100:
            k = 2
        elif i < 1000:
            k = 3
        elif i < 10000:
            k = 4
        elif i < 100000:
            k = 5
        elif i < 1000000:
            k = 6
        elif i < 10000000:
            k = 7
        elif i < 100000000:
            k = 8
        elif i < 1000000000:
            k = 9
        elif i < 10000000000:
            k = 10

        c -= k
        
        if c <= 0:
            result = list(str(i))[c-1]
            break
    
    dp[u] = result

    print(result)
