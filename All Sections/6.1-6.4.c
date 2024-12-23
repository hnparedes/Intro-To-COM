#include <stdio.h>
#define SIZE 5

double calculateVAT(double price) {

    double tax = price * 0.02; 
    return tax;

}

int main(void) {

  // int n[5] = {32, 27, 64, 18, 95};

  // int s[SIZE];

  // for (size_t j = 0; j < 5; j++) {

  //   s[j] = 2 + 2 * j;

  // }

  // for (int i = 0; i < 5; i++) {
    
  //   n[i] = 0;
    
  // }

  // printf("%s%13s\n", "Element", "Value");

  // for(size_t j = 0; j < 5; ++j) {

  //   printf("%7zu%13d\n", j, s[j]);

  // }

  // for(size_t i = 0; i< 5; ++i) {

  //   printf("%7zu%13d\n", i, n[i]);
    
  // }

  double prices[10];
  double total = 0.0;

  printf("Enter the prices for 10 products:\n");
  for (int i = 0; i < 10; i++) {

    scanf("%lf", &prices[i]);

  }

  for (int i = 0; i < 10; i++) {

    total += prices[i]; 

  }

  double tax = total * 0.02; 
  double totalPriceWithTax = total + tax;

  printf(" %.2lf\n", totalPriceWithTax);

  return 0;
   
}