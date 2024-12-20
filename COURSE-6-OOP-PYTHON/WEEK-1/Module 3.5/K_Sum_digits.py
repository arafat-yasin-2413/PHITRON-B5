n = int(input())

s = input()

# num = int(s)
""" 
When the input size is very large converting a large number string like s to an integer is computationally expensive.
This conversion uses significant time and memory, especially when s has 
"""

sum = 0
for i in range(len(s)):
    x = int(s[i])
    sum += x
    
print(sum)