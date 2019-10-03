import math

n = int(input())

a = list(map(int, input().split()))

m = max(a)

numbers = []

for i in a:
    x = (m - i)

    if x != 0:
        numbers.append(x)

if len(numbers) == 0:
    print(0, 0)
if len(numbers) == 1:
    print(1, numbers[0])
else:
    gcd = math.gcd(numbers[0], numbers[1])

    for i in range(2, len(numbers)):
        gcd = math.gcd(gcd, numbers[i])

    result = 0

    for x in numbers:
        result += x // gcd

    print (result, gcd)
