/*
** my_put_nbr_binaire.c for binaire in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Tue Apr 12 21:41:53 2016 elias aboussair
** Last update Sun Apr 17 18:04:02 2016 elias aboussair
*/

#include "my.h"

int		my_put_binary_nbr(unsigned int nb)
{
  unsigned int	i;

  i = my_put_neg(nb);
  if (i >= 2)
    my_put_binary_nbr(i / 2);
  my_putchar((i % 2) + '0');
  return (0);
}
