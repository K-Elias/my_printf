#include "my.h"

int	my_put_ptr(unsigned long nb)
{
  if (!(nb))
    my_putstr("(nil)");
  else
    {
      my_putchar('0');
      my_putchar('x');
      my_put_hex_nbr(nb);
    }
  return (0);
}
