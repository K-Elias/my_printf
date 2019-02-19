#include <stdlib.h>
#include "my.h"

static const	t_flags tab[12] = {
    {'c', &my_putchar_va},
    {'d', &my_put_nbr_va},
    {'i', &my_put_nbr_va},
    {'s', &my_putstr_va},
    {'o', &my_put_oct_nbr_va},
    {'b', &my_put_binary_nbr_va},
    {'x', &my_put_hex_nbr_va},
    {'X', &my_put_hexmaj_nbr_va},
    {'S', &my_put_oct_nbr_spe_va},
    {'u', &my_put_pos_va},
    {'p', &my_put_ptr_va},
    {0}
};

int		find_flag(const char *format, int i, va_list va)
{
  int		bool;
  int		compt;

  bool = 42;
  compt = -1;
  if (format[i] == '%' && (format[i + 1] == ' ' || format [i + 1] == '\t'))
    i = epur_sp(format, ++i);
  while (++compt < 11)
    if (tab[compt].flags == format[i + 1])
      bool = tab[compt].func(va);
  if (bool != 0)
    my_putchar_mod(format[i + 1]);
  i++;
  return (i);
}

int		my_printf(const char *format, ...)
{
  va_list	va;
  int		i;

  va_start(va, format);
  i = -1;
  if (format == NULL)
    return (-1);
  while (format[++i])
    {
      if (format[i] == '%' && format[i + 1] != '\0')
	i = find_flag(format, i, va);
      else
	my_putchar(format[i]);
    }
  va_end(va);
  return (i);
}
