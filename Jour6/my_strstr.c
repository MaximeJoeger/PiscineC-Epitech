#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *my_strstr(char *str, char const *to_find)
{
  int i = 0;

  if(to_find == NULL || to_find[0] == '\0')
    return str;
  while (str[i] != '\0')
  {
    while (str[i] != to_find[i])
    {
      str++;
      while (str[i] == to_find[i])
      {
        i++;
        if (to_find[i] == '\0')
          return str;
        if (str[i] != to_find[i])
        {
          i = 0;
          str++;
        }
      }
    }
  }
}

int main()
{
  char *strstr;
  char str[] = "168435";
  strstr = my_strstr(str, "3468384");
  printf("%s\n", strstr);
  return 0;
}
