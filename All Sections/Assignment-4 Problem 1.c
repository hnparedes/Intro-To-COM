#include <stdio.h>

int main(void) {
  char letter;

  printf("Enter any letter: ");
  scanf("%c", &letter);
  
  while ((getchar()) != '\n');

  if (letter >= 'a' && letter <= 'z') {
    if (letter == 'z') {
      printf("Next letter: a\n");
    } else {
      printf("Next letter: %c\n", letter + 1);
    }
  } else if (letter >= 'A' && letter <= 'Z') {
    if (letter == 'Z') {
      printf("Next letter: A\n");
    } else {
      printf("Next letter: %c\n", letter + 1);
    }
  } else {
    printf("Error: Invalid input. Please enter a letter.\n");
  }

  return 0;
}