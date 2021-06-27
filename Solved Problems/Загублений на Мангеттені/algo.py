import sys
x = 0
y = 0
ls = {}
ls[x] = {}
ls[x][y] = 1

s = list(input())

for i in range(0, len(s)):
    a = s[i]
    if a == 'E':
        x += 1
    elif a == 'W':
        x -= 1
    elif a == 'N':
        y += 1
    else:
        y -= 1   
    if ls.get(x) is None:
        ls[x] = {}
    if ls.get(x).get(y) is None:
        ls[x][y] = 1
    else:
        print("Something goes wrong...")
        sys.exit()

print("Looks OK.")
