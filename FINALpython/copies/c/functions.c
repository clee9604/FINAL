#include<stdio.h>

long factorial(int); // Function declaration 

void main(){
  int num;

  printf("Enter the number whose fatorial you would like to find:\t\t");
  scanf("%d", &num);

  printf("The factorial of %d or %d! = %ld\n\n", num, num, factorial(num) ); // function call
}

//Function definition
long factorial( int x ) {
  // if ( x == 1 ) 
  //    return 1; 
  // return factorial(x-1)*x;
  return x == 1 ? 1 : x  * factorial( x - 1 ) ;
}
