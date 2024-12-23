#include <stdio.h>
#include <math.h>

int main() {
  int a;
  int b;
  int c;
  double root1;
  double root2;

  printf("Enter coefficients a, b, and c separated by spaces: ");
  scanf("%d %d %d", &a, &b, &c);

  double discriminant = pow(b, 2) - 4 * a * c;

  if (discriminant > 0) {
    
    root1 = (-b + sqrt(discriminant)) / (2 * a);
    root2 = (-b - sqrt(discriminant)) / (2 * a);

    printf("Two real roots exist:\n");
    printf("Root1 = %.2f\n", root1);
    printf("Root2 = %.2f\n", root2);
    
  } 
  else if (discriminant == 0) {
    
    root1 = -b / (2 * a);

    printf("One real root exists:\n");
    printf("Root = %.2f\n", root1);
    
  } 
  else {
    
    printf("There are no real roots.\n");
    
  }

  return 0;
}