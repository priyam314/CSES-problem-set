import itertools
a = list(str(input()))
perm = list(itertools.permutations(a,len(a)))
perm = list(set(perm))
print(len(perm))
perm.sort()
for i in perm:
    print("".join(list(i)))

