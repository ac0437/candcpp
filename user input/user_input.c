#include <stdio.h>

int main()
{
  int number;

  printf("Give me a number to double: ");
  scanf("%d", &number);

  printf("Your number doubled is: %d", number * 2);

  return 0;
}