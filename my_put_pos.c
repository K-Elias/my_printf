#include "my.h"

unsigned int	my_put_pos(unsigned int nb)
{
  if (nb > 9)
    my_put_pos(nb / 10);
  my_putchar((nb % 10) + '0');
  return (0);
}
