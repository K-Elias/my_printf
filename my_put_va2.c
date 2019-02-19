#include "my.h"

int	my_put_hex_nbr_va(va_list va)
{
  my_put_hex_nbr(va_arg(va, int));
  return (0);
}

int	my_put_hexmaj_nbr_va(va_list va)
{
  my_put_hexmaj_nbr(va_arg(va, int));
  return (0);
}
