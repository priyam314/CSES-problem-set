t = int(input())
def solve(n:int)->int:
    string_n = str(n)
    length = len(string_n)
    a = n - (1-int(pow(10,length-1))*(1-9*(length-1)))//9
    d = a//length
    r = a%length
    N = int(pow(10,length-1)) + d -1
    if (r==0):
    	return int(str(N)[-1])
    else:
    	return int(str(N+1)[r-1])
for i in range(t):
    a = int(input())
    print(solve(a))


