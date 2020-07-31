# List
# they are a linear data type that store objects in sequence and can be accessed by index

list1 = [ 1, 2, 4, 1, "have to be the same object", [1, 2,3] ] # List use square braces
print(list1[1])      #1 == 2
print(list1[4])	     #2 ==  "have to be the same object"
print(list1[5])      #3 == [1, 2,3]
print(list1[5][1])   #4 == 2
print(list1[4][4:])  #5 == " to be the same object""
print(list1[4][4:10:3])  #6 == " "+" " --> "  "
print(list1[4][2:4])  #7 == "ve"
print(list1[4][5:2])  #8 == ""
print(list1[4][:7])  #9 == "have to be" --> have to


x = [1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
print(x[4:10:3])  #6 == [5, 8]              
print(x[2:4])  #7 == [3, 4]                       
print(x[5:2])  #8 == []                      
print(x[:7])  #9 == [1, 2, 3, 4, 5, 6, 7]

print(list1[4][5:2:-1])  #8 == ""
print(list1[4][5:-2])  #8 == ""



# Sets
set1 = {1, 2, 4, "h"}
print(set1)
set1.add(5)
print(set1)
set1.add(56)
print(set1)
set1.add(1.0)
print(set1)

set1.add("1")
print(set1)

set1.add(1)
print(set1)

# Dictionaries
dict1 = {"red": 1, "string": True, 1:5}
print(dict1)
dict1["orange"] = 5
print(dict1)

print(dict1['red'])
# ...

# Tuples
# immutable can't be changed used parenthesis

x = ( 3, 5,  " hello ")
print(x)
a, b ,c = ( 3, 5,  " hello ")

print(c)





