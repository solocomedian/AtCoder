n, y = map(int,input().split())
for i in range(n+1):
    k = n-i
    for l in range(k+1):
        yen = i*1000 + l*5000 + (k-l)*10000
        if yen == y:
            print(k-l,l,i)
            exit()
print(-1,-1,-1)