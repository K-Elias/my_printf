/*
** my_put_list.c for viosdfovihdf in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Fri Apr 15 18:50:41 2016 elias aboussair
** Last update Sat Apr 16 16:27:07 2016 elias aboussair
*/

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
