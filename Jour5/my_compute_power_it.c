#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

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
int main()
{
  int nb;

  nb = my_compute_power_it(10, 2);
  int nb1 = my_compute_power_it(4, 0);
  int nb2 = my_compute_power_it(4, -8);
  printf("%d\n", nb);
  printf("%d\n", nb1);
  printf("%d\n", nb2);

  return 0;
}
