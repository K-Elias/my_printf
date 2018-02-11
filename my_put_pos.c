/*
** my_put_pos.c for pos in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Sat Apr 16 21:42:24 2016 elias aboussair
** Last update Sat Apr 16 22:08:35 2016 elias aboussair
*/

#include "my.h"

unsigned int	my_put_pos(unsigned int nb)
{
  if (nb > 9)
    my_put_pos(nb / 10);
  my_putchar((nb % 10) + '0');
  return (0);
}
