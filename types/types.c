#include <stdio.h>
#include <stdbool.h>

int main()
{
  char letter = 'A';
  char string[] = "Hello world!";
  char stringEscape[] = "\"Need \\ to escape \"";
  int one = 1;
  double decimalNumber = 5.5;
  float decimalFloat = 5.5f;
  long number = 123456789;
  bool truthy = true;

  printf("Char: %c\n", letter);
  printf("String: %s\n", string);
  printf("String escape: %s\n", stringEscape);
  printf("Int: %i\n", one);
  printf("Dobule: %lf\n", decimalNumber);
  printf("Float: %f\n", decimalFloat);
  printf("Long: %ld\n", number);
  printf("Boolean: %i\n", truthy);

  return 0;
}