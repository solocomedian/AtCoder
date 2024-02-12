n = int(input())
s = [input() for i in range(n)]
winlist = []
for i in range(n):
    k = s[i].count('o')
    winlist.append([k,i+1])
winlist.sort(key=lambda x: x[0], reverse=True)
for i in range(n):
    print(winlist[i][0] , end=' ')