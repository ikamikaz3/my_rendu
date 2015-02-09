/*
** my_interface.c for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Mon Feb  2 16:16:44 2015 Thomas Billot
** Last update Wed Feb  4 13:22:34 2015 Thomas Billot
*/

#include <ncurses.h>
#include "allum1.h"
#include "my.h"

int	my_draw_corner(int width, int length)
{
  mvaddch(0, 0, ACS_DIAMOND);
  mvaddch(width, length, ACS_DIAMOND);
  mvaddch(0, length, ACS_DIAMOND);
  mvaddch(width, 0, ACS_DIAMOND);
  return (0);
}

int	my_draw_hline(int length, int row)
{
  int	i;

  i = 1;
  while (i < length)
    mvaddch(row, i++, ACS_HLINE);
  return (0);
}

int	my_draw_vline(int length, int col)
{
  int	i;

  i = 1;
  while (i < length)
    mvaddch(i++, col, ACS_VLINE);
  return (0);
}

int	my_draw_all_messages(int length)
{
  char	*str1;
  char	*str2;
  
  str1 = "-- Allum1 by Billot_t --";
  str2 = "Press [ESC] to exit.";
  mvprintw(5, (length - my_strlen(str1)) / 2, "%s", str1);
  mvprintw(1, 1, "%s", str2);
  return (0);
}

int	my_interface()
{
  int	width;
  int	length;
  int	window_x;
  int	window_y;
  
  width = 50;
  length = 50;
  getmaxyx(stdscr, window_y, window_x);
  if (window_y < width || window_x < length)
    {
      my_puterror("Window is too small : resize it and relaunch\n");
      return (1);
    }
  my_draw_corner(width, length);
  my_draw_hline(length, 0);
  my_draw_hline(length, width);
  my_draw_vline(length, 0);
  my_draw_vline(length, length);
  mvaddch(10, 0, ACS_LTEE);
  mvaddch(10, length, ACS_RTEE);
  my_draw_hline(length, 10);
  my_draw_all_messages(length);
  return (0);
}
