t = int(input())
def valFind(n:int)->int:
    i=0
    while(1):
        a = (1-int(pow(10,i))*(1-9*(i)))//9
        if (n<=a):
            return i-1
        i+=1
def solve(n:int)->int:
    i=0
    val = valFind(n)
    a = n - (1-int(pow(10,val))*(1-9*(val)))//9
    length = len(str(n))
    d = a//length
    r = a%length
    N = int(pow(10,length-1)) + d -1
    if (r==0):
    	return int(str(N)[-1])
    else:
    	return int(str(N)[r-1])
for i in range(t):
    a = int(input())
    print(solve(a))


