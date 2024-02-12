# 前から検索していくのは'er'の難しい(dreamとdreamer,eraseとeraser)
# 後ろから考えると区別できる
# [::-1]で文字列を反転できる
s1 = input()
s2 = s1[::-1]
s3 = ['dream','dreamer','erase','eraser']
n = 0
for i in range(4):
    s3[i] = s3[i][::-1]
while n < len(s2):
    count = 0
    for word in s3:
        if s2[n:n+len(word)] == word:
            n += len(word)
            break
        else : count += 1
        if count == 4:
            print('NO')
            exit()
print('YES')           
