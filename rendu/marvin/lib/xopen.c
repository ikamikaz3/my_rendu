/*
** xopen.c for xopen in /home/billot_t/rendu/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Dec 16 18:45:12 2014 Thomas Billot
** Last update Tue Dec 16 18:47:51 2014 Thomas Billot
*/

#include <sys/types.h>
#include <sys/stats.h>
#include <fcntl.h>
#include "my.h"

int	xopen(char *file, int flags)
{
  int	fd;
  
  if ((fd = open(file, flags)) == -1)
    {
      my_putstr(file);
      my_putstr(": No such file or directory\n");
      exit(EXIT_FAILURE);
    }
  return (fd);
}
