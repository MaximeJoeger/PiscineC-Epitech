#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *my_strupcase(char *str)
{
  int i = 0;
  while(str[i] != '\0')
  {
    str[i] = str[i] - 32;
    i++;
  }
  return str;
}

int main()
{
  char str[] = "tzjrthz";
  printf("%s\n", my_strupcase(str));
  return 0;
}
