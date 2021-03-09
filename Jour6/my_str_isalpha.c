#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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

int main()
{
  char str[] = "dqthez8tha";
  printf("%d\n", my_str_isalpha(str));
  return 0;
}
