/*
** my_put_ptr_va.c for azerty in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Sun Apr 17 15:48:22 2016 elias aboussair
** Last update Sun Apr 17 23:20:53 2016 elias aboussair
*/

#include "my.h"

int	my_put_ptr_va(va_list va)
{
  my_put_ptr(va_arg(va, int));
  return (0);
}
