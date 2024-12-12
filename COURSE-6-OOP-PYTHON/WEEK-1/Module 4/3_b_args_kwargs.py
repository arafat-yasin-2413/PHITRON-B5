
""" 
    args in python function allows the user to pass multiple 
    values inside a single parametr. 
    
    The below example:
    "printList" function has parameters "num1", "num2", and "*others".
    The first two parameters are taking value 10 and 20. And the remaining
    values 3, 4, 5, 6, 8, 10, 7, 2 are passed into *others.
    
    
"""

def printList(num1, num2, *others):
    print(num1, num2, others)
    
    
# printList(10, 20, 3, 4, 5, 6, 8, 10, 7, 2)
    



""" 
    kwargs takes values as key-value pair. More likely dicitonary format.
    
    The below example:
    "myFunction" is receiving first and last name as they are not passed 
    sequentially. And other key-values are being passed inside the **addition 
    parameter. 
"""


def myFunction(first,last,**addition):
    full_name = f'{first} {last}'
    print(full_name)
    for key, val in addition.items():
        print(key, val)
    
    
person = myFunction(first='Abdul', age = 42, occupation = 'Banker'  , last='Karim')

