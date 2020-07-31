def encrypt(text, key):
	parseString = text.split(b" ")
	for item in parseString: 	
		item >> key
		if key > 0:
			key = (key-1)%256
		else:
			key = 255
		key = key - 1
	return text 
	
key = 150

ofile = input("Enter the file name with location: ")
file = open(ofile, "rb")

text = file.read()

datastring = str(text)

print(text)

wfile = input("Enter write file name with location: ")
file2 = open(wfile, "wb")

file2.write(encrypt(text,key))
file2.close()

print(encrypt(text,key))

