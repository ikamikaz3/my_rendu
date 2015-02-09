/*
** parsing.c for marvin in /home/billot_t/rendu/marvin
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Sat Jan  3 11:04:30 2015 Thomas Billot
** Last update Sun Jan  4 17:42:26 2015 Thomas Billot
*/

#include "my.h"
#include "marvin.h"

int	my_is_funct(char **tab, int line)
{
  while(tab[line] != NULL)
    {
      line = line + 1;	
    }
  if (line == 2)
    return (1);
  else 
    return (0);
}

int	parsing(char **tab)
{
  int	i;
  int	sign;
  int	line;
  char	**types;
  char	**fr_types;

  i = 0;
  line = 0;
  while (tab[i] != '\0')
    {
      my_putstr(tab[i]);
      my_putchar(' ');
      i = i + 1;
    }
  types = init_types(xmalloc(sizeof(char*) * 5));
  fr_types = init_fr_types(xmalloc(sizeof(char*) * 5));
  if (my_strcmp(tab[0], "unsigned") == 0)
    {
      sign = 1;
      line = 1;
    }
  printf("Déclaration\n");
  if (my_is_funct(tab, line) == 0)
    my_read_func(tab, line, types, fr_types);
  return (0);
}

int	my_read_func(char **tab, int line, char **types, char **fr_types)
{
  int	i;
  char	*ret_type;
  char	*func_name;

  i = 0;
  func_name = NULL;
  ret_type = my_get_rettype(tab, line, types, fr_types);
  line = line + 1;
  if ((func_name = my_get_funcname(tab, line)) != NULL)
    printf(" de la fonction %s", func_name);
  return (0);
}

char	*my_get_funcname(char **tab, int line)
{
  int	i;
  char  *func_name;

  i = 0;
  while (tab[line][i] != '\0')
    {
      if (tab[line][i] != '*')
	func_name = my_strldup(tab[line], i);
    }
  printf("leeeeeeeeeeel\n");
  if (func_name == NULL)
    return (NULL);
  else
    return (func_name);
}

char	*my_get_rettype(char **tab, int line, char **types, char **fr_types)
{
  char	*ret_type;
  int	i;

  i = 0;
  
  while (tab[line] != NULL)
    {
      if (my_strcmp(tab[line], types[i]) != 0)
	{
	  i = i + 1;
	  if (i > 4)
	    exit(EXIT_FAILURE);
	}
      else
	{
	  ret_type = my_strdup(fr_types[i]);
	  return(ret_type);
	}
    }
  return (0);
}
