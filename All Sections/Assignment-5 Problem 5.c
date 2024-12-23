#include <stdio.h>

int main(void) {
  float total_price = 0.0;
  int product_number;

  printf("Enter item number (Enter -1 for the item number to end input) \n");
  
  while (product_number != -1) {
  
    scanf("%d", &product_number);

    if (product_number != -1) {
      if (product_number < 1 || product_number > 5) {
        printf("Invalid product code: %d\n", product_number);
        continue;
      }
    }  

    float retail_price = 0.0;
    switch (product_number) {
      case 1:
        retail_price = 2.98;
        break;
      case 2:
        retail_price = 4.50;
        break;
      case 3:
        retail_price = 9.98;
        break;
      case 4:
        retail_price = 4.49;
        break;
      case 5:
        retail_price = 6.87;
        break;
    }

    total_price += retail_price;
  }

  printf("The total retail value was: %.2f\n", total_price);

  return 0;
}