/*
** my_put_hex_nbr.c for hexnbr in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Tue Apr 12 18:03:02 2016 elias aboussair
** Last update Sun Apr 17 20:08:28 2016 elias aboussair
*/

#include "my.h"

int		my_put_oct_nbr(unsigned int nb)
{
  unsigned int	i;

  i = my_put_neg(nb);
  if (nb > 9)
    my_put_oct_nbr(i / 8);
  my_putchar((i % 8) + '0');
  return (0);
}
