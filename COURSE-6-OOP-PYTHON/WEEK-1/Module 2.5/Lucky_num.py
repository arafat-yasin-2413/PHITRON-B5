
luckyList = []


def checkLucky(n):
    number = n
    isLucky = True
    
    while(n!=0):
        digit = n%10
        n = n//10
        
        if( digit != 4 and digit != 7):
            isLucky = False
            break
        
    if isLucky:
        luckyList.append(number)

        

a,b = map(int, input().split())

for i in range(a,b+1):
    checkLucky(i)

if len(luckyList) == 0:
    print(-1)
else:
    for i in range(len(luckyList)):
        print(luckyList[i],end=' ')