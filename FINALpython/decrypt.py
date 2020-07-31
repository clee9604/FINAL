def decrypt(text, key):
	parseString = text.split(b" ")
	for item in parseString: 	
		item >> key
		if key > 150:
			key = 255
		else:
			key = (key+1)%256
		key = key + 1
	return text 
	
key = 0

ofile = input("Enter the file name with location: ")
file = open(ofile, "rb")

text = file.read()

datastring = str(text)

print(text)

wfile = input("Enter write file name with location: ")
file2 = open(wfile, "wb")

file2.write(decrypt(text,key))
file2.close()

print(decrypt(text,key))

