#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
  char *str;
  printf("Main /*str good\n\n");

  while (get_next_line(0, &str))
    {
      printf("%s\n", str);
      free(str);
    }
  printf("Success!\n");
  return (0);
}
