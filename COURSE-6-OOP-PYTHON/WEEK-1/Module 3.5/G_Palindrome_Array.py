n = int(input())
arr = list(map(int,input().split()))

i = 0
j = len(arr)-1

isPalindrome = True
while(i<=j):
    # print(i,j)
    if(arr[i] != arr[j]):
        isPalindrome = False
    i = i+1
    j = j-1
    
    
if isPalindrome:
    print('YES')
else:
    print('NO')