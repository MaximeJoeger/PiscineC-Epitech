#include <unistd.h>
#include <stdio.h>

char *my_strcat(char *dest, char const *src)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while(dest[i] != '\0')
    i++;
  while(src[j] != '\0')
  {
    dest[i] = src[j];
    i++;
    j++;
  }
  dest[i] = '\0';
  return dest;
}

int main()
{
  char dest[10] = "12345";
  char const src[] = "6789";
  str = my_strcat(dest, src);
  printf("%s\n", str);
  return 0;
}
