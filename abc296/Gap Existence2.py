# データの探索を行う際はset型に対してinで判定すると実行時間を1/1000に短縮できる
n,x = map(int, input().split())
a = input().split()
b = [0]*n
x = int(abs(x))
for i in range(n):
    b[i] = int(a[i])
b.sort(reverse = True)
b2 = set(b)
for j in range(n):
    if (b[j]-x) in b2:
        print('Yes')
        exit()
print('No')