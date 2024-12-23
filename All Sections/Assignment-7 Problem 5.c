#include <stdio.h>

int main(void) {

  int numbers[5];
  int double_digit_count = 0;

  printf("Enter 5 numbers:\n");
  
  for (int i = 0; i < 5; i++) {
    
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
    
  }

  for (int i = 0; i < 5; i++) {
    
    if (numbers[i] >= 10 && numbers[i] <= 99) {
      
      double_digit_count++;
      
    }
    
  }

  printf("Number of double-digit numbers: %d\n", double_digit_count);

  return 0;
  
}