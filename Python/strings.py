# string is a data type that stores a sequence of characters.

# str1 = "this is a string"
# str2 = 'this is also a string'
# str3 = '''this is also a string'''

# str4 = "this is a string \nwe are creating it in python"
# print(str4)

# 1.concatenation
# str2="college"
# f= str1+" "+str2
# print(f)
# str1 = "apnacollege"
# no=len(str1)
# print(no)
"""
#INDEXING

str = "Vikas_reddy"
ch = str[1]
print(ch)
# str = "Vikas reddy"
# print(str[5])

"""

# slicing [accessing strings elements ] { ending index is not included}
# str = "Vikas_reddy"
# print(str[-5:-1]) # ending index is not included
# print(str[:4]) #[0:4]
# print(str[5:])#[5:len(str)]

# string functions
"""
#1.
#str = "i am a coder"
#str.endswith("er")[checks that the main string is ending with er or not as per string given]
"""

"""
#2.
str = "i am a coder"
#str.capitalize{}
print(str.capitalize()) #capatilize the first alphabet main string
"""
"""
#3.
str = "i am a coder"
str.replace("old","new") #replaces ewhat you want
print(str.replace("o","a"))
print(str.replace("coder","professional coder"))
"""
"""
#4.
str = "i am a coder"
str.find("word") #which finds the word in our code and gives the finded one before index
print(str.find("o"))
print(str.find("coder"))
"""
# 5.
str = "i am a coder"
str.count("am")  # counts how many times the word or alphabet repeats in our string
print(str.count("a"))
print(str.count("coder"))
