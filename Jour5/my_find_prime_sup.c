#include <unistd.h>
#include <stdlib.h>

int my_is_prime(int nb)
{
  int p;
  int prime;

  p = nb+1;
  prime = 0;
  while (p > 2)
  {
    p--;
    if (nb % p == 0)
      prime++;
  }
  if (prime == 1)
    return 1;

  return 0;
}

int my_find_prime_sup(int nb)
{
  int i;

  nb--;
  i = 0;
  while (i != 1)
  {
    nb++;
    i = my_is_prime(nb);
  }
  return nb;
}

int main()
{
  int primeNbr;

  primeNbr = my_find_prime_sup(114);
  int primeNbr1 = my_find_prime_sup(-19);
  int primeNbr2 = my_find_prime_sup(11);
  int primeNbr3 = my_find_prime_sup(0);
  printf("%d\n", primeNbr);
  printf("%d\n", primeNbr1);
  printf("%d\n", primeNbr2);
  printf("%d\n", primeNbr3);
  return 0;
}
