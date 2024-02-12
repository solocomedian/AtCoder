n = int(input())
k = n // 2
s = 0
s2 = 0
if n % 2 == 1:
    for i in range(1,k+1):
        count1 = 0
        count2 = 0
        for l in range(1,i+1):
            if i % l == 0:
                count1 += 1
        for m in range(1,n-k+1):
            if (n-i) % m == 0:
                count2 += 1
        s += count1*count2
else :
    for i in range(1,k+1):
        count1 = 0
        count2 = 0
        for l in range(1,i+1):
            if i % l == 0:
                count1 += 1
        for m in range(1,n-i+1):
            if (n-i) % m == 0:
                count2 += 1
        if i == k:
            s += count1*count2
            s2 = count1*count2
        else :
            s += count1*count2
print(int(s*2-s2))
            
         