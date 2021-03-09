#include <unistd.h>

int my_strlen(char const *str)
{
  int i;
  
  i = 0;
  while (str != NULL && str[i] != '\0')
    i++;
  return i;
}
