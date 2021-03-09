#include <unistd.h>

int my_str_isalpha(char const *str)
{
  int i = 0;
  int x = 0;
  while(str[i] != '\0')
  {
    if(str[i] < 65 || str[i] > 90 && str[i] < 97 || str[i] > 122)
        x++;
    i++;
  }
  printf("%d\n", x);
  if (x > 0)
   return 0;
  else
   return 1;
}
