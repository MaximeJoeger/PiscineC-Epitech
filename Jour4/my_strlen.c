#include <unistd.h>
#include <stdio.h>

int my_strlen(char const *str)
{
  int i;
  
  i = 0;
  while (str != NULL && str[i] != '\0')
    i++;
  return i;
}

int main()
{

  printf("%d\n", my_strlen(NULL));
  printf("%d\n", my_strlen(""));
  printf("%d\n", my_strlen("x"));
  printf("%d\n", my_strlen("xcvtybuni"));
  return 0;
}
