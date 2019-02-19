#include "my.h"

int	my_putchar_va(va_list va)
{
  my_putchar(va_arg(va, int));
  return (0);
}

int	my_putstr_va(va_list va)
{
  my_putstr(va_arg(va, char*));
  return (0);
}

int	my_put_nbr_va(va_list va)
{
  my_put_nbr(va_arg(va, int));
  return (0);
}

int	my_put_oct_nbr_va(va_list va)
{
  my_put_oct_nbr(va_arg(va, int));
  return (0);
}

int	my_put_binary_nbr_va(va_list va)
{
  my_put_binary_nbr(va_arg(va, int));
  return (0);
}
