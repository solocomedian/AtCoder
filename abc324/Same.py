n = int(input())
a = [int(x) for x in input().split()]
for i in range(n):
    if a[0] != a[i]:
        print('No')
        exit()
print('Yes')
