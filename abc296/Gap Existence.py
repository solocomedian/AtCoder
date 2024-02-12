n,x = map(int, input().split())
b = set()
for a in input().split():
    b.add(int(a))

x = int(abs(x))

b = tuple(b)
n = len(b)
print(b)
for j in range(n):
    for k in range(j,n):
        print(b[k]-b[j])
        if (b[k] - b[j]) > x:
            break
        if (b[k] - b[j]) == x:
            print('Yes')
            exit()
print('No')