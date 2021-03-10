#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

int my_print_digits()
{
  int i;

  i = 48;
  while ( i != 58)
  {
    my_putchar(i);
    i++;
  }
  return 0;
}
