input()
get_gen = lambda : (int(x) for x in input().split())
top = 0
bottom = 0
for xi, wi in zip(get_gen(), get_gen()):
    top += xi * wi
    bottom += wi
print(round(top / bottom, 1))