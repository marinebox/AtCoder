a, b, c, x, y = map(int, input().split())
cost: int = int(5e9)

# Pattern 1
# don't buy C
cost1 = 0
cost1 += a * x
cost1 += b * y

# Pattern 2
# buy just
amountC = min(x, y)
needA = x - amountC
needB = y - amountC
cost2 = 0
cost2 += c * amountC * 2
if needA > 0:
    cost2 += a * needA
if needB > 0:
    cost2 += b * needB

# Pattern 3
# buy many C
amountC = max(x, y)
cost3 = c * amountC * 2

cost = min(cost1, cost2, cost3)

print(cost)
