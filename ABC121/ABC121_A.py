H, W = map(int, input().split())
h, w = map(int, input().split())

white = H * W
cross = h * w
black = h * W + H * w - cross

ans = white - black
print(ans)