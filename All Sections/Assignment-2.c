#include <stdio.h>
#include <math.h>

int main(void) {
  int radius;
  int width;
  int circle;

  printf("Enter the radius of the circular playground: ");
  scanf("%d", &radius);

  printf("Enter the width of the walkway: ");
  scanf("%d", &width);

  int big_circle = radius + width;
  int playground = 3 * radius * radius;
  int large_circle = 3 * big_circle * big_circle;
  int walkway = large_circle - playground;

  printf("The area of the walkway is %.2d square units.\n", walkway);
  
}