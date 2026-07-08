# a built in data type that stores set of values
# it can store elements of different types (integer,float,string )

"""
marks = [0,1,2,3] #marks[0],marks[1]
student = ["karan",85,"Arjun"] #student[0],student[1]
student[0] = "Arjun" #allowed in python
len(student) #returns length
"""
# strings [immutable] we cannot add another new value for the defined index
# Lists [mutable] we can add another another new value for the definded index also

# marks = [1,2.69,"Hero",6,7.44]
# print(marks)
# print(type(marks))
# print(marks[3])
# print(marks[4])
# print(len(marks))

# student = ["karan",85,"Arjun"]
# student[0] = "arjun"
# print(student)

"""
List slicing:
similar to string slicing
list_name[starting_idx : ending_idx] #ending idx is not included

"""
marks = [0, 1, 2, 3]


marks.pop(2)
print(marks)

"""
#list Methods
list = [1,2,3]
1.list.append(4) #adds one element at the end [2,1,3,4]
2.list.sort() #sorts in ascending  order [1,2,3]
3.list.sort(reverse = True) #sorts in descending order [3,2,1]
4.list.reverse() #reverse list [3,1,2]
5.list.insert(idx,el) #insert element at index
6.list.remove(1) #removes first occurence of element [2,3,1]
7.list.pop(idx) #removes element at idx



"""
