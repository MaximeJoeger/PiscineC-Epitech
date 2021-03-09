#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str)
{
  int i;

  i = 0;
  while (str != NULL && str[i] != '\0')
    i++;
  return i;
}

char *my_strncpy(char *dest, char const *src, int n)
{
  int i = 0;
  int x = my_strlen(dest);
  if (x >= n)
  {
    while(src != NULL && i <= n - 1)
    {
      dest[i] = src[i];
      i++;
    }
    dest[i] = '\0';
  }
  if (n > x)
  {
    while(src != NULL && i <= x)
    {
      dest[i] = src[i];
      i++;
    }
    dest[x-1] == '\0';
  }
  return dest;
}

int main()
{
  int n = 12;
  char dest[] = "123456789";
  char const src[] = "ABCDEFG";

  my_strncpy(dest, src, n);
  printf("%s", dest);
  return 0;
}
