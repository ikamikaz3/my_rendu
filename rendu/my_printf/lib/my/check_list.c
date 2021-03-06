/*
** check_neg.c for printf in /home/billot_t/rendu/PSU_2019_my_printf
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Nov 13 13:58:02 2014 Thomas Billot
** Last update Thu Nov 13 17:15:31 2014 Thomas Billot
*/

#include "../../include/printf.h"

int		check_list(char c)
{
  t_list	char_list[] = {{'d', &char_d},
			       {'i', &char_d},
			       {'c', &char_c},
			       {'s', &char_s},
			       {'x', &char_x},
			       {'X', &char_X},
			       {'b', &char_b},
			       {'o', &char_o},
			       {'p', &char_p},
			       {'u', &char_u},
			       {'S', &char_S},
			       {'\0', NULL}};
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (char_list[i].f != NULL)
    {
      if (char_list[i].specifier == c)
	{
	  return(0);
	}
      else
	i = i + 1;
    }
  return (1);
}
