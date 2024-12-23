#include <stdio.h>
// #define SIZE 20
// #define SIZE 10

// void staticArrayInit(void);
// void automaticArrayInit(void);

int main(void) {

  // char array[5];

  // printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
  //    array, &array[0], &array);

  // int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

  // puts("Data items in original order");

  // for(size_t i = 0; i < SIZE; ++i) {

  //   printf("%4d", a[i]);
    
  // }

  // for(unsigned int pass = 1; pass < SIZE; ++pass) {

  //   for(size_t i = 0; i < SIZE - 1; ++i) {

  //     if(a[i] > a[i + 1]) {
        
  //       int hold = a[i];
  //       a[i] = a[i + 1];
  //       a[i + 1] = hold;
        
  //     }  
      
  //   }
    
  // }

  // puts("\nData items in ascending order");
  
  // for (size_t i = 0; i < SIZE; ++i) {
  //   printf( "%4d", a[i]);
  // }

  // puts("");
  
  // char string1[SIZE];
  // char string2[] = "string literal";

  // printf("%s", "Enter a string (no longer than 19 characters): ");
  // scanf("%19s", string1);

  // printf("string1 is: %s\nstring2 is: %s\n" "string1 with spaces between characters is:\n", string1, string2);

  // for(size_t i = 0; i < SIZE && string1[i] != '\0'; ++i)
  //   {

  //     printf( "%c ", string1[i]);
      
  //   }

  // puts("");

  // puts("First call to each function: ");
  // staticArrayInit();
  // automaticArrayInit();

  // puts("\n\nSecond call to each function: ");
  // staticArrayInit();
  // automaticArrayInit();

  char array[5];

  printf("    array = %p\n&array[0] = %p\n   &array = %p\n",
     array, &array[0], &array);
  
}

// void staticArrayInit(void) 
// {

//   static int array1[3];

//   puts("\nValues on entering staticArrayInit:");

//   for(size_t i = 0; i <= 2; ++i) {
//     printf("array1[%lu] = %d   ", i, array1[i]);
//   }

//   puts("\nValues on exiting staticArrayInit:");

//   for(size_t i = 0; i <= 2; ++i) {
//     printf("array1[%lu] = %d   ", i, array1[i] += 5);
//   }  

// } 

// void automaticArrayInit(void)
// {

//   int array2[3] = {1, 2, 3};

//   puts("\n\nValues on entering automaticArrayInit:");

//   for(size_t i = 0; i <= 2; ++i) {
//     printf( "array2[%lu] = %d   ", i, array2[i]);
//   }

//   puts("\nValues on exiting automaticArrayInit:");

//   for(size_t i = 0; i <= 2; ++i) {
//     printf( "array2[%lu] = %d   ", i, array2[i] += 5);
//   }
  
// }