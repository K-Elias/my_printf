#include "my.h"

int		my_put_oct_nbr(unsigned int nb)
{
  unsigned int	i;

  i = my_put_neg(nb);
  if (nb > 9)
    my_put_oct_nbr(i / 8);
  my_putchar((i % 8) + '0');
  return (0);
}
