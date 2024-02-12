n = int(input())
box = [0 for i in range(10**9 + 1)]
size = []
count = 0
for i in range(n):
    s, c = map(int, input().split())
    box[s] = c
    size.append(s)
for i in range(n):
    s = size[i]
    num = box[s]
    while num > 1:
        print(num, box[s],s)
        num = box[s]// 2
        box[s] = box[s] % 2
        s = s*2
        box[s] = num
print(sum(box))
        