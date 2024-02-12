s = ('a','b','c','d','e','f','g','h')
for i in range(8,0,-1):
    a =input()
    for j in range(8):
        if a[j] == '*':
            print(s[j]+str(i))
            exit()