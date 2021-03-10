#include <unistd.h>
#include <stdio.h>

int main (int argc, char **argv)
{
  int i = 0;
  while(i < argc)
  {
    my_putstr(argv[i]);
    my_putstr("\n");
    i++;
  }
  return 0;
}
