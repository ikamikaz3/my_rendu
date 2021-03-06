/*
** my_putnbr_base.c for my_putnbr_base in /home/billot_t/rendu/printf/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Nov  6 15:16:28 2014 Thomas Billot
** Last update Fri Nov  7 18:03:29 2014 Thomas Billot
*/

#include <stdlib.h>

int	my_putnbr_base(int nbr, char *base)
{
  int	i;
  int	length;
  char  *dest;

  i = 0;
  dest = malloc((sizeof(char)*100));
  length = my_strlen(base);
  while (nbr)
    {
      dest[i++] = base[nbr % length];
      nbr /= length;
    }
  my_revstr(dest);
  my_putstr(dest);
  return (i);
}
