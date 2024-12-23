#include <stdio.h>

int main(void) {
  int n;
  int sum = 0;

  printf("Enter the number\n");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    
    if (i % 5 == 0 && i % 7 != 0) {
      
      sum += i;
      
    }
    
  }

  printf("The sum is: %d\n", sum);

  return 0;
}