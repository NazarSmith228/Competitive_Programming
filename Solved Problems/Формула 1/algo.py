n, a, b = map(int, input().split())
i = n
j = 1
res1 = 0
res2 = 0
if a < b:
    while i > 0:
        res1 += a * j
        j *= 2
        i -= 1
    j = 1
    i = n
    while res2 < res1:
        res2 += b * j
        j *= 2
        i -= 1
        if res2 > res1:
            print(n - i - 1)
            break
        elif res2 == res1:
            print(n - i)
            break


else:
    while i > 0:
        res1 += b * j
        j *= 2
        i -= 1
    j = 1
    i = n
    while res2 < res1:
        res2 += a * j
        j *= 2
        i -= 1
        if res2 > res1:
            print(n - i - 1)
            break
        elif res2 == res1:
            print(n - i)
            break
