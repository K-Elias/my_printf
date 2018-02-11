/*
** my_putchar.c for putchar in /home/abouss_e/rendu/PSU_2015_my_printf
**
** Made by elias aboussair
** Login   <abouss_e@epitech.net>
**
** Started on  Mon Apr 11 18:21:10 2016 elias aboussair
** Last update Sun Apr 17 18:04:49 2016 elias aboussair
*/

#include <unistd.h>
#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
