n = int(input())
a = list(map(int,input().split()))
newlist = sorted(a, reverse=True)
pointA = 0
pointB = 0
l = len(newlist)

if (l%2) == 1:
    for i in range(l//2):
        pointA += newlist.pop(0)
        pointB += newlist.pop(0)
    pointA += newlist.pop(0)
else :
    for i in range(l//2):
        pointA += newlist.pop(0)
        pointB += newlist.pop(0)
print(pointA-pointB)
        