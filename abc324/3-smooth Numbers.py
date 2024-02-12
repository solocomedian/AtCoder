n = int(input())
r = 0
while True:
    r = n % 2
    if r == 1:
        break
    n = n / 2
if n == 1:
    print('Yes')

else:
    while True:
        r = n % 3
        if r != 0:
            break
        n = n / 3
    if n == 1:
        print('Yes')
    else:
        print('No')