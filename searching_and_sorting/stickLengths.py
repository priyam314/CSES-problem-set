n = int(input())
l = list(map(int,input().split()))
l.sort()
median = l[n//2]
cost = 0
for i in range(n):
    cost = cost + abs(l[i]-median)
print (cost)
