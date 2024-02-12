n = int(input())
a = list(map(int, input().split()))
count = 0
while True:
    for i in range(n):
        if a[i]%2 == 1:
            break
    else:
        a = [x/2 for x in a]
        count += 1
        continue
    break
print(count)