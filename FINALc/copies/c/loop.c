#include<stdio.h>

int main(){
  int expr1, expr2, expr3, expr4=0, expr5=0;

  for( expr1 = 1 , expr2 = 0 ; expr2 < 12 ; expr2++) {
    // body...
    expr3 = expr1;
    expr1 = expr3 + expr1;
    printf("2^%d = %d\t\t", expr2+1, expr1);
    if ( expr2 % 3 == 2 )
       printf("\n"); 
  }

       printf("\n\n");

  while( expr4 ) {
    // body...
  }

  do {
    // body ..,
  } while ( expr5 );

  return 0;
}
