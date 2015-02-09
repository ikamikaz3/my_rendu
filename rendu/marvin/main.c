/*
** main.c for marvin in /home/billot_t/rendu/marvin
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sat Jan  3 10:41:36 2015 Thomas Billot
** Last update Sat Jan  3 18:57:54 2015 Thomas Billot
*/

#include <stdlib.h>
#include "my.h"
#include "marvin.h"

int	main(int ac, char *argv[])
{
  int	arg_number;
  int	ret;
  char	*string;
  char	**tab;

  arg_number = ac - 1;
  if (arg_number == 0)
    my_putstr("> Syntax error: ./marvin \"[Function/Variable Declaration]\n");
  else if (arg_number > 1)
    my_putstr("> Too many args: ./marvin \"[Function/Variable Declaration]\n");
  else
    {
      string = my_strdup(argv[1]);
      tab = my_str_to_wordtab(string);
      if ((ret = parsing(tab)) == 1)
	return (1);
    }
  return (0);
}
