#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_str_isnum(char const *str)
{
  int i = 0;
  int x = 0;
  while(str[i] != '\0')
  {
    if(str[i] < '0' || str[i] > '9')
    {
      x++;
    }
    i++;
  }
  printf("%d\n", x);
  if (x > 0)
   return 0;
  else
   return 1;
}

int main()
{
  char str[] = "584r5482";
  printf("%d\n", my_str_isnum(str));
  return 0;
}
