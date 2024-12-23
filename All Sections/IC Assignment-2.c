#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int secret_number = rand() % 100 + 1;

  int guess;
  printf("Welcome to the Guessing Game!\n");
  printf("I have chosen a number between 1 and 100.\n");
  printf("Can you guess what it is?\n");
  printf("Enter your guess: ");
  scanf("%d", &guess);

  int attempts = 1;

  while (guess != secret_number) {
  if (guess < secret_number) {
    printf("My number is higher! Try again.\n");
  } else {
    printf("My number is lower! Try again.\n");
  }

  attempts++;
    
  printf("Enter your guess: ");
  scanf("%d", &guess);

  }

  printf("Congratulations! You've guessed the right number in %d attempts!\n", attempts);

  return 0;
    
}