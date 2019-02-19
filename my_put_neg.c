#include "my.h"

int	my_put_neg(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  return (nb);
}
