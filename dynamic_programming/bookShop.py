n,x = tuple(map(int,input().split(" ")))
price = [0 for i in range(n+1)]
value = [0 for i in range(n+1)]
price[1:] = list(map(int,input().split(" ")))
value[1:] = list(map(int,input().split(" ")))
def first(m):
    return m[0]
group = [(price[i],value[i]) for i in range(n+1)]
group = sorted(group,key=first)
dp = [[0 for i in range(x+1)] for j in range(n+1)]
for i in range(1,n+1):
    for j in range(1,x+1):
        if (j>=price[i]):
            dp[i][j] = max(dp[i-1][j],group[i][1]+dp[i-1][j-group[i][0]])
        else:
            dp[i][j] = dp[i-1][j]
print(dp[-1][-1])


