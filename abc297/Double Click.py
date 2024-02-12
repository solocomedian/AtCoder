a = input().split()
b = input().split()
for i in range(int(a[0])-1):
    if (int(b[i+1])-int(b[i])) <= int(a[1]):
        print(int(b[i+1]))
        exit()
print(-1)