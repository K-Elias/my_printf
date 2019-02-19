#include "my.h"

int	my_put_pos_va(va_list va)
{
  my_put_pos(va_arg(va, unsigned int));
  return (0);
}
