def reverse_S(number, level, c):
    print('debug',number,level,c)

    if level == c:
        return number

    number1 = number // 2
    number2 = number - number1

    number = (number1 * 10) + number2

    return reverse_S(number, level + 2, c)

n = int(input(''))

for i in range(n):
    values = input('').split(' ')

    c = int(values[0])
    number = int(values[1])

    print (reverse_S(number, 1, c))