a,b = map(int,input().split())

s = input()

# print(s)
# print(type(s))

hyphen_in_position = False

if(s[a+1-1] == '-'):
    hyphen_in_position = True
    
    
condition_broke = False
for i in range(len(s)):
    if(i == (a+1-1)):
        continue
    # print(i)
    if(s[i] == '-'):
        condition_broke = True
        
        
# print("condition 1 : ",hyphen_in_position)
# print("condition 2 : ",condition_broke)

if (hyphen_in_position is True) and (condition_broke is False):
    print("Yes")
else:
    print("No") 