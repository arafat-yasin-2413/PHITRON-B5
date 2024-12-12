n = int(input())
myList = list(map(int, input().split()))

cnt = {}

for x in myList:
    if x in cnt:
        cnt[x] += 1
    else:
        cnt[x] = 1
        
result = 0
for val, occ in cnt.items():
    if occ < val:
        result += occ
    else:
        result += (occ-val)
        
print(result)
    