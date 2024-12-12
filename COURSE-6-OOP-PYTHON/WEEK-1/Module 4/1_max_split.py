st = input()
# print(st)


count_of_L = 0
count_of_R = 0

temp_string = ""
myList = []

for i, char in enumerate(st):
    # print(i,char)
    if char == 'L':
        count_of_L +=1
        temp_string += char
    else:
        count_of_R +=1
        temp_string +=char
    
    if count_of_L == count_of_R:
        myList.append(temp_string)
        temp_string = ""
        
        
print(len(myList))

for s in myList:
    print(s)