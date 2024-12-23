#include <stdio.h>

int main(void) {

  int num1;
  int num2;

  do {

    printf("Enter two positive integers\n");
    scanf("%d %d", &num1, &num2);

    if(num1 <= 0 || num2 <= 0) {

      printf("At least one integer is less than or equal to 0. Try again!\n");
      
    } 
    
  } while (num1 <= 0 || num2 <= 0);

  int lcm = num1 * num2 / gcd(num1, num2);

  printf("The Least Common Multiple of %d and %d is %d\n", num1, num2, lcm);  
    
  return 0;
}

int gcd(int num1, int num2) {

  if(num2 == 0) {

    return num1;
    
  }
  else {

    return gcd(num2, num1 % num2);
    
  }

  
}