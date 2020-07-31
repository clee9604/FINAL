import sys
import os
from dog_class import Dog

print("Hello {}! Its really nice to meet you".format(sys.argv[1]))
os.system("ls -la")

fido = Dog()
fido.setName("Fido")
fido.bark()
