"""print("using match case statement - from multi choices execute particular different block of code")"""

# person = int(input("enter your belongs to which stream :"))

# match(person):
#   case 1:print("u belongs to CSE-A")
#   case 2:print("u belongs to CSE-B")
#   case 3:print("u belongs to CSE-C")
#   case 4|5:print("u belongs to CSE-D & E")
#   case _:print("kindly enter ranges from 1-4")

vowel = input("enter any alphabet ")
match vowel:
    case "a" | "A":
        print("entered character is a vowel : ", vowel)
    case "e" | "E":
        print(f"entered {vowel} is a vowel")
    case "i" | "I":
        print("entered is a vowel : ")
    case "o" | "O":
        print("entered character is a vowel: ", vowel)
    case "u" | "U":
        print("entered character is a :", vowel)
    case _:
        print("entered character is a consonant:", vowel)


# day = int(input("enter any number : "))
# match(day):
#   case 1:print("Monday")
#   case 2:print("Tuesday")
#   case 3:print("wednesday")
#   case 4:print("thursday")
#   case 5:print("friday")
#   case 6:print("saturday")
#   case 7:print("sunday")


# var1 = ['orange','red','blue','violet','green']

# var3=len(var1)
# print(var3)

# friends = ["apple", "orange", "hgf"]
# x = input("Enter the word to find: ")

# match x:
#         case _ if x in friends:
#             print("Yes, it's found!")
#         case _:
#             print("No, it's not found.")
