#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "string.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
  int i = 0;

  while(i < n || s1[i] != '\0' || s2[i] != '\0')
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
  char s1[] = "rrggzgf";
  char s2[] = "rrgyrgf";
  int n = 3;
  int ans = my_strncmp(s1, s2, n);
  printf("%d\n", ans);
  return 0;
}
