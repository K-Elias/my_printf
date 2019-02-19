#include "my.h"

int	epur_sp(const char *str, int i)
{
  my_putchar(' ');
  while (str[i] == ' ')
    i++;
  return (i - 1);
}
