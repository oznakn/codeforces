import math
line1 = input('')
line1 = line1.split(' ')
n = float(line1[0])
r = float(line1[1])
val = math.cos(float(360/n) * 3.14159265359 / 180);
print(val)
val = (1-val)**0.5
print(val)
print(r*val/((2**0.5)-val))