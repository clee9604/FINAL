#include<stdio.h>

void main(){
  int ch;

  for ( ch = 0; ch < 128; ch ++) 
    printf("ASCII value = %d, Character = %c\n", ch , ch );
 
  return;
}
