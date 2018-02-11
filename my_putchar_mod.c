/*
** my_putchar_mod.c for poi in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Sun Apr 17 18:43:46 2016 elias aboussair
** Last update Sun Apr 17 18:44:42 2016 elias aboussair
*/

#include "my.h"

void	my_putchar_mod(char c)
{
  my_putchar('%');
  my_putchar(c);
}
