#include <stdio.h>

int main(void) {
  printf("||===================||\n");
  printf("||Celcius->Fahrenheit||\n");
  printf("||-------------------||\n");
  
  for(int celsius = -30; celsius <= 30; celsius++) {

    float fahrenheit = 9.0 / 5.0 * celsius + 32.0;

    printf("||%3d    ->    %6.1f||\n", celsius, fahrenheit);
    
  }

  printf("||===================||\n");
  
  return 0;
}