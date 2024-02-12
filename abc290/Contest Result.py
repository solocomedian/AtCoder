n,m = map(int,input().split())
a = list(map(int,input().split()))
b = list(map(int,input().split()))
sums = 0
for i in b:
    sums += a[i-1]
print(sums)
    