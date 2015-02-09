/*
** my_getnbr.c for my_getnbr in /home/billot_t/rendu/j06
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Oct  9 09:43:42 2014 thomas billot
** Last update Thu Dec 18 15:19:35 2014 Thomas Billot
*/

#include <stdio.h>
#include "my.h"

int	get_number(char *str, int i, int sign)
{
  int	num;
  int	saver;

  num = 0;
  while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
      saver = num;
      if (saver > (num * 10 + (str[i] - '0')))
	return (0);
      num = num * 10 + (str[i++] - '0');
    }
  if (sign % 2 == 1)
    num = num * - 1;
  return (num);
}

int	my_getnbr(char *str)
{
  int	i;
  int	num;
  int	sign;

  i = 0;
  sign = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '-')
	sign++;
      if (str[i] >= '0' && str[i] <= '9')
	{
	  num = get_number(str, i, sign);
	  return (num);
	}
      i = i + 1;
    }
  return (0);
}
