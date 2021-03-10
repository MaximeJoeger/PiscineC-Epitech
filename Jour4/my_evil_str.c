#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

int my_putstr(char const *str)
{
  int i;

  i = 0;
  while (str != NULL && str[i] != '\0')
  {
    my_putchar(str[i]);
    i++;
  }
  return 0;
}


int my_strlen(char const *str)
{
  int i;

  i = 0;
  while (str != NULL && str[i] != '\0')
    i++;
  return i;
}

void my_swap_char(char *a,char *b)
{
  char saveA = *a;
  *a = *b;
  *b = saveA;
}

char *my_evil_str(char *str)
{
  int i;
  int h;

  i = my_strlen(str);
  h = 0;
  i = i - 1;
  while (str != NULL && i > h)
  {
   my_swap_char(&str[h], &str[i]);
   i--;
   h++;
  }
  return str;
}
