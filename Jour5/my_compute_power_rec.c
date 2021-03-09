#include <unistd.h>
#include <stdlib.h>

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
int main()
{
  int nb;

  nb = my_compute_power_rec(4, 5);
  int nb1 = my_compute_power_rec(4, 0);
  int nb2 = my_compute_power_rec(4, -8);
  printf("%d\n", nb);
  printf("%d\n", nb1);
  printf("%d\n", nb2);
  return 0;
}
