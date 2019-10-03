n, k = list(map(int, input().split()))

messages = list(map(int, input().split()))

result = []
visited = set()

for x in messages:
    if x not in visited:
        result.append(x)
        visited.add(x)

    if len(result) > k:
        a = result.pop(0)
        visited.remove(a)

result.reverse()

print(len(result))
print(' '.join(map(str, result)))
