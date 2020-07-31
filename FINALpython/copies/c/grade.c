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

   if( grade >= 90.0 ){
      printf( "Congraulations! Your %f give you an A in the class!\n", grade);
   } else if ( grade >= 80.0 ) {
      printf( "Well done, your %f give you a B in the class.\n", grade);
   } else if ( grade >= 70.0 ) {
      printf( "Phew!! your %f give you a C in the class.\nSo at least you passed!", grade);
   } else {
      printf( "Better luck next year :'( \n");
   }

   return 0;

}
