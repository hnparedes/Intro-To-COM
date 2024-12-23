#include <stdio.h>

int main(void) {

  // unsigned int sum = 0;

  // for(unsigned int number = 2; number <= 100; number += 2) {

  //   sum += number;
    
  // }
  // printf("Sum is %u\n", sum);

  unsigned int counter = 1;

  // while(counter <= 10) {

  //   printf("%u ", counter);
  //   counter++;
    
  // }

  do {

    printf("%u  ", counter);
    
  } while (++counter <= 10);
  
  // int n;
  // int counter;
  // int sum = 0;

  // printf("Enter a number: ");
  // scanf("%d", &n);

  // for(counter = 1; counter <= n; counter++) {

  //   if (counter < n) {

  //     printf("%d + ", counter);
      
  //   }
  //   else {

  //     printf("%d", counter);
      
  //   }
  //   sum += counter;
    
  // }
  
  // printf(" = %d", sum);

  unsigned int x;


  for (x = 1; x <= 10; ++x) {


    if (x == 5) {

      continue; //break; Broke out of loop at x == 5
      
    }

    printf("%u ", x);
    
  }
  
  printf("\nBroke out of loop at x == %u\n", x);
}