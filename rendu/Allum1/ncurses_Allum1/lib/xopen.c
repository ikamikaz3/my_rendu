/*
** xopen.c for xopen in /home/billot_t/rendu/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Dec 16 18:45:12 2014 Thomas Billot
** Last update Mon Jan 12 17:07:51 2015 Thomas Billot
*/

#include <sys/types.h>
#include <sys/stat.h>
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
