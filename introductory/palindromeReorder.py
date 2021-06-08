from sys import stdin
a = str(stdin.readline().strip())
l = [0 for i in range(26)]
for i in a:
    l[ord(i)-65]+=1
   # print(l[ord(i)-65])
resultfront=""
resultback=""
odd = []
for i in range(26):
    if (l[i] & 1):
        odd.append(i)
for i in range(26):
    if (l[i]>0 and not (l[i] & 1)):
        for j in range(l[i]//2):
            resultfront += chr(65+i)
    l[i]-=l[i]//2
resultback = resultfront[:]
resultback = resultback[::-1]
if (len(odd)>1):
    print("NO SOLUTION")
else:
    if (odd!=[]):
        resultfront += chr(odd[0]+65)
        resultfront += resultback
        print(resultfront)
    else:
        resultfront += resultback
        print(resultfront)

