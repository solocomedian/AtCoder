n = int(input())
s = input()
f1 = 0
f2 = 1
for i in range(n):
    if s[i] == 'o':
        f1 = 1
    if s[i] == 'x':
        f2 = 0
if (f1 == 1) and (f2 == 1):
    print('Yes')
else :
    print('No')