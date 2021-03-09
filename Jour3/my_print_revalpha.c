#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

int my_print_revalpha()
{
  int i;

  i = 122;
  while ( i != 96)
  {
    my_putchar(i);
    i--;
  }
  return 0;
}

int main()
{
  my_print_revalpha();
  return 0;
}
