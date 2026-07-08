# conditional statements : oka particular condition batti manaki kavalsina output ni print chepinchukovachu
"""
oka condition true ithe ichina print statement print  avuthundi
"""

"""conditonal statements main ga 4 
#1.if  
#2.elif
#3.else
#4.nested if

"""

# 1.if statements : condition true ithene statement print avuddi
"""
#syntax.
if conditon :          #if tharvatha space is mandatory condition tharvatha colon mandatory
  statements           #statements mundu pakka space undalii . c lo ithe {}if use chestam kabatii space avasaram ledhu but python lo  avi   use   
"""  # cheyyam kabatti space istamu ave {} la use ithaii

# 2.elif statements : if loni condition false ithene elif ki statements pass ithaii
"""
#syntax.
if conditon :
  statements
elif conditon :
    statements
"""
# indulo if conditon true ithe if lo icchina statements print avuthai ledhaa elif loni conditon ni  check cheskoni elif  statements print avuthaii

# 3.else : elif loni condition kooda false ithee inka last ki else lo unna statements ni print chestundi
"""
#syntax.
if conditon :
  statements
elif conditon :
    statements
else :
    statements

"""

# 4.nested id : oka if condition lopala inkoka if condition use cheste we call it as nested if condition  [one if condition in another if condition]
# 1.example for three conditions if the variable is initialized
"""
#syntax.
if condition :
  if condition :
    statements

"""


# age = 18
# if age>18 :
#   print("You are eligible for Vote",end=".")
# elif age==18:
#   print("you can also vote",end=".")
# else :
#   print("wait until you get 18 years",end=".")


# 2.example for three conditons if the variable is not intialized or take it from the user

# age = int(input("enter your age : "))
# if age>18 :
#   print("You are eligible for Vote",end=".")
# elif age==18:
#   print("you can also vote",end=".")
# else :
#   print("wait until you get 18 years",end=".")

# example:
# light = input("light : ")
# if(light=="red"):
#   print("Stop") #indentation spaacing
# elif(light=="yellow"):
#   print("Wait")
# elif(light=="green"):
#   print("Go")
# else:
#   print("Not the correct light ")


# example:
# marks = int(input("enter your marks :"))
# if(marks >= 90):
#   print("A")
# elif(marks >=80 and marks <90):
#   print("B Grade")
# elif(marks >=70 and marks <80):
#   print("C Grade")
# else:
#   print("D Grade")

# example:
# A = int(input("A : "))
# G = input("M/F :")
# if((A==1 or A==2)and G=="M"):
#   print("fee is 100")
# elif(A==3 or A==4 or G=="F"):
#   print("fee is 200")
# elif(A==5 and G=="M"):
#   print("fee is 300")
# else:
#   print("no fee")


"""
Single line if/Ternary operator
#syntax.

1. to print only values.
<var> = <val1> if <condition> else <val2>
print(var)

2. to print statements.
<stt1>if <condition> else <stt2>

"""
# example - 1

# food = input("enter your food : ")
# eat = "Yes" if food=="cake" else "No"
# print(eat)

# example - 2
# food = input("enter your food :")
# print("Sweet") if food=="cake" or food=="jalebi" else print("Hot")

# marks = int(input("enter your marks : "))
# if(marks >= 90):
#   print("A grade")
# elif(marks>=80 and marks<90):
#   print("B grade")
# elif(marks>=70 and marks < 80):
#   print("c grade")
# elif(marks<70):
#   print("D grade")
# else:
#   print("Fail")
"""

nesting concept
age = int(input("enter your age : "))
if(age >=18):
  if(age >=80):
    print("cannot drive")
  else:
    print("can drive")
else:
  print("cannot drive")
"""
