#include <stdio.h>
#define SIZE 5
int main(void) {

  int A[SIZE], B[SIZE];

  printf("Enter %d integers for the first array:\n", SIZE);
  for (int i = 0; i < SIZE; i++) {
      scanf("%d", &A[i]);
  }

  printf("Enter %d integers for the second array:\n", SIZE);
  for (int i = 0; i < SIZE; i++) {
      scanf("%d", &B[i]);
  }
  
  printf("Arrays before swapping:\n");
  printf("First Array: ");
  for (int i = 0; i < SIZE; i++) {
      printf("%d ", A[i]);
  }
  printf("\nSecond Array: ");
  for (int i = 0; i < SIZE; i++) {
      printf("%d ", B[i]);
  }
  printf("\n");

  for (int i = 0; i < SIZE; i++) {
      int temp = A[i];
      A[i] = B[i];
      B[i] = temp;
  }

  printf("Arrays after swapping:\n");
  printf("First Array: ");
  for (int i = 0; i < SIZE; i++) {
      printf("%d ", A[i]);
  }
  printf("\nSecond Array: ");
  for (int i = 0; i < SIZE; i++) {
      printf("%d ", B[i]);
  }
  printf("\n");

  return 0;
}