#include <unistd.h>

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
  if (x > 0)
   return 0;
  else
   return 1;
}
