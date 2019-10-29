import itertools
import sys

sys.setrecursionlimit(1000000000)

LIMIT = 10

powers = [i for i in range(LIMIT)]
perms = []
items = []

numbers = []

for i in range(1, LIMIT + 1):
    perms += itertools.combinations(powers, i)

for i in perms:
    r = 0
    for j in i:
        r += pow(3, j)

    numbers.append(r)

numbers.sort()

def calculate(num):
    global numbers

    new_numbers = [num]

    for n in numbers:
        new_numbers.append(n + num)

    numbers += new_numbers

def find(l, r, item):
    mid = l + (r - l) // 2

    if r >= l:
        if numbers[mid] == item:
            return item

        if numbers[mid] > item:
            return find(l, mid-1, item)

        else:
            return find(mid+1, r, item)
    else:
        return numbers[l]

q = int(input())

for _ in range(q):
    n = int(input())
    
    while numbers[-1] < n:
        LIMIT += 1
        calculate(pow(3, LIMIT))
    
    print(numbers[-1], n)

    print (find(0, len(numbers), n))
