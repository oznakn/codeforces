q = int(input())

for _ in range(q):
    n = int(input())

    rows = [None, None]

    rows[0] = list(map(int, list(input())))
    rows[1] = list(map(int, list(input())))

    y = 0
    x = 0

    result = True

    last = 0

    while True:
        if rows[y][x] == 1 or rows[y][x] == 2:
            if last == 1:
                result = False
                break
            else:
                x += 1
                last = 0
        else:
            if last == 1:
                x += 1
                last = 2
            else:
                if y == 0:
                    y = 1
                else:
                    y = 0
                last = 1

        if x == n:
            result = y == 1
            break
            
    if result:
        print ('YES')
    else:
        print ('NO')
