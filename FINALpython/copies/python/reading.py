file_ = open("../../ceaser1.txt", "r")
print("When we print file_ we see:")
print(file_)


print("\nIf we use a for loop to access the indivdual elements of file_ we get:")
message = ""
for line in file_:
   message = message + line

print(message)
solution = ""
key = 23 

for char in message:
   solution = solution + ( chr((( ord(char.lower()) - 97 + key) % 26) + 97) if char.isalpha() else char )

print("Our shift 20 is equal to:")
print(solution)
