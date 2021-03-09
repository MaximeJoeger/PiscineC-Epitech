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

int main()
{
  my_putstr("jngzln\n");
  my_putstr(NULL);
  my_putstr("j\n");
  my_putstr("");

  return 0;
}
