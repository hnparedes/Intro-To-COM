#include <stdio.h>

int main(void) {
  char letter;
  int vowel_count = 0;

  printf("Enter your name one character at a time. Enter '!' to stop: \n");

  while (letter != '!') {
    printf("Enter next character of your name: ");
    scanf("%c", &letter);
    printf("\n");

    getchar();

    if (isalpha(letter)) {
      
      if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        
        vowel_count++;
        
      }
      
    }
    
  }

  printf("Number of vowels in your name: %d\n", vowel_count);

  return 0;
}