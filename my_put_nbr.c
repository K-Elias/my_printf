/*
** my_put_nbr.c for put_nbr in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Mon Apr 11 18:21:54 2016 elias aboussair
** Last update Sun Apr 17 18:06:32 2016 elias aboussair
*/

#include "my.h"

int		my_put_nbr(int nb)
{
  unsigned int	i;

  i = my_put_neg(nb);
  if (i >= 10)
    my_put_nbr(i / 10);
  my_putchar((i % 10) + '0');
  return (0);
}
