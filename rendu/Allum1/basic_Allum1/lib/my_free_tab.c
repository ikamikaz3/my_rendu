/*
** my_free_tab.c for my_free_tab in /home/billot_t/rendu/lib/my
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Dec 16 19:02:23 2014 Thomas Billot
** Last update Tue Dec 16 19:03:40 2014 Thomas Billot
*/

#include "my.h"

void	my_free_tab(char **tab)
{
  int	i;

  i = 0;
  while (tab != '\0' && tab[i])
    xfree(tab[i + 1]);
  if (tab != '\0')
    xfree(tab);
}
