/*
** my_putchar.c for my_putchar in /home/billot_t/rendu
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 09:53:52 2014 thomas billot
** Last update Tue Dec 16 18:52:28 2014 Thomas Billot
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
