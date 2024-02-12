n,m = map(int, input().split())
c = list(input().split())
d = list(input().split())
p = list(map(int, input().split()))
out = 0
for i in range(len(c)):
    if c[i] in d:
        out += p[d.index(c[i])+1]
    else:
        out += p[0]
print(out)