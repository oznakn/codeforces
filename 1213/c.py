q = int(input())

for _ in range(q):
    n, m = list(map(int, input().split(' ')))

    count = int(n / m)

    if m % 10 == 0:
        print(0)
    elif count == 0: 
        print(0)
    else:
        items = []
        items_set = set()

        for i in range(1, count * 2):
            t = (m * i) % 10
                
            if t not in items_set:
                items.append(t)
                items_set.add(t)
            else:
                break
         
        sum_of_items = sum(items)

        items_count_in_count = int(count / len(items))

        result = items_count_in_count * sum_of_items

        result += sum(items[:(count % len(items))])

        print(result)
