n,m = map(int, input().split())
if n*n < m:
    print(-1)
    exit()
for i in range(int(n**0.5),n):
    for j in range(i+1):
        if i*j >= m:
            print(i*j)
            exit()