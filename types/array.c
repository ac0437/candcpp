#include <stdio.h>

void printMemebersOfArray(int array[4])
{
  for (int i = 0; i < 4; ++i)
  {
    printf("Numbers: %d \n", array[i]);
  }
}

int main()
{
  int numbers[4];
  int numbersLiteral[] = {1, 2, 3, 4};

  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  printMemebersOfArray(numbers);
  printMemebersOfArray(numbersLiteral);

  printf("Size of numbers: %zu \n", sizeof(numbers) / sizeof(numbers[0]));
  printf("Size of numbers literal: %zu \n", sizeof(numbersLiteral) / sizeof(numbersLiteral[0]));

  return 0;
}
