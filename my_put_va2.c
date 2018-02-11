/*
** my_put_va2.c for azerty in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Fri Apr 15 19:29:07 2016 elias aboussair
** Last update Sat Apr 16 17:37:02 2016 elias aboussair
*/

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
