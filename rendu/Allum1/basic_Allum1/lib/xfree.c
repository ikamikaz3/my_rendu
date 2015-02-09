/*
** xfree.c for xfree in /home/billot_t/rendu/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Dec 16 18:43:46 2014 Thomas Billot
** Last update Fri Jan 16 15:51:09 2015 Thomas Billot
*/

#include <stdlib.h>
#include "my.h"

void	xfree(void *ptr)
{
  if (ptr != NULL)
    free(ptr);
}
