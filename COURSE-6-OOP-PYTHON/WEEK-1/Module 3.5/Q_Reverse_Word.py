st = input()

# full string theke word split kori
words = st.split()
# "words" is a list now

# print(words)

result_string = []
for word in words:
    reversed_word = word[::-1]
    result_string.append(reversed_word)
    
# print(result_string)
""" 
I Love You
['I', 'evoL', 'uoY']

"""
    
for idx, char in enumerate(result_string):
    if idx == len(result_string)-1:
        print(char)
    else:
        print(char,end=' ')