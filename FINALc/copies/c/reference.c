#include <stdio.h>
#include <string.h>

int main( ) {
   float grade; // Floats and Doubles represent the same type of data 
		// Floats are 32 bit (4 bytes) representations
		// Doubles are 64 bit (8 bytes) representations
		// Both represent the IEEE 754 floating notation of real numbers

   printf("Enter your grade: ");
   scanf("%f", &grade); // Notice we have created a variable in memory name grade that 
			// represents a 332 bit real number in memory. Scanf is a function 
			// the stdio.h library that takes refernces to variables. So we don't
			// copy the value currently stored in grade, but we passs along its
			// memory location. to do this we use the & ( ambersand ).
   

   printf("The grade variable is equal to %f in float, %d in integers, 0x%08x in hexadecimal.", grade, grade, grade);
   printf("\n The grade variable is stored to %i in int, 0x%08x in hexadecimal, %p for the pointer.\n\n", &grade, &grade, &grade);

   return 0;

}
