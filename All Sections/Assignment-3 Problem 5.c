#include <stdio.h>

int main(void) {
  float inches[2];
  float cm[2];

  printf("Please enter two lengths in inches: ");
  scanf("%f %f", &inches[0], &inches[1]);

  printf("Please enter two lengths in centimeters: ");
  scanf("%f %f", &cm[0], &cm[1]);

  for (int i = 0; i < 2; i++) {
    cm[i] = inches[i] * 2.54;
  }

  for (int i = 0; i < 2; i++) {
    inches[i] = cm[i] / 2.54;
  }

  printf("Inches | Centimeters || Centimeters | Inches\n");
  printf("----------------------------------------------\n");
  for (int i = 0; i < 2; i++) {
    printf("%5.2f  | %7.2f     || %7.2f     | %5.2f\n", inches[i], cm[i], cm[i], inches[i]);
  }
}