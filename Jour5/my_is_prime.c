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

int main()
{
  int answer;

  answer = my_is_prime(109);
  int answer1 = my_is_prime(15);
  int answer2 = my_is_prime(0);
  int answer3 = my_is_prime(-46);
  printf("%d\n", answer);
  printf("%d\n", answer1);
  printf("%d\n", answer2);
  printf("%d\n", answer3);


  return 0;
}
