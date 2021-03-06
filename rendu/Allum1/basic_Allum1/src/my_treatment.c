/*
** my_treatment.c for Allum1 in /home/billot_t/rendu/Allum1
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Feb  3 16:20:10 2015 Thomas Billot
** Last update Thu Feb  5 09:55:44 2015 Thomas Billot
*/

#include <ncurses.h>
#include "allum1.h"
#include "my.h"

t_list		*my_player_turn(t_list *current, int *turn)
{
  int		ch;
  int		i;
  t_ftab	tab[] = {{KEY_UP, &my_up_arrow},
			 {KEY_DOWN, &my_down_arrow},
			 {10, &my_enter}};
        
  i = 0;
  while ((ch = getch()) != 27)
    {
      while (tab[i].fptr != NULL)
	{
	  if (ch == tab[i].key)
	    {
	      current = tab[i].fptr(current);
	      if (ch == 10)
		*turn = 1;
	      return (current);
	    }
	  i = i + 1;
	}
      i = 0;
    }
  endwin();
  exit(EXIT_SUCCESS);
}

int		my_bot_turn(t_list *root)
{
  clear();
  my_interface();
  mvaddstr(12, 5, "The bot is thinking ...");
  refresh();
  
  return (-1);
}

int		my_treatment(t_list *root)
{
  int		end_of_game;
  int		turn;
  t_list	*current;

  turn = 0;
  current = root->next;
  end_of_game = -1;
  my_aff_matches(root);
  while (end_of_game < 0)
    {
      if (turn == 0)
	{
	  current = my_player_turn(current, &turn);
	  my_aff_matches(root);
	}
      else if (turn == 1)
	{
	  turn = 0;
	  end_of_game = my_bot_turn(root);
	}
    }
  return (0);
}
	
