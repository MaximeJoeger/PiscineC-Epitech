#include <unistd.h>

int my_compute_power_rec(int nb, int p)
{
  if (p > 1)
    nb = nb * my_compute_power_rec(nb, p-1);
  else if (p == 0)
    nb = 1;
  else if (p < 0)
    nb = 0;
  return nb;
}
