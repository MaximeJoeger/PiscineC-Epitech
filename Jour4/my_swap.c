#include <unistd.h>
#include <stdio.h>

void my_swap(int *a,int *b)
{
  int saveA = *a;
  *a = *b;
  *b = saveA;
}
int main()
{
  int a;
  int b;

  a = 8;
  b = 3;
  my_swap(&a, &b);
  printf("%d, %d\n", a, b);

  return 0;
}
