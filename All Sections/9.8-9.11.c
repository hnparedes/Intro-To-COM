#include <stdio.h>

int main(void) {
  // double a;
  // double b;

  // scanf("%lf", &a); //float: ("%f", &a)
  // scanf("%lf", &b); //float: ("%f", &b)

  // double c = a * b;

  // printf("%.2lf", c); //float: ("%.2f", c)
  

  // char x;

  // scanf("%c", &x);

  // if(x == 'z') {

  //   x = 'a';
    
  // }  
  // else {

  //   x = x + 1;   
    
  // }  
  
  // printf("%c", x);


  puts("Using precision for integers");
  int i = 873;
  printf("\t%.4d\n\t%.9d\n\n", i, i);

  puts("Using precision for floating point numbers");
  double f = 123.94536;
  printf("\t%.3f\n\t%.3e\n\t%.3g\n\n", f, f, f);

  puts("Using precision for strings");
  char s[] = "Happy Birthday";
  printf("\t%.11s\n", s);
  

  // printf("%d\n%d\n", 786, -786);
  // printf("%+d\n%+d\n", 786, -786);

  // printf("% d\n% d\n", 547, -547);


  puts("1234567890123456789012345678901234567890\n");
  printf("%10s%10d%10c%10f\n\n", "hello", 7, 'a', 1.23);
  printf("%-10s%-10d%-10c%-10f\n", "hello", 7, 'a', 1.23);
  

  // int c = 1427;
  // printf("%#o\n", c);
  // printf("%#x\n", c);
  // printf("%#X\n", c);

  // double p = 1427.0;
  // printf("\n%g\n", p);
  // printf("%#g\n", p);


  // printf("%+09d\n", 452);
  // printf("%09d\n", 452);


  // char z[10];

  // printf("%s", "Enter a String");
  // scanf("%8[aeiou]", z);

  // printf("The input was \"%s\"\n", z);

  return 0;
}