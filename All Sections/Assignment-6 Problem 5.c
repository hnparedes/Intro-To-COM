#include <stdio.h>

int reverseDigits(int number) {

  int reversedNumber = 0;

  while (number > 0) {

    int lastDigit = number % 10;

    reversedNumber = reversedNumber * 10 + lastDigit;

    number = number / 10;
  }

  return reversedNumber;
}

int main() {

  printf("Enter a number to reverse its digits: ");
  int number;
  scanf("%d", &number);

  int reversedNumber = reverseDigits(number);

  printf("reverseDigits(%d) = %d\n", number, reversedNumber);

  return 0;
}