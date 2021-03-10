#include <unistd.h>

int my_compute_factorial_it(int nb)
{
  int nb2;

  nb2 = nb;
  if (nb2 > 0)
  {
    while (nb2 != 1)
    {
      nb2--;
      nb = nb * nb2;
    }
  }
  else if (nb2 == 0)
    nb = 1;
  else
    nb = 0;
  return nb;
}
