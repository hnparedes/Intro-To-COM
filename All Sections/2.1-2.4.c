#include <stdio.h>

int main(void) 
{
  
  // printf("Welcome to\n");
  // printf("C!\n");

  // printf("Welcome ");
  // printf("C!\n");
  
  // printf("Welcome\nto\nC!\n");

  
  int integer1;
  int integer2;
  
  printf("Enter first integer:\n");
  scanf("%d", &integer1 ); 

  printf("Enter second integer:\n");
  scanf("%d", &integer2 );  
  
  int sum;
  sum = integer1 + integer2;

  printf("Sum is %d\n", sum);

  return 0;
}

//Comments document programs and improve
//program readability.

// Comments do not cause the computer to
// perform any action when the program is run.