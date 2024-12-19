t = int(input())

while(t):
    
    n = int(input())

    arr = list(map(int,input().split()))

    mn = 2**31-1
    for i in range(len(arr)-1):
        for j in range(i+1,len(arr)):
            # print("i = ",i, "j = ", j , end=' ')
            val = arr[i]+arr[j]+j-i
            if(val < mn):
                mn = val
                
    print(mn)
    t = t - 1  
    
    