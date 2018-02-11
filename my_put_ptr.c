/*
** my_put_ptr.c for putadr in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Sat Apr 16 22:41:06 2016 elias aboussair
** Last update Sun Apr 17 22:22:26 2016 elias aboussair
*/

#include "my.h"

int	my_put_ptr(unsigned long nb)
{
  if (!(nb))
    my_putstr("(nil)");
  else
    {
      my_putchar('0');
      my_putchar('x');
      my_put_hex_nbr(nb);
    }
  return (0);
}
