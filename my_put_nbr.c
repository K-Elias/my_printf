#include "my.h"

int		my_put_nbr(int nb)
{
  unsigned int	i;

  i = my_put_neg(nb);
  if (i >= 10)
    my_put_nbr(i / 10);
  my_putchar((i % 10) + '0');
  return (0);
}
