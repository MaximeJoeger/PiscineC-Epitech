#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  int i = argc;
  i--;
  while(i >= 0)
  {
    my_putstr(argv[i]);
    my_putstr("\n");
    i--;
  }
  return 0;
}
