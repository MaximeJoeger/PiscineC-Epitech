#include <unistd.h>

void print(int *array, int size)
{
  int i = 0;
  while (i < size)
  {
    printf("%d\n", array[i]);
    i++;
  }
}
int my_ascending_order(int *array, int size)
{
  int asc = 0;
  int i = 0;
  while (i < size)
  {
    if(array[i] > array[i+1])
      asc++;
    i++;
  }
  return asc;
}

void my_sort_int_array(int *array, int size)
{
  int i = 0;
  int asc = 1;

  while(asc != 0)
  {
    while (i < size-1)
    {
      if(array[i] > array[i+1])
      {
        int save = array[i];
        array[i] = array[i+1];
        array[i+1] = save;
      }
        i++;
    }
    i = 0;
    asc = my_ascending_order(array, size);
  }
  print(array, size);
}
