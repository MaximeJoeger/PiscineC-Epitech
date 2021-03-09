#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_str_isupper(char const *str)
{
  int i = 0;
  int x = 0;
  while(str[i] != '\0')
  {
    if(str[i] < 65 || str[i] > 90)
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
  char str[] = "FEZ5aAJN";
  printf("%d\n", my_str_isupper(str));
  return 0;
}
