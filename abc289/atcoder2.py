newlist = []
n,m = map(int,input().split())
s = list(map(int,input().split()))
for l in range(1,n+1):
  if l > 1:
    if l <= r:
      continue
  r = l
  for i in range(0,m):
    if r == s[i]:
      r += 1
  for k in sorted(range(l,r+1), reverse=True):
    newlist.append(k)
for j in newlist:
  print(j,end=' ')