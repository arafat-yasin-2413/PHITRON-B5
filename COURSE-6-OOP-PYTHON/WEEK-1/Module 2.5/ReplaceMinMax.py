n = int(input())
arr = list(map(int, input().split()))


mx_idx = -1
mn_idx = -1

mx = -2**31
mn = 2**31-1

# print(mn)

for i in range(len(arr)):
    if arr[i] > mx:
        mx = arr[i]
        mx_idx = i
    if arr[i] < mn:
        mn = arr[i]
        mn_idx = i
        
# print('mx idx = ',mx_idx)
# print('mn_idx = ',mn_idx)

arr[mx_idx] = mn
arr[mn_idx] = mx

for i in range(len(arr)):
    print(arr[i],end=' ')
print()
