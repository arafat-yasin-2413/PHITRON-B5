
def reverse_number(n):
    while(n != 0):
        print(n%10,end='')
        n = n//10

def isPalindrome(n):
    i = 0
    j = len(n)-1
    
    flag = True
    while(i <= j):
        if(n[i] != n[j]):
            flag = False
        i = i + 1
        j = j - 1
    
    if(flag):
        print('YES')
    else:
        print('NO')


n = input()
num = int(n)
while(num%10 == 0):
    num = num//10
    
# print('before : ',num)
reverse_number(num)
print()
isPalindrome(n)
