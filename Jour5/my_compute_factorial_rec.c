#include <unistd.h>
#include <stdlib.h>

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
int main()
{
  int nb;

  nb = my_compute_factorial_rec(8);
  int nb1 = my_compute_factorial_rec(0);
  int nb2 = my_compute_factorial_rec(-8);
  int nb3 = my_compute_factorial_rec(1);
  printf("%d\n", nb);
  printf("%d\n", nb1);
  printf("%d\n", nb2);
  printf("%d\n", nb3);
  return 0;
}
