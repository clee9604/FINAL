#include<stdlib.h> // Standard system library for C
#include<unistd.h> // Unix library standard for C
#include<stdio.h>  // Input and output for C printf and scanf

void func1();
void func2();
void func3();

/****************
* system call 
*
* int system(char *string)
* where the string can be the name of a unix utility or a application 
* to be run. Systen reutn the exit status of the shell. This comes of stdlib.h
*
* made up of execl(), wait(), fork()
* protyped using unistd.h library
*
****************/

main(){
  printf("All of the files in the current direcotry are as follows:\n");
  //system("ls -la");
  func2();
}

/****************
 *  Execeute and leave  
 *   
 *  execl(char *path, char *arg0, ..., *argn, 0);
****************/
void func1(){
   printf("Display files in Directory");
   execl("/bin/ls", "ls", "-l", 0);
}




/****************
 * fork command
 *
 * int fork();
 * on sucess fork() returns 0 to the child process and returns
 * the process ID of the child process to the parent process
****************/
void func2(){
  int return_value;
  printf("Fork process\n");
  fork();
  printf("The process id is %d and the return value is %d\n",
    getpid(), return_value);
  execl("/bin/ls", "ls", "-l", 0);
  printf("This line is not printed");
}

/***************
 * Wait command
 * int wait( *status_location) 
 *
 * Forces the parent process to wait on the child to complete by 
 * stopping or being terminated.
 *
 * wait return the pid of the child or -1 for an error. The
 * exit status of the child is returned to status_location;
****************/
// while (wait(&status) != return_value)




/***************
 * Exit command
 * 
 * void exit(int status)
 * terminates process which calls this function. and retuns a status 
 * values, Both the Unix OS ( or unix like os) and C (and its forked program)
 * can read the status value
****************/
