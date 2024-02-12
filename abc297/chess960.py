s = input()
r = [0,0]
b = [0,0]
rcnt = 0
bcnt = 0
for i in range(len(s)):
    if s[i] == 'R':
        r[rcnt] = i
        rcnt += 1
    elif s[i] == 'B':
        b[bcnt] = i
        bcnt += 1
    elif s[i] == 'K':
        k = i
if (b[0] + b[1]) % 2 == 0:
    print('No')
    exit()
if r[0] > k or r[1] < k:
    print('No')
    exit()
print('Yes')
     