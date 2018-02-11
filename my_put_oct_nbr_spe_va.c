/*
** my_put_oct_nbr_spe_va.c for vavava in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Sat Apr 16 20:53:49 2016 elias aboussair
** Last update Sat Apr 16 22:32:19 2016 elias aboussair
*/

#include "my.h"

int	my_put_oct_nbr_spe_va(va_list va)
{
  my_putstr_spe(va_arg(va, char *));
  return (0);
}
