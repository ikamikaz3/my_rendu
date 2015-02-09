/*
** my_strcpy.c for Exo1 in /home/billot_t/rendu/j06
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Oct  6 13:40:27 2014 thomas billot
** Last update Tue Dec 16 19:15:54 2014 Thomas Billot
*/

#include "my.h"

char 	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
