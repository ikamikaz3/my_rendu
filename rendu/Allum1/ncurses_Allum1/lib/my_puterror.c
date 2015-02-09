/*
** my_puterror.c for lib in /home/billot_t/rendu/CPE_2014_bsq
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Jan 12 16:51:11 2015 Thomas Billot
** Last update Mon Jan 12 17:02:20 2015 Thomas Billot
*/

#include <unistd.h>
#include "my.h"

void	my_puterror(char *string)
{
  write(2, string, my_strlen(string));
}
