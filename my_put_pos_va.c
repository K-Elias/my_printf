/*
** my_put_pos_va.c for vapos in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Sat Apr 16 22:02:16 2016 elias aboussair
** Last update Sat Apr 16 22:15:48 2016 elias aboussair
*/

#include "my.h"

int	my_put_pos_va(va_list va)
{
  my_put_pos(va_arg(va, unsigned int));
  return (0);
}
