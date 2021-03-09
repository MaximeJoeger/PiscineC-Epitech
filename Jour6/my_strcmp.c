#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2)
{
  int i = 0;

  while(s1[i] != '\0' || s2[i] != '\0')
  {
    if (s1[i] < s2[i])
      return -1;
    else if(s1[i] > s2[i])
      return 1;
    i++;
  }
  if (s1[i-1] == s2[i-1])
    return 0;
}

int main()
{
  char s1[] = "rrggzrgf";
  char s2[] = "rrgszrgf";
  int ans = my_strcmp(s1, s2);
  printf("%d\n", ans);
  return 0;
}
