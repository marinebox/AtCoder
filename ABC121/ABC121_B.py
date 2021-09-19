n, m, c = map(int, input().split())
b = list(map(int, input().split()))

ans = 0
for karen in range(n):
    a = list(map(int, input().split()))
    sum = c
    for frederica in range(m):
        sum += a[frederica] * b[frederica]
    if sum > 0:
        ans += 1

print(ans)