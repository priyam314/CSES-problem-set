n,x = tuple(map(int,input().split(" ")))
price = [0 for i in range(n)]
value = [0 for i in range(n)]
price = list(map(int,input().split(" ")))
value = list(map(int,input().split(" ")))
dp = [[0 for i in range(x+1)] for j in range(n+1)]

for i in range(1,n+1):
    for j in range(1,x+1):



