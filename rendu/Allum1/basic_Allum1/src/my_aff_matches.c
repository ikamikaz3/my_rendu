/*
** my_aff_matches.c for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Feb  3 13:33:30 2015 Thomas Billot
** Last update Wed Feb  4 18:15:38 2015 Thomas Billot
*/

#include <ncurses.h>
#include "allum1.h"
#include "my.h"

void		my_aff_odd(t_list *current, int pos_x, int pos_y)
{
  int		i;

  i = 0;
  if (current->cursor == 1)
    {
      mvaddch(pos_y, 16, '>');
      mvaddch(pos_y, 33, '<');
    }
  mvaddch(pos_y, pos_x, '|');
  while (i <= (current->matchs / 2))
    {
      mvaddch(pos_y, (pos_x - i), '|');
      mvaddch(pos_y, (pos_x + i), '|');
      i = i + 1;
    }
}

void		my_aff_even(t_list *current, int pos_x, int pos_y)
{
  int		i;

  i = 1;
  if (current->cursor == 1)
    {
      mvaddch(pos_y, 16, '>');
      mvaddch(pos_y, 33, '<');
    }
  while (i <= (current->matchs / 2))
    {
      mvaddch(pos_y, (pos_x - i), '|');
      mvaddch(pos_y, (pos_x + i), '|');
      i = i + 1;
    }
}

int		my_aff_matches(t_list *root)
{
  t_list	*current;
  int		pos_x;
  int		pos_y;
  int		result;

  current = root->next;
  pos_x = 25;
  pos_y = 25;
  while  (current != root)
    {
      if (current->matchs != 0)
	{
	  if ((result = current->matchs % 2) == 1)
	    my_aff_odd(current, pos_x, pos_y);
	  else if ((result = current->matchs % 2) == 0)
	    my_aff_even(current, pos_x, pos_y);
	  current = current->next;
	  pos_y = pos_y + 2;
	}
      else
	pos_y = pos_y - 2;
    }
  refresh();
  return (0);
}
