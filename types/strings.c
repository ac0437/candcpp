#include <stdio.h>
#include <string.h>

void printLetters(char str[])
{
  for (int i = 0; i < strlen(str); ++i)
  {
    if (str[i] != ' ')
    {
      printf("Letter: %c \n", str[i]);
    }
  }
}
int main()
{
  char str[] = "Hello world!";

  printLetters(str);

  return 0;
}