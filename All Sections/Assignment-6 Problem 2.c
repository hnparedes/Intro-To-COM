#include <stdio.h>
#include <math.h>

double calculate_distance(int x1, int y1, int x2, int y2) {
  double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  return distance;
}

int main(void) {

  int x1;
  int y1;
  int x2;
  int y2; 

  printf("Enter x1 and y1 separated by a space: ");
  scanf("%d %d", &x1, &y1);

  printf("Enter x2 and y2 separated by a space: ");
  scanf("%d %d", &x2, &y2);

  double distance = calculate_distance(x1, y1, x2, y2);

  printf("Distance between the given points is: %.2f\n", distance);

  return 0;
  
}