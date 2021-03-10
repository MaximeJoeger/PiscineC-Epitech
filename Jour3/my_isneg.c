#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

int my_isneg(int i)
{
  if (i < 0)
    my_putchar('N');
  else
    my_putchar('P');
  return i;
}
