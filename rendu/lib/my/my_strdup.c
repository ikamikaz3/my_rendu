/*
** my_strdup.c for lib in /home/billot_t/rendu
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sat Jan  3 11:39:02 2015 Thomas Billot
** Last update Sat Jan  3 11:41:00 2015 Thomas Billot
*/

#include "my.h"

char	*my_strdup(char	*str)
{
  int	i;
  char	*new_str;

  i = 0;
  new_str = xmalloc(my_strlen(str));
  while (str[i])
    {
      new_str[i] = str[i];
      i = i + 1;
    }
  return (new_str);
}
