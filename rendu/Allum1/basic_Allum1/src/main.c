/*
** main.c for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Feb  2 10:30:31 2015 Thomas Billot
** Last update Wed Feb  4 09:54:12 2015 Thomas Billot
*/

#include <ncurses.h>
#include "allum1.h"
#include "my.h"

int			launch_default_map(t_list *root)
{
  int			matches;

  matches = 3;
  my_add_in_list(root, 1, 1);
  while (matches <= 7)
    {
      my_add_in_list(root, matches, 0);
      matches = matches + 2;
    }
  return(0);
}		

int			main(void)
{
  t_list		*root;

  initscr();
  keypad(stdscr, TRUE);
  cbreak();
  root = init_list();
  launch_default_map(root);
  if (my_interface() != 0)
    {
      endwin();
      return (-1);
    }
  refresh();
  my_treatment(root);
  refresh();
  getch();
  endwin();
  return (0);
}
