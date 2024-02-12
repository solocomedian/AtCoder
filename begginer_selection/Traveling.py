n = int(input())
dp = [[0,0,0] for _ in range(n+1)] # 時刻・Y座標・x座標を成分に持つリストを要素に持つリスト
for i in range(1,n+1):
    dp[i][0], dp[i][1], dp[i][2] = input().split()
    dp[i][0] = int(dp[i][0])
    dp[i][1] = int(dp[i][1])
    dp[i][2] = int(dp[i][2])
for i in range(1,n+1):
    l = abs(dp[i][1]-dp[i-1][1]) + abs(dp[i][2]-dp[i-1][2])
    t = abs(dp[i][0]-dp[i-1][0])
    if (l % 2) != (t % 2):
        print('No')
        exit()
    elif l > t:
        print('No')
        exit()
print('Yes')