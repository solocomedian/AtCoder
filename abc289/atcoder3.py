## ビット全探索を用いる
# https://qiita.com/gogotealove/items/11f9e83218926211083a
# https://note.nkmk.me/python-list-flatten/
# https://note.nkmk.me/python-list-unique-duplicate/
import itertools

newlist = []
c = []
count = 0
n,m = map(int,input().split())
for i in range(m):
  c.append(int(input()))
  a = list(map(int,input().split()))
  newlist.append(a)
for i in range(2**m):
  subset = []
  for j in range(m):
    if((i >> j) & 1):
      subset.extend(newlist[j])
  final_subset = set(subset)
  if len(final_subset) == n:
    count += 1
print(count)