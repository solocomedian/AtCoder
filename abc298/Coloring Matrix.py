# 線形代数の基礎知識を用いる
# 90度左回転は上下逆にした後転置行列
# 90度右回転は転置行列した後上下逆
# 180度回転は上下逆の後左右逆
# https://qiita.com/rudorufu1981/items/5341d9603ecb1f9c2e5c
# zip関数について
# https://jackee777.hatenablog.com/entry/2019/05/03/223646
# リストを逆に表示する方法
# https://punhundon-lifeshift.com/reverse_an_array
n = int(input())
a = [list(map(int, input().split())) for i in range(n)]
b = [list(map(int, input().split())) for i in range(n)]
n = n-1
for k in range(4):
    f1 = 1
    a = list(map(list, (zip(*a[::-1]))))
    for i in range(n):
        for j in range(n):
            if a[i][j] == 1:
                if b[i][j] == 0:
                    f1 = 0
    if f1 == 1:
        print('Yes')
        exit()
print('No')


    