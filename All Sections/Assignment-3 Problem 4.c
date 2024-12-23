#include <stdio.h>

int main(void) {
  float balance = 150.75;
  char choice;
  float amount;

  printf("Current Balance: $%.2f\n", balance);

  printf("Do you want to Add (A) or Spend (S) funds? ");
  scanf("%c", &choice);

  if (choice != 'A' && choice != 'S') {
    printf("Invalid choice!\n");
    return 1;
  }

  printf("Enter the amount: $");
  scanf("%f", &amount);

  if (choice == 'A') {
    balance += amount;
  } else if (choice == 'S') {
    if (amount > balance) {
      printf("Insufficient funds! Please reconsider your spending amount.\n");
    } else {
      balance -= amount;
    }
  }

  printf("Updated Balance: $%.2f\n", balance);

}