#include <unistd.h>

void my_swap(int *a,int *b)
{
  int saveA = *a;
  *a = *b;
  *b = saveA;
}
