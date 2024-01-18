#include <stdio.h>
#include <stdbool.h>
int main()
{

  bool isEven = 12 % 9 == 0 ? true : false;

  if (isEven)
  {
    printf("Number is even.");
  }
  else
  {
    printf("Number is odd.");
  }
  return 0;
}