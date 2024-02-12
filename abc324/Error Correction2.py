n, t_ = input().split()
n = int(n)
l = len(t_) # len関数はlist型だけでなくstr型にも使える
I = []
s = [input() for i in range(n)]
for i in range(n):
    s_ = s[i]
    ls = len(s_)
    if ls == l:
        c = 0
        for j in range(ls):
            if s_[j] != t_[j]:
                c += 1
        if c < 2:
            I.append(i+1)
    elif (l - ls) == 1: # 長さが1違う場合の文字列検索は比較する二つの文字列で別々のインデックス用変数を作る
        m,k,miss = 0,0,0 # 異なる文字があった場合はmiss変数に+1してから長いほうのインデックス変数だけ+1する
        while k < ls:
            if s_[k] == t_[m]:
                m += 1
                k += 1
            else:
                miss += 1
                m += 1
            if miss > 1: # 条件に合致しない場合はここでfor文を抜ける
                break
        if k == ls: # この時、文字列の長さが短いほうの長さと変数の値が等しいか確かめる
            I.append(i+1) # 末尾が削除・追加されている場合があるため

    elif (l - ls) == -1:
        k,m,miss = 0,0,0
        while m < l:
            if s_[k] == t_[m]:
                m += 1
                k += 1
            else:
                miss += 1
                k += 1
            if miss > 1:
                break
        if m == l:
            I.append(i+1)
print(len(I))
for i in range(len(I)):
    print(I[i] , end=' ')
            