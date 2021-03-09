#include <unistd.h>

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

void my_putchar(char c)
{
  write(1, &c, 1);
}

void my_putstr(char const *str)
{
  int i;

  i = 0;
  while (str && str[i] != '\0')
  {
    my_putchar(str[i]);
    ++i;
  }
}

int my_put_nbr(int n)
{
  char result[11];
  int i;

  i = 0;
  if (n < 0)
  {
    n = n * -1;
    my_putchar('-');
  }
  while (n > 9)
  {
    result[i] = (n % 10) + 48;
    n = n / 10;
    i++;
  }
  result[i] = n + 48;
  result[i+1] = '\0';
  my_revstr(result);
  my_putstr(result);
  return 0;
}
