#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_swap_char(char *a,char *b)
{
  char saveA = *a;
  *a = *b;
  *b = saveA;
}

int my_strlen(char const *str)
{
  int i;

  i = 0;
  while (str != NULL && str[i] != '\0')
    i++;
  return i;
}

char *my_revstr(char *str)
{
  int x;
  int i;

  x = my_strlen(str) - 1;
  i = 0;
  while (x > i)
  {
    my_swap_char(&str[i], &str[x]);
    i++;
    x--;
  }
  return str;
}

int main()
{
  char str[] = "123456";
  my_revstr(str);
  printf("%s\n", str);
  return 0;
}
