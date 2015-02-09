/*
** my_putstr_tty.c for my_select in /home/billot_t/rendu/PSU_2014_my_select
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sun Jan 11 17:58:22 2015 Thomas Billot
** Last update Sun Jan 11 20:31:04 2015 Thomas Billot
*/

#include "my_select.h"
#include "my.h"

void	my_putstr_tty(int fd_tty, char *string)
{
  xwrite(fd_tty, string, my_strlen(string));
}
