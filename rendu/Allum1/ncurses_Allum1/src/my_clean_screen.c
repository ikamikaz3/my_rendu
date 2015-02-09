/*
** my_clean_screen.c for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Feb  2 10:54:26 2015 Thomas Billot
** Last update Mon Feb  2 11:01:49 2015 Thomas Billot
*/

#include "allum1.h"

int	my_clean_screen(void);
{
  char	*str;

  if ((str = tgetstr("cl", NULL)) != NULL)
    {
      tputstr(str, 1, my_putchar);
      return (0);
    }
  else
    {
      my_puterror("Error : Clean screen failed\n");
      return (1);
    }
}
