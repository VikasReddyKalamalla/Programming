# data type means which stores the type of a value
# 1.example
a = 5
print(
    type(a)
)  # type asalu aa value numbr aa ledha points lo untundaa ledha string aa ani cheptundii
print(a)

"""
basic data types : 
1.int
2.float
3.boolean
4.string
5.complex

"""

# 2.example
f = 2.5
print(type(f))
print(f)

# 3.example

a = True
b = False
print(a)
print(b)


print(True == 1)
print(False == 0)


# 4.example
a = "Vikas reddy"
print(a)

a = "Vikas Reddy"
print(a)

a = """Vikas Reddy"""
print(a)


# 5.complex
a = 5 + 3j
print(type(a))
print(a)
"""
medium level data types :
1.list[]
2.tuple{}
3.set{}
4.dictionary

"""


a, b = input("Enter the values: ").split(" ")  # Takes input and splits at ','
x = int(a.strip())  # Removing extra spaces and converting to integer
y = int(b.strip())  # Removing extra spaces and converting to integer
print("Addition:", x + y)  # Prints sum
