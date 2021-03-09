#include <unistd.h>

char* my_strcapitalize(char *str)
{
  int i = 1;
  if(str[0] > 96 && str[0] < 123)
      str[0] = str[0] - 32;

  while(str[i] != '\0')
  {
    if(str[i] == 32 || str[i] == 39)
    {
      if(str[i + 1] > 96 && str[i + 1] < 123)
        str[i + 1] = str[i + 1] - 32;
    }
    i++;
  }
  return str;
}
