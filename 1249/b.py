q = int(input())

for _ in range(q):
    n = int(input())

    items = list(map(int, input().split()))

    days = [-1 for i in range(n)]

    unfound = set([i for i in range(n)])

    while len(unfound) > 0:
        i = unfound.pop()
        
        if days[i] == -1:
            seq = [i]

            start = i
            curr = i
            k = 0

            while k != 2:
                curr = items[curr] - 1
                seq.append(curr)

                if curr == start:
                    k += 1

            indexes = dict()

            for j, item in enumerate(seq):
                if item not in indexes:
                    indexes[item] = j
                elif days[item] == -1:
                    if i != item:
                        unfound.remove(item)

                    days[item] = j - indexes[item]

    print(' '.join(map(str, days)))
