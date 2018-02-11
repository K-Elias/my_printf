/*
** my_putstr.c for putstr in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Mon Apr 11 18:26:41 2016 elias aboussair
** Last update Sun Apr 17 22:23:25 2016 elias aboussair
*/

#include <stdlib.h>
#include "my.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (-1);
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
  return (0);
}
