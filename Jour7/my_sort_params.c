#include <unistd.h>

int my_ascending_order(int argc, char **argv)
{
  int asc = 0;
  int i = 0;
  while (i < argc - 1)
  {
    if(my_strcmp(argv[i], argv[i+1]) > 0 || my_strcmp(argv[i], argv[i+1]) == 0)
      asc++;
    i++;
  }
  return asc;
}

int main (int argc, char **argv)
{
  int asc = 1;
  char *save;
  int i = 0;
  int j = 0;

  while(asc != 0)
  {
    while(i < argc - 1)
    {
      if(my_strcmp(argv[i], argv[i+1]) > 0)
      {
        save = argv[i];
        argv[i] = argv[i+1];
        argv[i+1] = save;
      }
      if(my_strcmp(argv[i], argv[i+1]) == 0)
      {
        while(argv[i][j] != '\0' || argv[i+1][j] != '\0')
        {
          if(argv[i][j] == argv[i+1][j])
            j++;
          else if(argv[i][j] > argv[i+1][j])
          {
            save = argv[i];
            argv[i] = argv[i+1];
            argv[i+1] = save;
          }
        }
      }
      i++;
    }
    i = 0;
    asc = my_ascending_order(argc, argv);
  }
  i = 0;
  while(i < argc - 1)
  {
    my_putstr(argv[i]);
    my_putstr("\n");
    i++;
  }

  return 0;
}
