/*
** xmalloc.c for xmalloc in /home/billot_t/rendu/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Dec 16 18:39:03 2014 Thomas Billot
** Last update Tue Dec 16 18:43:09 2014 Thomas Billot
*/

#include <stdlib.h>
#include "my.h"

void	*xmalloc(int size)
{
  void	*ptr;

  if ((ptr = malloc(size)) == NULL)
    {
      my_putstr("Couldn't allocate\n");
      exit(EXIT_FAILURE);
    }
  return (ptr);
}
