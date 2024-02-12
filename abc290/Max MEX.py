## 組み合わせ自体を考える必要はない
## 組み合わせの中に0~k-1が含まれているかを考える
## 下から数えていって含まれていないものがあればそれがMEXである
## 全て含まれていた場合はk事態が答えになる
## 整数列Aには同じ整数が重複していることもある
## 愚直に処理すると実行可能時間超過になるのでsetを用いて重複を省いた
n,k = map(int,input().split())
a = set(map(int,input().split()))
for j in range(0,k):
    if j not in a:
        print(j)
        exit()
print(k)