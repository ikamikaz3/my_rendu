/*
** my_putstr.c for my_putstr in /home/billot_t/rendu/lib
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 10:06:32 2014 thomas billot
** Last update Sat Jan  3 11:36:42 2015 Thomas Billot
*/

#include "my.h"

void	my_putstr(char *str)
{
  write(1, str, my_strlen(str));
}
