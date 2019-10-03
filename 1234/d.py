from heapq import *

s = list(input())

q = int(input())

dp = dict()

changed = set()

for _ in range(q):
    items = list(input().split())

    if items[0] == '1':
        index = int(items[1]) - 1
    
        s[index] = items[2]

        changed.add(index)
    else:
        start = int(items[1]) - 1
        end = int(items[2])

        if (start,end) in dp:
            if len(changed.intersection(set(range(start, end)))) == 0:
                print(dp[(start,end)])
                continue
        
        calc = len(set(s[start:end])) 
        dp[(start,end)] = calc
            
        print (calc)
