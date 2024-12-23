#include <stdio.h>

int main(void) {
  // int grade;

  // printf("Enter your test grade: ");
  // scanf("%d", &grade);

  // if(grade >= 90) {

  //   puts("A");
    
  // }
  // else {

  //   if(grade >= 80) {

  //     puts("B");

  //   }
  //   else {

  //     if(grade >= 70) {

  //       puts("C");

  //     }
  //     else {

  //       if(grade >= 60) {

  //         puts("D");

  //       }
  //       else {

  //         puts("F");

  //       }
  //     }
  //   }
  // }
  
  // if(grade >= 80 && grade <= 90) {
    
  //   printf("Passed\n");
    
  // }
  // else if(grade <= 79){
    
  //   printf("Failed\n");
    
  // }
  // else {

  //  printf("You're a LEGEND");
    
  // }

  // int product = 3;
  
  // while(product <= 100) {

  //   product *= 3;
  //   printf("%d, ", product);
    
  // }

  // int var;
  // scanf("%d", &var);
  // int sum = 0;

  // while(var > 0) {

  //   sum = sum + var;
  //   var++;

  //   if(var == 100) {

  //     break;
      
  //   }

  // }

  // printf("%d", sum);
  
  int var = 1;

  while(1) { 
    scanf("%d", &var);
    
    if(var % 2 == 0) { 

      puts("Even Number");
      
    }
    else
    {

     puts("Odd Number");
      
    }

    if(var == 0) {

      break;
      
    }
  }
  
  printf("%d", var);
  //int var2 = 'a' + 1
  //printf("%d", var2)
  return 0;
}