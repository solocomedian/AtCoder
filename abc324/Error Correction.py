n, t_ = input().split()
n = int(n)
t_ = list(t_)
l = len(t_)
I = []
s = [list(input()) for i in range(n)]
for i in range(n):
    s_ = s[i]
    ls = len(s_)
    if ls == l:
        c = 0
        for j in range(l):
            if s_[j] != t_[j]:
                c += 1
        if c < 2:
            I.append(i+1)
    elif (l - ls) == 1:
        for j in range(l):
            s1 = t_.copy()
            del s1[j]
            if s1 == s_:
                I.append(i+1)
    elif (l - ls) == -1:
        for j in range(ls):
            s1 = s_.copy()
            del s1[j]
            if s1 == t_:
                I.append(i+1)
print(len(I))
for i in range(len(I)):
    print(I[i] , end=' ')
            