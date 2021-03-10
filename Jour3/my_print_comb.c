#include <unistd.h>

void my_putchar(char c)
{
  write(1, &c, 1);
}

int my_print_comb()
{
  int m = 0;
  int n = 0;
  int i = 0;

  while (m < 10)
  {
    n = m + 1;

    while (n < 10)
    {
      i = n + 1;

      while (i < 10)
      {
        my_putchar(m + 48);
        my_putchar(n + 48);
        my_putchar(i + 48);
        if (m < 7)
        {
        my_putchar(',');
        my_putchar(' ');
        }
        i++;
      }
      n++;
    }
    m++;
  }
  return 0;
}
