s = list(map(int,input().split()))

if (s[7] > 675) | (s[7] < 100) | (s[7] % 25 != 0):
    print('No')
    exit()
    

for i in range(7):
    if s[i] > s[i+1]:
        print('No')
        exit()
    if s[i] > 675:
        print('No')
        exit()
    if s[i] < 100:
        print('No')
        exit()
    if s[i] % 25 != 0:
        print('No')
        exit()
print('Yes')