#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

int my_print_alpha()
{
  int i;

  i = 97;
  while ( i != 123)
  {
    my_putchar(i);
    i++;
  }
  return 0;
}
