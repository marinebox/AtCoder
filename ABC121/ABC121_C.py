n, m = map(int, input().split())
drink = []
for tsumugi in range(n):
    drink.append(list(map(int, input().split())))
    #栄養ドリンクの単価と販売本数をリストの形で保存

drink.sort()
bought = 0
shop = 0
ans = 0
while 1:
    dif = m - bought
    if drink[shop][1] >= dif:
        ans += drink[shop][0] * dif
        break
    else:
        ans += drink[shop][0] * drink[shop][1]
        bought += drink[shop][1]
    shop += 1

print(ans)