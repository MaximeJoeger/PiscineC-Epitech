#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *my_strlowcase(char *str)
{
  int i = 0;
  while(str[i] != '\0')
  {
    str[i] = str[i] + 32;
    i++;
  }
  return str;
}

int main()
{
  char str[] = "AETH5CZ";
  printf("%s\n", my_strlowcase(str));
  return 0;
}
