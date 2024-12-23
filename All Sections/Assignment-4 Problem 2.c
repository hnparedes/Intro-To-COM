#include <stdio.h>

int main(void) {
  int n;
  int sum;
  int odd_sum;
  int even_sum;
  
  printf("Enter an integer number: ");
  scanf("%d", &n);
  
  sum = 0;
  for (int i = 1; i <= n; i++) {
    
    sum += i;
    
  }
  
  odd_sum = 0;
  int i = 1;
  while (i <= n) {
    
    if (i % 2 != 0) {
      
      odd_sum += i;
      
    }
    
    i++;
  }
  
  even_sum = 0;
  i = 2;
  while (i <= n) {
    
    if (i % 2 == 0) {
      
      even_sum += i;
      
    }
    
    i++;
  }

  printf("Total sum: %d\n", sum);
  printf("Total sum of all odd numbers: %d\n", odd_sum);
  printf("Total sum of all even numbers: %d\n", even_sum);

  return 0;
}