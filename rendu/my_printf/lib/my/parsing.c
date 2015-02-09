/*
** parsing.c for printf in /home/billot_t/rendu/PSU_2019_my_printf
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Nov 13 11:21:04 2014 Thomas Billot
** Last update Thu Nov 13 17:12:40 2014 Thomas Billot
*/

#include "../../include/printf.h"

int		parsing(int i, char specifier, va_list ap)
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
  int		counter;
  int		return_value;

  while (char_list[counter].f != NULL)
    {
      if (char_list[counter].specifier == specifier)
	return_value = char_list[counter].f(ap);
      counter = counter + 1;
    }
  return (i + return_value);
}
