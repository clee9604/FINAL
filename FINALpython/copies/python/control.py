x = 9.9
if x > 10:
   print("x is larger than 10")
elif x < 10:
   print("x is less than 10")
else:
   print("x is equal to 10")

print("The value of x is = " + str(int(x)))

#"""
#In correct commenting but used for multi lines
#"""

# This is your single line commment
if x > 100:
   #Everything at this indention is INSIDE my if statement x > 100
   if x > 4:
      # x>4
      if x > 5:
         print( "YOOOOOOOOOOO")
      # end of x > 4
   else:
      print("Your done")
   #ending of x >100

i = 0
while i < 10:
   print("Loop at run " + str(i))
   i+=1 # i = i + 1

students = ["Brandon Moseley", "Miguel Romo", "Nadeem Hemani"]

for student in students:
   print(student)

students.append("Bryon Lee")
print(students[3])
students.append(100)
students.append(students)

print("\n\nEntire List:")
for student in students:
   print(student)
print("Pop element")
students.pop()
del students[2]
print(students)
print("Negative 1 index")
print(students[-1])
print(len(students))

for i in students:
   print(i)

print(range(10))
for i in range(10):
   print(i)
print(range(10, 20))
print(range(2, 10, 3))
