/*
** my_put_hex_nbr.c for hex in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Tue Apr 12 22:08:25 2016 elias aboussair
** Last update Sun Apr 17 22:24:26 2016 elias aboussair
*/

#include <unistd.h>
#include "my.h"

void	my_put_hex(char c)
{
  if (c > 9 + '0' && c < 16 + '0')
    c = c - '0' - 10 + 'a';
  write(1, &c, 1);
}

int		my_put_hex_nbr(unsigned int nb)
{
  unsigned int	i;

  i = my_put_neg(nb);
  if (i > 15)
    my_put_hex_nbr(i / 16);
  my_put_hex((i % 16) + '0');
  return (0);
}
