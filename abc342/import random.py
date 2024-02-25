import random
import string

# 制約
N = 1000
Q = 1000

# 英小文字からなる長さ N の文字列 S を生成
S = ''.join(random.choice(string.ascii_lowercase) for _ in range(N))

# Q個の英小文字ペア (c_i, d_i) を生成
cd_pairs = [(random.choice(string.ascii_lowercase), random.choice(string.ascii_lowercase)) for _ in range(Q)]

# 入力データを形成
input_data = f"{N} {S} {Q} " + ' '.join(f"{c} {d}" for c, d in cd_pairs)

print(input_data)