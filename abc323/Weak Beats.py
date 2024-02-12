s = input()
s = list(str(s))
n = len(s)
for i in range(1,n+1,2):
    if s[i] == '1':
        print('No')
        exit()
print('Yes')