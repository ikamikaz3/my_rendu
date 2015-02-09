/*
** convert_base.c for convert_base in /home/billot_t/rendu/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Dec 16 19:26:03 2014 Thomas Billot
** Last update Tue Dec 16 19:26:05 2014 Thomas Billot
*/

#include <stdlib.h>
#include "my.h"

char    *convert_base(char *nbr, char *base_from, char *base_to)
{
  int   i;
  int   nb;
  char  *res;

  i = 0;
  res = malloc(sizeof(char) * 300);
  nb = my_getnbr_base(nbr, base_from);
  while (nb > 0)
    {
      res[i] = base_to[nb % my_strlen(base_to)];
      nb = nb / my_strlen(base_to);
      i = i + 1;
    }
  res[i] = '\0';
  res = my_revstr(res);
  return (res);
}
