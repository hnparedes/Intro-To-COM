#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  srand(time(NULL));

  int secret_number;
  int low = 1;
  int high = 100;
  int feedback;
  int guess;

  printf("Think of a number between 1 and 100.\n");
  printf("Press 0 when you're ready for me to start guessing.\n");

  int start;
  scanf("%d", &start);

  if (start == 0) {

    guess = rand() % 100 + 1;

    do {

      printf("Is your number %d?\n", guess);
      printf("Enter feedback (2: Too high, 1: Too low, 0: Correct): ");

      scanf("%d", &feedback);

      if (feedback == 2) {
        
        high = guess - 1;
        
      } 
      else if (feedback == 1) {
        
        low = guess + 1;
        
      }

      guess = rand() % (high - low + 1) + low;

    } while (feedback != 0);

    printf("Yay! I guessed it!\n");

  }

  return 0;

}