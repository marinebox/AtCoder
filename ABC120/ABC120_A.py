a, b, c = map(int, input().split())

needcost = a * c
if needcost >= b:
    ans = b // a
else:
    ans = c

print(ans)