#include <unistd.h>
#include <stdio.h>

char *my_strncat(char *dest, char const *src, int nb)
{
  int i = 0;
  int j = 0;
  while(dest[i] != '\0')
    i++;
  while(src[j] != '\0' && j < nb)
  {
    dest[i] = src[j];
    i++;
    j++;
  }
  dest[i] = '\0';
  printf("%d\n", j);
  printf("%d\n", nb);
  return dest;
}

int main()
{
  int nb = 3;
  char dest[10] = "12345";
  char const src[] = "6789";
  char *str = my_strncat(dest, src, nb);
  printf("%s\n", str);

  return 0;
}
