#include <unistd.h>
#include <stdlib.h>

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
int main()
{
  int nb;

  nb = my_compute_factorial_it(8);
  int nb1 = my_compute_factorial_it(0);
  int nb2 = my_compute_factorial_it(-8);
  int nb3 = my_compute_factorial_it(1);
  printf("%d\n", nb);
  printf("%d\n", nb1);
  printf("%d\n", nb2);
  printf("%d\n", nb3);

  return 0;
}
