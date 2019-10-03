t = int(input())

for _ in range(t):
    n = int(input())

    items = list(map(int, input().split(' ')))

    if len(items) == 0:
        print(0)
    else:
        count = 0
        min_item = items[-1]

        for i in range(len(items) - 2, -1, -1):
            if items[i] > min_item:
                count += 1
            elif items[i] < min_item:
                min_item = items[i]

        print (count)
