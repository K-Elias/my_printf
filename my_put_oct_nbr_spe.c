#include <stdlib.h>
#include "my.h"

void	my_putchar_spe(char c)
{
  if (c < 32 || c > 126)
    {
      my_putchar(92);
      my_putchar((c / 64) + '0');
      my_putchar((c / 8) + '0');
      my_putchar((c % 8) + '0');
    }
  else
    my_putchar(c);
}

int	my_putstr_spe(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (-1);
  while (str[i] != '\0')
    {
      my_putchar_spe(str[i]);
      i++;
    }
  return (0);
}
