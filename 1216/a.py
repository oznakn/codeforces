n = int(input())

s = list(input())

r = 0
c = 0

for i in range(len(s)):
    if s[i] == 'a': c += 1
    else: c -= 1

    if i % 2 == 1:
        if c == 2:
            s[i] = 'b'
            r += 1
        elif c == -2:
            s[i] = 'a'
            r += 1

        c = 0

print(r)
print(''.join(s))
