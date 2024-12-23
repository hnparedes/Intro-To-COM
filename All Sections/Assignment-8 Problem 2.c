#include <stdio.h>
# define SIZE 5

int main(void) {

  int A[] = {1, 3, 5, 7, 9};
  int B[] = {2, 3, 4, 7, 9};

  printf("Array A: ");
  for (int i = 0; i < SIZE; i++) {
      printf("%d ", A[i]);
  }
  
  printf("\n");
  printf("Array B: ");
  for (int i = 0; i < SIZE; i++) {   
      printf("%d ", B[i]);   
  }
  
  printf("\n");
  printf("Common elements in both arrays:\n");
  for (int i = 0; i < SIZE; i++) {    
      for (int j = 0; j < SIZE; j++) {       
          if (A[i] == B[j]) {          
              printf("%d ", A[i]);
              break;            
          }        
      }
  }

  return 0; 
}