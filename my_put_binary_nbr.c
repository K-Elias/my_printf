#include "my.h"

int		my_put_binary_nbr(unsigned int nb)
{
  unsigned int	i;

  i = my_put_neg(nb);
  if (i >= 2)
    my_put_binary_nbr(i / 2);
  my_putchar((i % 2) + '0');
  return (0);
}
