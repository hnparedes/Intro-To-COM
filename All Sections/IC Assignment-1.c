#include <stdio.h>

int main(void) {
 double product1;
 double product2;
 double product3;
  
 printf("Product 1: $"); 
 scanf("%lff", &product1);
 printf("Product 2: $"); 
 scanf("%lff", &product2);
 printf("Product 3: $"); 
 scanf("%lff", &product3);

 if(product1 > 10) {

  double discount1 = product1 - (product1 * 0.2);
  printf("Got a discount for product 1 and the product 1's price is $%.2lf ", discount1);
  printf("instead of $%.2lf\n", product1);
  double product1 = product1 - (product1 * 0.2);
   
 }
 if(product2 > 10) {

  double discount2 = product2 - (product2 * 0.2);
  printf("Got a discount for product 2 and the product 2's price is $%.2lf ", discount2);
  printf("instead of $%.2lf\n", product2);
  double product2 = product2 - (product2 * 0.2);
   
 }
 if(product3 > 10) {

  double discount3 = product3 - (product3 * 0.2);
  printf("Got a discount for product 3 and the product 3's price is $%.2lf ", discount3);
  printf("instead of $%.2lf\n", product3);
  double product3 = product3 - (product3 * 0.2);
   
 }
  
 double total_price = product1 + product2 + product3;
 printf("Total price: $%.2f", total_price);

 return 0;
}