#include "my.h"

int	my_put_ptr_va(va_list va)
{
  my_put_ptr(va_arg(va, int));
  return (0);
}
