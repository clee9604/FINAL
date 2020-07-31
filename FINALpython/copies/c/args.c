#include<stdio.h> // Only required inf his program for printing

// in c there is no STRING type only string literals as elements
// inbetween quotation marks
//
// strings are treated strictly as char arrays and can be denoted 
// in two ways as all arrays in C can be
// You can create a char array by usings a * (pointer) or [] as you would
// in more readible langauages. If we use them in combination we are creating
// a multidimensional array as in *argv. Where argv is an array of char arrays
// and can also be referr to by argv.
//
// and * denotes the pointer and & denotes the reference or memory location
//

int main( int argc, char *argv[]){
  if(argc == 2)
    printf("The argument supplied is %s\n", argv[1]);
  else if ( argc > 2 ) 
   printf("Too many arguments\n");

  char *print = "You had %d number of arguments\n";
  printf(print, argc);

  int i;
  for(i = 0; i < 6; i++){
    char c = print[i];
    printf("%c", c - 2);
  }
}


