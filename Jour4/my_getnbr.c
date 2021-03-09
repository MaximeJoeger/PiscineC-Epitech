#include <unistd.h>

int my_strlen(char const *str)
{
  int i;

  i = 0;
  while (str != NULL && str[i] != '\0')
    i++;
  return i;
}

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

int my_len_getnbr(char const *str)
{
  int i = 0;
  int len = 0;

    while (str[i] < 48 || str[i] > 57)
      i++;

    while (str[i] > 48 && str[i] < 57)
      i++;

    while (str[i] != '\0')
    {
      len++;
      i++;
    }
  return len;
}

int negatif(char const *str)
{
  int i = 0;
  int n = 0;

  while (str[i] < 48 || str[i] > 57)
    i++;

  if (str[i - 1] == 45)
    n = 1;

  return n;
}

int my_getnbr(char const *str)
{
  int i = 0;
  int n = negatif(str);
  int my_nbr = 0;
  int len = my_len_getnbr(str);
  int len2 = my_strlen(str);
  len2 -= len;

  while (str[i] < 48 || str[i] > 57)
  {
    i++;
    len2--;
  }
  my_nbr = ( str[i] - 48 ) * my_compute_power_it(10, len2 - 1);
  len2--;
  i++;
  while(len2 > 0)
  {
    my_nbr += ( str[i] - 48 ) * my_compute_power_it(10, len2 - 1);
    i++;
    len2--;
  }
  if (n = 1)
    my_nbr *= -1;
  return my_nbr;
}
