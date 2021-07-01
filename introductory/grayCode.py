n = int(input())
l = []
def addZeros(string,n):
    length = len(string)
    for i in range(n-length):
        string = "0" + string
    return string
for i in range(int(1<<n)):
    a = i^(i>>1)
    binary = bin(a)
    split_binary = binary.split('0b')[1]
    new_binary = addZeros(split_binary,n)
    print(new_binary)
