#include <stdio.h>
#include <string.h>

int main( ) {

   char str[100];
   char *hello = "Hello, world";

   printf("Enter your name: ");
   scanf("%s", str);

   printf( "Welcome, %s!\n", str);

   printf( "%s! %p \n", hello, &hello);
   
   return 0;

}
