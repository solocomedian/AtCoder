n,k = map(int,input().split())
s = input()
count = 0
newlist = []
for i in s:
    if count < k:
        if i == 'o':
            count += 1
        newlist.append(i)
    else :
        newlist.append('x')
result = ''.join(newlist)
print(result)