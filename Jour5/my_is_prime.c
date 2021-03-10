#include <unistd.h>

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
