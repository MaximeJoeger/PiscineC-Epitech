#include <unistd.h>

int my_compute_factorial_rec(int nb)
{
  if (nb > 1)
    nb = nb * my_compute_factorial_rec(nb-1);
  else if (nb == 0)
    nb = 1;
  else if (nb < 0)
    nb = 0;
  return nb;
}
