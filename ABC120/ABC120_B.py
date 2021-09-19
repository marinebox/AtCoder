a, b, k = map(int, input().split())

div = []
for karen in range(1, min([a, b]) + 1):
    if(a % karen == 0 and b % karen == 0):
        div.append(karen)

ans = div[-k]
print(ans)