/*
** my_key_functions.c for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Feb  3 16:53:56 2015 Thomas Billot
** Last update Thu Feb  5 10:56:00 2015 Thomas Billot
*/

#include <ncurses.h>
#include "allum1.h"
#include "my.h"

t_list	*my_up_arrow(t_list *current)
{
  clear();
  if (my_interface() != 0)
    {
      endwin();
      exit(EXIT_SUCCESS);
    }
  refresh();
  current->cursor = 0; 
  current = current->prev;
  if (current->matchs == 0)
    current = current->prev;
  current->cursor = 1;
  return (current);
}

t_list	*my_down_arrow(t_list *current)
{
  clear();
  if (my_interface() != 0)
    {
      endwin();
      exit(EXIT_SUCCESS);
    }
  refresh();
  current->cursor = 0; 
  current = current->next;
  if (current->matchs == 0)
    current = current->next;
  current->cursor = 1;
  return (current);
}

t_list	*my_enter(t_list *current)
{
  int	ch;
  int	nbr;
  char  *str;

  str = xmalloc(sizeof(char*) * 2);
  mvaddstr(12, 4, "Entrez un nombre d'allumettes à enlevé :");
  refresh();
  nocbreak();
  mvgetnstr(12, 46, str, 2);
  nbr = my_getnbr(str);
  if (nbr <= 0)
    {
      mvaddstr(13, 4, "Entrez un nombre supérieur à 0\n");
      refresh();
      mvgetnstr(12, 46, str, 2);
      nbr = my_getnbr(str);
    }
  if ((current->matchs = current->matchs - nbr) <= 0)
    my_rm_in_list(current);
  cbreak();
  clear();
  my_interface();
  return(current);
}
