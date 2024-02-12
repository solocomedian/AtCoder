n,a,b = map(int,input().split())
sums = 0
for i in range(1, n+1):
    digit4 = i//(10**4)
    digit3 = i//(10**3)-digit4*10
    digit2 = i//(10**2)-digit4*(10**2)-digit3*10
    digit1 = i//(10**1)-digit4*(10**3)-digit3*(10**2)-digit2*10
    digit0 = i-digit4*(10**4)-digit3*(10**3)-digit2*(10**2)-digit1*10
    digits = digit0+digit1+digit2+digit3+digit4
    if (digits >= a) & (digits <= b):
        sums += i
print(sums)