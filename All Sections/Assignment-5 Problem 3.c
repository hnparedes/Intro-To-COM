#include <stdio.h>

int main(void) {
  int n;
  int sum = 0;
  int i = 1;

  printf("Enter the number\n");
  scanf("%d", &n);

  do {
    
    if (i % 5 == 0 && i % 7 != 0) {
      
      sum += i;
      
    }
    
    i++;
  } while (i <= n);

  printf("The sum is: %d\n", sum);

  return 0;
}