#include <stdio.h>
#include <stdlib.h>

// int maximum(int x, int y, int z);

// unsigned long long int factorial(unsigned int number);

void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);

int x = 1;

int main(void)
{

  // for(unsigned int i = 0; i <= 21; ++i) {

  //   printf("%u! = %llu\n", i, factorial(i));
    
  // }
  
  int x = 5;

  printf("local x in outer scope of main is %d\n", x);

  {

    int x = 7;

    printf("local x in inner scope of main is %d\n", x);
    
  }

  printf("local x in outer scope of main is %d\n", x);

  useLocal();
  useStaticLocal();  
  useGlobal();
  useLocal();
  useStaticLocal();
  useGlobal();

  printf("\nlocal x in main is %d\n", x);


  // unsigned int seed;

  // printf("%s", "Enter seed: ");
  // scanf("%u", &seed);

  // srand(seed);


  // for(unsigned int i = 1; i <= 10; ++i) {

  //   printf("%10d", 1 + (rand() % 6));

  //   if(i % 5 == 0) {

  //     puts("");
      
  //   }
    
  // }

  // int a, b, c;

  // printf("Enter Three Digits: \n");
  // scanf("%d", &a);
  // scanf("%d", &b);
  // scanf("%d", &c);
  
  // int res;
  // res = volume(a, b, c);

  // printf("%d", res);
  

  //   int number1;
  //   int number2;
  //   int number3;

  //   printf("%s", "Enter three integers: ");
  //   scanf("%d %d %d", &number1, &number2, &number3);

  //   printf("Maximum is: %d\n", maximum(number1, number2, number3));
  
  // }

  // int maximum(int x, int y, int z) {

  //   int max = x;

  //   if(y > max) {
    
  //     max = y;
    
  //   }
  
  //   if(z > max) {
    
  //     max = z;
     
  //   }
  
  //   return max;

  
}  

// int volume(int a, int b, int c) {

//   return a * b * c;
  
// }

void useLocal(void) {

  int x = 25;
  
  printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
  ++x;
  printf("local x in useStaticLocal is %d after entering useStaticLocal\n", x);

  
}

void useStaticLocal(void) {
  
  static int x = 50;

  printf("\nlocal static x is %d on entering useStaticLocal\n", x);
  ++x;
  printf("local static x is %d on exiting useStaticLocal\n", x);

}  

void useGlobal(void)
{

  printf("\nglobal x is %d on entering useGlobal\n", x);
  x *= 10;
  printf("global x is %d on exiting useGlobal\n", x);
  
}

// unsigned long long int factorial(unsigned int number) {

//   if(number <= 1) {
//     return 1;
//   }
//   else {
//     return (number * factorial(number - 1));
//   }  

// }