import math

a = float(input("What is side A?"))
b = float(input("What is side B?"))
c = float(input("What is side C?"))

# Semi perimeter
s = (a + b + c)/2

# Area
v = s * (s - a) * (s - b) * (s - c)

A = math.sqrt(v)

print(A)