#include <stdio.h>
#define SIZE 6

int main(void) {

  int even[SIZE];

  for (int i = 0; i < SIZE; i++) {
    
      even[i] = (i + 1) * 2;
    
  }
  
  for (int i = 0; i < SIZE; i++) {
    
      printf("%d ", even[i]);
    
  }

  return 0;
  
}