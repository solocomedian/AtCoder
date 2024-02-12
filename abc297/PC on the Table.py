h,w = map(int, input().split())
j = 0
for i in range(h):
    s[i] = list(input())
for i in range(h):
    j = 0
    while j < w:
        print(j)
        if s[i][j] == 'T':
            #print('OK')
            if s[i][j+1] == 'T':
                #print('GOOD')
                print('PC',end='')
            else :
                print('.', end='')
            j += 1
        else :
            print('.', end='')
        j += 1
        if j == w-1:
            print('')