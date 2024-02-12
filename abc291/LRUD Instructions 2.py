## listではなくsetを使うことで高速化
## setでも座標のような二次元の値を扱える
n = int(input())
s = input()
x = 0
y = 0
move_list ={(0,0)}

for i in range(n):
    if s[i] == 'R':
        x += 1
    elif s[i] == 'L':
        x -= 1
    elif s[i] == 'U':
        y += 1
    elif s[i] == 'D':
        y -= 1
    
    if(x,y) in move_list:
        print('Yes')
        exit()
    move_list.add((x,y))
print('No')