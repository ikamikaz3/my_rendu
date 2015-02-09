/*
** my_strcat.c for my_strcat in /home/billot_t/rendu/lib
** 
** Made by thomas billot
** Login   <billot_t@epitech.net>
** 
** Started on  Wed Oct  8 10:19:13 2014 thomas billot
** Last update Tue Dec 16 18:53:05 2014 Thomas Billot
*/

#include "my.h"

char	*my_strcat(char *dest, char *src)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  dest[i] = '\0';
  return (dest);
}
