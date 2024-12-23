#include <stdio.h>

int main(void) {

  int start;
  int end;
  int product;

  printf("Enter the start value: ");
  scanf("%d", &start);
  printf("Enter the end value: ");
  scanf("%d", &end);

  product = 1;

  for (int i = start; i <= end; i++) {
    
    product *= i;
    
  }

  printf("Product of numbers from %d to %d is: %d\n", start, end, product);

  return 0;

}