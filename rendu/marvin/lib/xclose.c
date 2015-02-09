/*
** xclose.c for xclose in /home/billot_t/rendu/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Dec 16 18:48:17 2014 Thomas Billot
** Last update Tue Dec 16 18:49:56 2014 Thomas Billot
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int	xclose(int fd)
{
  if (close(fd) == - 1)
    {
      my_putstr("Close error\n");
      exit(EXIT_FAILURE);
    }
  return (0);
}
