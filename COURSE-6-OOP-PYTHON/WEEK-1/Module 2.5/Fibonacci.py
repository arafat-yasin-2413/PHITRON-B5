n = int(input())

myList = [0,1]



for i in range(2,n+1):
    myList.append(myList[i-1]+myList[i-2])


print(myList[n-1])
