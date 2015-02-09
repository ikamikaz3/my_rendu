/*
** my_strndup.c for lib in /home/billot_t/rendu/marvin
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sun Jan  4 12:25:00 2015 Thomas Billot
** Last update Sun Jan  4 18:26:38 2015 Thomas Billot
*/

#include "my.h"

char	*my_strldup(char *src, int l)
{
  char	*dest;
  int	i;
  int	j;

  dest = xmalloc(sizeof(char) *);
  i = 0;
  while(src[i] != '\0')
    {
      if (i >= l)
	{
	  dest[j] = src[i];
	  j = j + 1;
	}
      i = i + 1;
    }
  return (0);
}
