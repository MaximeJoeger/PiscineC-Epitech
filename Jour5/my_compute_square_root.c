#include <unistd.h>
#include <stdlib.h>

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

int main()
{
  int nb;

  nb = my_compute_square_root(9);
  return 0;
}
