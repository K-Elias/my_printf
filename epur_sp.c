/*
** epur_str.c for ' ' in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Sun Apr 17 16:44:49 2016 elias aboussair
** Last update Sun Apr 17 18:29:44 2016 elias aboussair
*/

#include "my.h"

int	epur_sp(const char *str, int i)
{
  my_putchar(' ');
  while (str[i] == ' ')
    i++;
  return (i - 1);
}
