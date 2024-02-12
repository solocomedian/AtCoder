n,m = map(int, input().split())
ap = list(map(int, input().split()))
sort_no_ap = []
record = [input() for i in range(n)]
points = []
counts = []
# 各プレーヤーの正解した問題の合計点と不正解の問題の点数を降順に並び替えたものをそれぞれ記録
for i in range(n):
    no_ap = []
    point = 0
    s = record[i]
    for j in range(m):
        if s[j]=='o':
            point += ap[j]
        else:
            no_ap.append(ap[j])
    points.append(point+i+1)
    sort_no_ap.append(no_ap.sort(reverse=True))
# 最高得点に近づくように不正解の問題の点数を得点が大きい順に足していく
for i in range(n):
    Max = max(points)
    point = points[i]
    count = 0
    k = len(sort_no_ap[i])
    for j in range(k):
        if Max - point > 0:
            point += sort_no_ap[i].pop(0)
            count += 1
        else:
            print(count)