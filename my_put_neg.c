/*
** my_put_neg.c for neg in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Tue Apr 12 22:48:06 2016 elias aboussair
** Last update Sat Apr 16 13:13:48 2016 elias aboussair
*/

#include "my.h"

int	my_put_neg(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  return (nb);
}
