#include "my.h"

int	my_put_oct_nbr_spe_va(va_list va)
{
  my_putstr_spe(va_arg(va, char *));
  return (0);
}
