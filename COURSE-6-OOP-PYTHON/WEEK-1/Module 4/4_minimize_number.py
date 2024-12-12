n = int(input())
myList = list(map(int, input().split()))

operations = 0
while True:
    isEven = True
    for x in myList:
        if x % 2 != 0:
            isEven = False
            break
        
    if isEven == True:
        for i in range(n):
            myList[i] = myList[i] // 2
        operations += 1
    else:
        break
    
print(operations)