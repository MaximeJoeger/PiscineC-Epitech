#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char *my_strcpy(char *dest, char const *src)
{
  int i = 0;
  while(src != NULL && src[i] != '\0')
  {
    dest[i] = src[i];
    i++;
  }
    dest[i] = '\0';
  return dest;
}

int main()
{
  char dest[] = "123456789";
  char const src[] = "12345";

  my_strcpy(dest, src);
  printf("%s", dest);

  return 0;
}
