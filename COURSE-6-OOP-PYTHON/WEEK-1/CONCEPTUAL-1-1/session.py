""" -------------------------------- DATA TYPE -------------------------------- """

# num = 3
# a = 3.4
# c = "D"

# print(type(num))
# print(type(a))
# print(type(c))


""" ------------------------------ OPERATORS ------------------------------------ """

# res = 10/6
# res = 10//6
# print(res)
# print(type(res))



""" ---------------------------- LOOP ----------------------------------------- """

name = "Hello World"
# for char in name:
#     print(char, end=',')


# for i in range(5):
#     print(i)


# for i in range(len(name)):
    # print(i)
    # print(name[i])
    
    
# for i, char in enumerate (name):
#     print(f'{i} : {char}')


""" ------------------------------ UNPACK ---------------------------------------- """

# a,b,c = [10,20,40]
# print(a)
# print(b)
# print(c)

# for en in enumerate(name):
#     print(en)


# for i,char in enumerate(name):
#     print(i, char)


""" --------------------------------- CONDITION ---------------------------------- """

# a = 50
# b = 5

# if a>b and b != 0:
#     print("a is bigger than b")
# elif b>a :
#     print("b is bigger than a")
# else:
#     print("both are equal")
    
    
# nums = [10,20,30]
# if 200 in nums:
#     print('number is present')
# else:
#     print('number is not present')


# newName = 'kieabcjdr'
# newName = 'kieajbcdr'
# if 'abc' in newName:
#     print('ache')
# else:
#     print("nai")
    
# string এর ক্ষেত্রে যেই সিকুয়েন্স টাকে খুজবো সেই ক্যারেক্টারগুলো অবশ্যই পাশাপাশি থাকতে হবে।



""" ---------------------------- FUNCTION ----------------------------------- """

def square_it(n):
    print(n*n)
    
def add(a,b):
    return a+b
    
# res = square_it(10)
res = add(4,6)
# print(res)

""" --------------------------- ARGUMENTS PARAMETER ---------------------------- """

def result_calculate(name, *args):
    # print(name, args)
    s = 0
    for num in args:
        s += num
    return [name,s]
    
    
# total_marks = result_calculate("Rakib",55,66,77,88,33,44,55)
# print(total_marks)
name,marks = result_calculate("Rakib",55,66,77,88,33,44,55)
# print(f"Name : {name} , Marks: {marks}")

""" ---------------------------------- SCOPE --------------------------------- """

x = 10
def fun():
    global x
    x = 20
    print('Inside fun : ', x)
    
# fun()
# print('Outside fun : ', x)


""" ------------------------------- LIST COMPREHENSION ------------------------- """

# nums = [1,2,3,4,5,6]

# Read only. won't modify any num.
# for num in nums:
    # num = num**2


# for i, num in enumerate(nums):
# for i in range(len(nums)):
#     nums[i] = nums[i] ** 2
    
# print(nums)

# list comprehension in one line
# (operation) for loop
# sqare_nums = [num ** 2 for num in nums]
# print(sqare_nums)

# odd_nums = []
# for num in nums:
#     if(num % 2 != 0):
#         odd_nums.append(num)
        
# print(odd_nums)


# list comprehension way
# (variable) for loop (condition)
# odd_nums = [num for num in nums if num%2 != 0 and num > 1]
# print(odd_nums)



""" ------------------------------------ INPUT ---------------------------------------- """

# n = int(input('Enter a number : '))
# arr = input('Enter array elements : ')

# print(n)
# print(arr)



# nums = []
# n = int(input())

# for i in range(n):
#     x = int(input())
#     nums.append(x)
    
# print(n)
# print(nums)



# n = int(input())
# arr = input().split()
# print(arr)

# # method 1
# for i in range(len(arr)):
#     arr[i] = int(arr[i])
    
# int_arr = [int(x) for x in arr]
    
# print(int_arr)


# method 3
# def square(x):
#     return x*x

# nums = [1,2,3,4]
# square_nums = list(map(square,nums))
# print(square_nums)


# array input:

# arr = input().split()

# def convert_int(x):
#     return int(x)

# # int_arr = list(map(convert_int,arr))
# int_arr = list(map(int,arr))
# print(int_arr)


# Array input in one line

arr = list(map(int,input().split()))
print(arr)