/*
** main.c for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Feb  2 10:30:31 2015 Thomas Billot
** Last update Mon Feb  9 10:54:27 2015 Thomas Billot
*/

#include <ncurses.h>
#include "allum1.h"
#include "my.h"

int			**launch_default_map(t_list *root)
{
  int			matches;

  matches = 3;
  my_add_in_list(root, 1, 1);
  while (matches <= 7)
    {
      my_add_in_list(root, matches, 0);
      matches = matches + 2;
    }
  
}		

int			**create_map(char *string, t_list *root)
{
  int			map_size;
  int			**map;
  int			line;
  int			line_size;

  map_size = my_getnbr(string);
  if (map_size <= 1)
    return (NULL);
  line = ;
  line_size = 1;
  if ((map = xmalloc(sizeof(char*) * map_size)) == NULL)
    return (NULL);
  while (map[line] != NULL)
    {
      if ((map[line] = xmalloc(sizeof(char) * line_size)) == NULL)
	return (NULL);
      my_add_in_list(root, line_size, 0);
      line_size = line_size + 2;
    }
}

char			**get_map(int argc, char *argv[], t_list *root)
{
  int			line;

  line = 1;
  if (argc == 1)
    return (NULL);
  if (my_strncmp(argv[line], "--line_size", 12) == 0)
    map = create_map(argv[line++], root);
  return (map);
}

int			main(int argc, char *argv[])
{
  t_list		*root;
  int			**map;
  initscr();
  keypad(stdscr, TRUE);
  cbreak();
  root = init_list();
  if ((map = get_map(argc, argv, root)) == NULL)
    map = launch_default_map(root);
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
