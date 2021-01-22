a = [i + 1 for i in range(10)]
print(a)
a = [i for i in range(10) if i % 2 == 0]
print(a)
a = [x + y for x in range(5) if x % 2 == 0 for y in range(5) if y % 3 == 0]
print(a)
b = [x + y for x in 'ZZX' for y in 'ZM']
print(b)
a = [[x,y] for x in range(5) if x % 2 == 0 for y in range(7) if y % 3 == 0]
print(a)
