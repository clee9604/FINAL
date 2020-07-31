#include<stdio.h>

int main(){
  int my_1st_int = 0, my_2nd_int = 3,  my_3rd_int = 5 + 8; 
  char my_1st_char = 'a', my_2nd_char = 'A',  my_3rd_char = '5';

  printf("1st line\n");
  printf("my_1st_int = %d\tmy_2nd_int = %d\tmy_3rd_int = %d\n", my_1st_int,my_2nd_int,my_3rd_int);
  if ( my_1st_int > my_2nd_int ) {
    printf("The if statement was true and \n");
    printf("2nd line\n");
  } else {
    printf("The if statement was false and \n");
    printf("3rd line\n");
  } 
  printf("4th line\n");
  return 0;
}
