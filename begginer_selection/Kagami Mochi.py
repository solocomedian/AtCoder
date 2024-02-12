n = int(input())
d = [0]*n
for i in range(n):
    d[i-1]= int(input())

s = set(d)
print(len(s))