#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int a, b;
  printf("Enter a positive number: ");
  scanf("%d", &a);
  printf("Enter a negative number: ");
  scanf("%d", &b);

  if (a <= 0 || b >= 0) {
    
    printf("Invalid input. Please enter a positive and negative number.\n");
    return 1;
    
  }

  srand(time(NULL));
  int random_number = b + (rand() % (a - b + 1));

  printf("Random number between %d and %d: %d\n", b, a, random_number);

  return 0;
  
}