#include <unistd.h>

int my_compute_power_it(int nb, int p)
{
  int nb2;
  int p2;

  nb2 = nb;
  p2 = p;
  if (p > 0)
  {
    while (p2 > 1)
    {
      nb = nb * nb2;
      p2--;
    }
  }
  else if (p == 0)
    nb = 1;
  else if (p < 0)
    nb = 0;
  return nb;
}
