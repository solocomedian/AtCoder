n,q = map(int, input().split())
s = [0] * (n+1)
for _ in range(q):
    e,x = map(int, input().split())
    if e == 1:
        s[x-1] += 1
    if e == 2:
        s[x-1] = 2
    if e == 3:
        if s[x-1] == 2:
            print('Yes')
        else :
            print('No')