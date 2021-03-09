#include <unistd.h>

int my_compute_square_root(int nb)
{
  int x;

  x = 0;
  while (x < nb)
  {
    x++;
    if (x * x == nb)
      return x;
  }
  return 0;
}
