linlin = "A Python list may contain different types! Indeed, you can store a number, a string, and even another list within a single list."

print(linlin)
#print(list(linlin))

result = [ ord(x) for x in linlin ]  

