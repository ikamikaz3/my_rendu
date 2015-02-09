/*
** my_strlen.c for my_strlen in /home/billot_t/rendu/lib
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 10:08:50 2014 thomas billot
** Last update Tue Dec 16 18:52:54 2014 Thomas Billot
*/

#include "my.h"

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
