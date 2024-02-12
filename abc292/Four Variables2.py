n = int(input())
ans = 0
for i in range(n):
    x = i # ある値xをAとBの積と定めることでC,Dの積はNからxを引いたものに決まる
    y = n-i
    j = 1
    k = 1
    count1 = 0
    count2 = 0
    while  j*j <= x: # ある数xの約数は必ずxの平方根以下
        if x % j==0:
            count1 += 1
            if x != j*j: # xの平方根以外は全て(A,B)=(j1,j2),(j2,j1)の２通り存在
                count1 += 1
        j += 1
    while  k*k <= y: # xと同様の処理をyで行う
        if y % k==0:
            count2 += 1
            if y != k*k:
                count2 += 1
        k += 1
    ans += count1*count2

print(ans)

