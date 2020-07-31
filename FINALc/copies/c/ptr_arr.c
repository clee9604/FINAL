#include<stdio.h>

main(){
  /********
 * Pointer 
 *
 *
 * *******/
 int *ptr, i;

 char *c = "hello";
 double *d;
 float *f; 
 void *v;

 /******
 * Array initialization 
 *
 *
 * ******/
 int arr[7] = { 12, 42, 124, 6765, 123, 765, 0};

 /********
 * Assigning the memory address of the i index
 * to the ptr. So what is stored in ptr is the memory address
 * associated to the ith index.
 * ******/

 for( i = 0; i < 7 ; i++){
   printf("At the arr location %d we have %d as the value\n", i , arr[i]);
   ptr = &arr[i];
   printf("The point ptr is pointing to the %d index of arr, we have %d as the value\n and has the memory address %p\n\n", i , *ptr, ptr);
 }
for( i = 0; i < 7 ; i++){
   ptr = &arr[i];
   *ptr = i * i; 
}
for( i = 0; i < 7 ; i++){
    printf("At the arr location %d we have %d as the value\n", i , arr[i]);
}

printf("Enter and integer\n");
scanf("%d", &i);

ptr = &arr[0];
 
printf("You typed in %d\n\n", i);
printf("We have %d as the value\n and has the memory address %p\n\n", *ptr, ptr);
printf("We have %d as the value\n and has the memory address %p\n\n", *(ptr+2), (ptr+2));
}
