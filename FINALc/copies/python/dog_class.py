class Dog:
   # Attribute - values that should belong to 
   # each dog type but each dog may have seperate valies
   name = None
   age = None
   
   def bark(self):
      print("Woof! Woof!")

   def growl(self):
      print("RrRrRrRrRrrrRrRr.....")

   def setName(self, name):
      self.name = name

   def setAge(self, age):
      self.age = age

   def speak(self):
      if self.name == None:
         print("I have no name. Would you please help me?")
      else:
         print("I am an advanced dog; I speak well. My name is "+ self.name +".")

dog1 = Dog()
dog2 = Dog()
dog3 = Dog()

dog1.bark()
dog2.speak()
dog1.setName("Dig")
dog2.setName("Tiger")
dog3.setName("Skip")

dog1.speak()
dog2.growl()
dog2.speak()
dog3.speak()
